// undefined FUN_0800a6f0(void)
// entry 0x800a6f0


void FUN_0800a6f0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  iVar2 = 0x0882db2c;
  piVar1 = 0x08df2048;
  if ((((*(ushort *)(0x02000ab0 + 0x000007d4) >> 8 == 1) &&
       ((*(ushort *)(0x02000ab0 + 0x000007d4) & 0xff) == 0)) &&
      (*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 1)) &&
     (((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 1 &&
      (*(char *)(0x02000ab0 + 0x0002d024) != '\x02')))) {
    pbVar6 = (byte *)(0x02000ab0 + 0x0002d02c);
    FUN_08001ea4((int)0x08df2048 +
                 (*(int *)0x08df2048) + (uint)*(byte *)((uint)(*pbVar6 >> 1) + 0x0882db2c) * 0x14,0x4000)
    ;
    FUN_08002208((int)piVar1 + *piVar1 + (uint)*(byte *)((uint)(*pbVar6 >> 1) + iVar2) * 0x14 + 0xc,
                 0);
    iVar5 = 0x08df2084;
    FUN_08001ea4(*piVar1 + (uint)*(byte *)((uint)(*pbVar6 >> 1) + iVar2) * 0x14 + 0x08df2084,
                 0x4000);
    FUN_08002208(*piVar1 + (uint)*(byte *)((uint)(*pbVar6 >> 1) + iVar2) * 0x14 + iVar5 + 0xc,0);
  }
  piVar3 = 0x08df2048;
  piVar1 = 0x08df2048;
  if (((*(ushort *)(0x02000ab0 + 0x000007d4) >> 8 == 1) &&
      ((*(ushort *)(0x02000ab0 + 0x000007d4) & 0xff) == 3)) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 1 &&
      ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 2)))) {
    pbVar6 = (byte *)(0x02000ab0 + 0x0002d02f);
    if (*pbVar6 < 0x14) {
      uVar4 = FUN_08129120(*pbVar6,5);
      iVar2 = 0x08df20c0;
      FUN_08001ea4(*piVar1 + (uVar4 & 0xff) * 0x14 + 0x08df20c0,0x4000);
      uVar4 = FUN_08129120(*pbVar6,5);
      FUN_08002208(*piVar1 + (uVar4 & 0xff) * 0x14 + iVar2 + 0xc,0);
    }
    else {
      iVar5 = FUN_08128fb8(*pbVar6 - 0x14,3);
      iVar2 = 0x08df2110;
      FUN_08001ea4(*piVar3 + iVar5 * 0x14 + 0x08df2110,0x4000);
      iVar5 = FUN_08128fb8(*pbVar6 - 0x14,3);
      FUN_08002208(*piVar3 + iVar5 * 0x14 + iVar2 + 0xc,0);
    }
  }
  return;
}


