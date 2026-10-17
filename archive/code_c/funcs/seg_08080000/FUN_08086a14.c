// undefined FUN_08086a14(void)
// entry 0x8086a14


undefined4 FUN_08086a14(int param_1,undefined1 param_2)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xb6) = param_2;
  *(undefined1 *)(param_1 + 0xb5) = param_2;
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0xb4) * 4 + DAT_08086a44));
  FUN_0801cff0(param_1);
  return in_lr;
}


