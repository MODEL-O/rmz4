// undefined FUN_080b3fb8(void)
// entry 0x80b3fb8


undefined4 FUN_080b3fb8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0x10) * 9 + DAT_080b405c & 0xffff);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080b4060,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080b4064;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0xbe) = 300;
  *(undefined1 *)(param_1 + 0x12) = 0;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b4068);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080b406c(param_1);
  return in_lr;
}


