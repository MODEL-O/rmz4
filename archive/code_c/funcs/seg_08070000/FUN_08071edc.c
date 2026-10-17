// undefined FUN_08071edc(void)
// entry 0x8071edc


undefined4 FUN_08071edc(int param_1)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08071efc));
  return in_lr;
}


