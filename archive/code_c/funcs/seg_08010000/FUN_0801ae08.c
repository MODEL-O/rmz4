// undefined FUN_0801ae08(void)
// entry 0x801ae08


undefined4 FUN_0801ae08(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0xa0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


