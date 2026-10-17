// undefined FUN_0804fd2c(void)
// entry 0x804fd2c


undefined4 FUN_0804fd2c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_0804fd98);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0804fd9c,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0804fda0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_08002b10(0x45);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804fda4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0804fda8(param_1);
  return in_lr;
}


