// undefined FUN_08067560(void)
// entry 0x8067560


undefined4 FUN_08067560(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080675b0);
    FUN_08005784(param_1 + 0x74,DAT_080675b4);
    FUN_08002b10(99);
    FUN_0801fe64(0x10,param_1 + 0x54);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 0xb;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


