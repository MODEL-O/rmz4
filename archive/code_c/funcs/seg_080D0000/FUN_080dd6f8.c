// undefined FUN_080dd6f8(void)
// entry 0x80dd6f8


undefined4 FUN_080dd6f8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080dd72c);
  FUN_0801cff0(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 100) = 0xfffffff0;
  }
  else {
    *(undefined4 *)(param_1 + 100) = 0x10;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * -0x10;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dd75c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080dd6c8(param_1);
  return in_lr;
}


