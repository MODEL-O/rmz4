// undefined FUN_08067a90(void)
// entry 0x8067a90


undefined4 FUN_08067a90(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xdd) == '\0') {
      FUN_0801cf00(param_1,DAT_08067ae0);
    }
    else {
      FUN_0801cf00(param_1,DAT_08067ab0);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


