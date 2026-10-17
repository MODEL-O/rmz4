// undefined FUN_08068634(void)
// entry 0x8068634


undefined4 FUN_08068634(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08068674);
    FUN_08005784(param_1 + 0x74,DAT_08068678);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 0x25;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


