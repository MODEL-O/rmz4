// undefined FUN_08091cb8(void)
// entry 0x8091cb8


undefined4 FUN_08091cb8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbe) == '\x01') {
      FUN_0801cf00(param_1,DAT_08091ce0);
      FUN_08005784(param_1 + 0x74,DAT_08091ce4);
    }
    else {
      FUN_0801cf00(param_1,DAT_08091d14);
      FUN_08005784(param_1 + 0x74,DAT_08091d18);
    }
    FUN_08090e64(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


