// undefined FUN_0807c2b8(void)
// entry 0x807c2b8


undefined4 FUN_0807c2b8(int param_1)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0807c2d8));
  return in_lr;
}


