// undefined FUN_0801550c(void)
// entry 0x801550c


undefined4 FUN_0801550c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x4c) = 0xf0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x80;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


