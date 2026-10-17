// undefined FUN_08071ebc(void)
// entry 0x8071ebc


undefined4 FUN_08071ebc(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xe) = 0x19;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08071ed8));
  return in_lr;
}


