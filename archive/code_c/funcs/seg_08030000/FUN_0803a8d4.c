// undefined FUN_0803a8d4(void)
// entry 0x803a8d4


undefined4 FUN_0803a8d4(uint param_1,undefined2 param_2,undefined1 param_3)

{
  undefined4 in_lr;
  
  *(undefined2 *)((param_1 & 0xffff) * 2 + DAT_0803a8f0) = param_2;
  *(undefined1 *)((param_1 & 0xffff) + DAT_0803a8f4) = param_3;
  return in_lr;
}


