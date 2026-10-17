// undefined FUN_08017434(void)
// entry 0x8017434


undefined4 FUN_08017434(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x4c) = DAT_08017454;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x140;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


