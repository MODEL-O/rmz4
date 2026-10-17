// undefined FUN_0807c620(void)
// entry 0x807c620


undefined4 FUN_0807c620(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xce) = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  *(byte *)(param_1 + 0xbf) = *(byte *)(param_1 + 0xbf) & 0xfe;
  *(undefined1 *)(param_1 + 0xd4) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0807c660));
  return in_lr;
}


