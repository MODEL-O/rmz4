// undefined FUN_08012918(void)
// entry 0x8012918


undefined4 FUN_08012918(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_08012934 = 0x78000;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


