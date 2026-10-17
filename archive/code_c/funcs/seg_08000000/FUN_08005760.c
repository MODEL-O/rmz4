// undefined FUN_08005760(void)
// entry 0x8005760


undefined4 FUN_08005760(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined2 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_08005784();
  return in_lr;
}


