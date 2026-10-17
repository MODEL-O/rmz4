// undefined FUN_0800dad0(void)
// entry 0x800dad0


void FUN_0800dad0(void)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  iVar2 = 0x08df2138;
  piVar1 = 0x08df2048;
  if ((*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 3) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 3)) {
    pbVar3 = (byte *)(0x02000ab0 + 0x0002d029);
    FUN_08001ea4((*(int *)0x08df2048) + (uint)(*pbVar3 >> 1) * 0x14 + 0x08df2138,0x4000);
    FUN_08002208(*piVar1 + (uint)(*pbVar3 >> 1) * 0x14 + iVar2 + 0xc,0);
  }
  return;
}


