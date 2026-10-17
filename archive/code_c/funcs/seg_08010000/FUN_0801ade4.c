// undefined FUN_0801ade4(void)
// entry 0x801ade4


undefined4 FUN_0801ade4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x4c) = 0x3c0;
    *(undefined4 *)(param_1 + 0x50) = 0x140;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


