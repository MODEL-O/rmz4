// undefined FUN_08065560(void)
// entry 0x8065560


undefined4 FUN_08065560(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    FUN_08065b08(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 10;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08065594));
  return in_lr;
}


