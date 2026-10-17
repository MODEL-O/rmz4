// undefined FUN_08019f60(void)
// entry 0x8019f60


undefined4 FUN_08019f60(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x4c) = 0x168;
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


