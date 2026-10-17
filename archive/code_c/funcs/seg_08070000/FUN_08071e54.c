// undefined FUN_08071e54(void)
// entry 0x8071e54


undefined4 FUN_08071e54(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xe) = 0x19;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08071e70));
  return in_lr;
}


