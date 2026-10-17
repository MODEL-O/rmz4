// undefined FUN_08048db8(void)
// entry 0x8048db8


undefined4 FUN_08048db8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08048e2c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0801cd28(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_08048e30);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08048e34,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_08048e38;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  FUN_08002b10(0x47);
  FUN_08048e3c(param_1);
  return in_lr;
}


