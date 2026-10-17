// undefined FUN_080bda20(void)
// entry 0x80bda20


undefined4 FUN_080bda20(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_40 [4];
  int local_30 [4];
  byte abStack_20 [4];
  
  FUN_081292b8(local_40,0,0x10);
  local_40[0] = DAT_080bdb2c;
  FUN_081292b8(local_30,0,0x10);
  local_30[0] = 0x200;
  FUN_081292b8(abStack_20,0,4);
  bVar1 = *(byte *)(param_1 + 0x10);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bdb30);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar2 = DAT_080bdb34;
  iVar5 = local_30[bVar1];
  iVar4 = iVar5 * *(short *)((*(byte *)(param_1 + 0x11) + 0x40 & 0xff) * 2 + DAT_080bdb34);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar4 >> 8;
  iVar5 = iVar5 * *(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + iVar2);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar5 >> 8;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_0801cf00(param_1,*(undefined2 *)(local_40 + bVar1));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,(uint)abStack_20[bVar1] * 0x18 + DAT_080bdb38,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080bde3c(param_1);
  return in_lr;
}


