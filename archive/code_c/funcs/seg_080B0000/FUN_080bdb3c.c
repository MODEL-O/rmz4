// undefined FUN_080bdb3c(void)
// entry 0x80bdb3c


undefined4 FUN_080bdb3c(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined4 local_48 [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  byte abStack_30 [8];
  byte abStack_28 [8];
  
  local_48[0] = *DAT_080bdbec;
  local_48[1] = DAT_080bdbec[1];
  local_48[2] = DAT_080bdbec[2];
  local_48[3] = DAT_080bdbec[3];
  uStack_38 = DAT_080bdbec[4];
  uStack_34 = DAT_080bdbec[5];
  FUN_08129258(abStack_30,DAT_080bdbf0,6);
  FUN_08129258(abStack_28,DAT_080bdbf4,6);
  uVar6 = (uint)*(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bdbf8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar4 = DAT_080bdc00;
  bVar5 = *(byte *)(uVar6 + DAT_080bdbfc);
  iVar3 = *(short *)((bVar5 + 0x40 & 0xff) * 2 + DAT_080bdc00) * 0x380;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  iVar4 = *(short *)((uint)bVar5 * 2 + iVar4) * 0x380;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar4 >> 8;
  FUN_0801cc9c(param_1);
  bVar5 = abStack_30[uVar6];
  if (bVar5 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar5 = bVar5 & 1;
  *(byte *)(param_1 + 0x4c) = bVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
  FUN_0801cf00(param_1,*(undefined2 *)(local_48 + uVar6));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,(uint)abStack_28[uVar6] * 0x18 + DAT_080bdc78,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080bde3c(param_1);
  return in_lr;
}


