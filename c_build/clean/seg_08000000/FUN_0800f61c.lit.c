// undefined FUN_0800f61c(void)
// entry 0x800f61c


void FUN_0800f61c(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  iVar2 = 0x08df2c8c;
  piVar1 = 0x08df2048;
  uVar3 = *(uint *)(param_1 + 0x5c);
  if ((*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 4) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 5)) {
    pbVar5 = (byte *)(0x02000ab0 + 0x0002d02a);
    FUN_08001ea4((*(int *)0x08df2048) + (uint)*pbVar5 * 0x14 + 0x08df2c8c,0x4000);
    FUN_08002208(*piVar1 + (uint)*pbVar5 * 0x14 + iVar2 + 0xc,0);
  }
  iVar2 = 0x02000a0c;
  iVar4 = ((uVar3 & 0xffff) >> 4) * 4;
  *(undefined2 *)(iVar4 + 0x02000a0c) = 0;
  *(short *)(iVar4 + iVar2 + 2) =
       (short)((uint)(*(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x48)) >> 8);
  return;
}


