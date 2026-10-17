// undefined FUN_08084cac(void)
// entry 0x8084cac


undefined4 FUN_08084cac(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08084ccc);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


