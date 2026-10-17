// undefined FUN_0803fc00(void)
// entry 0x803fc00


undefined4 FUN_0803fc00(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803fc70);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_0801cf00(param_1,DAT_0803fc74);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_0803fc78,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    uVar3 = DAT_0803fc84;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0x2c0;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    uVar1 = 0x20;
  }
  else {
    FUN_0801cf00(param_1,DAT_0803fcc0);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_0803fcc4,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    uVar3 = DAT_0803fcdc;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    uVar3 = DAT_0803fd00;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      uVar3 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    uVar1 = 0x80;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  FUN_0801cff0(param_1);
  *(undefined4 *)(param_1 + 0x98) = DAT_0803fd04;
  FUN_0803fd08(param_1);
  return in_lr;
}


