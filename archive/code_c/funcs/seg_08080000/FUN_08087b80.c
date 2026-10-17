// undefined FUN_08087b80(void)
// entry 0x8087b80


undefined4 FUN_08087b80(int param_1)

{
  undefined4 in_lr;
  undefined4 local_10;
  uint local_c;
  
  if (*(byte *)(param_1 + 0xf) == 0) {
    local_10 = 0x800;
    local_c = (uint)*(byte *)(param_1 + 0xf);
    FUN_08088ff0(param_1 + 0x54,&local_10,2,3);
    FUN_08005784(param_1 + 0x74,DAT_08087bdc);
    FUN_0801cf00(param_1,DAT_08087be0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 5;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


