// undefined FUN_0806ad2c(void)
// entry 0x806ad2c


undefined4 FUN_0806ad2c(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  undefined1 auStack_34 [4];
  byte abStack_30 [4];
  int local_2c [2];
  byte local_24;
  
  FUN_08129258(auStack_34,DAT_0806adcc,4);
  FUN_08129258(abStack_30,DAT_0806add0,4);
  bVar1 = *(byte *)(param_1 + 0xc4);
  local_24 = 3;
  uVar3 = (uint)(bVar1 >> 6);
  local_2c[0] = *(int *)(param_1 + 0x54);
  local_2c[1] = *(undefined4 *)(param_1 + 0x58);
  pbVar4 = abStack_30 + uVar3;
  iVar6 = (uint)*pbVar4 * 2 + -1;
  iVar5 = local_2c[uVar3 & 1] + iVar6 * 0x2c00;
  iVar2 = FUN_0806a7c8(param_1,auStack_34[uVar3]);
  if ((int)(((iVar5 - iVar6) - iVar2) * ((uint)*pbVar4 * 2 + -1)) < 0) {
    uVar3 = (bVar1 + 0x80 & 0xff) >> 6 & (uint)local_24;
    pbVar4 = abStack_30 + uVar3;
    iVar6 = (uint)*pbVar4 * 2 + -1;
    iVar5 = local_2c[uVar3 & 1] + iVar6 * 0x2c00;
    iVar2 = FUN_0806a7c8(param_1,auStack_34[uVar3]);
    if ((int)(((iVar5 - iVar6) - iVar2) * ((uint)*pbVar4 * 2 + -1)) < 0) {
      FUN_08005784(param_1 + 0x74,DAT_0806ae50);
      return in_lr;
    }
    iVar2 = FUN_08128fb8((0x1400 - -iVar6 * (iVar2 - iVar5)) * 0xe);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    iVar2 = iVar2 + 0xc;
  }
  else {
    iVar2 = FUN_08128fb8(-iVar6 * (iVar2 - iVar5) * 0xc,0x1400);
    if (0xc < iVar2) {
      iVar2 = 0xc;
    }
  }
  FUN_08005784(param_1 + 0x74,iVar2 * 0x60 + DAT_0806ae78);
  return in_lr;
}


