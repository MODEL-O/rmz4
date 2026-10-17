// undefined FUN_080186d0(void)
// entry 0x80186d0


undefined4 FUN_080186d0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x4c) = 0x1e0;
    *(undefined4 *)(param_1 + 0x50) = 0xe0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0x40;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


