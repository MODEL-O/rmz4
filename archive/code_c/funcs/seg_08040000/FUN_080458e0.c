// undefined FUN_080458e0(void)
// entry 0x80458e0


undefined4 FUN_080458e0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08045940);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0803ad84(param_1,1);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 100)) {
      *(uint *)(param_1 + 100) = *(byte *)(param_1 + 10) & 0x10;
    }
  }
  else if (*(int *)(param_1 + 100) < *(int *)(param_1 + 0x54)) {
    *(undefined4 *)(param_1 + 100) = 0;
  }
  FUN_0801cf00(param_1,DAT_08045988);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0804598c,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar2 = DAT_080459b8;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar2 = 0x600;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_0801cff0(param_1);
  *(undefined4 *)(param_1 + 0x98) = DAT_080459bc;
  FUN_080457a4(*(undefined4 *)(param_1 + 0x2c),param_1);
  FUN_08045864(param_1);
  return in_lr;
}


