// undefined FUN_08036188(void)
// entry 0x8036188


undefined4 FUN_08036188(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    FUN_0801cf00(param_1,0x1a00);
    FUN_0803c464(param_1,0x14);
    *pcVar1 = *pcVar1 + '\x01';
  }
  else {
    FUN_0803a3b0(param_1,0x1a00);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if ((*(uint *)(param_1 + 600) & 0x80) == 0) {
        *(undefined1 *)(param_1 + DAT_08036200) = 3;
        *pcVar1 = '\0';
      }
      else {
        *(undefined1 *)(param_1 + DAT_080361ec) = 2;
        *pcVar1 = '\0';
        FUN_08035f28(param_1);
      }
    }
  }
  return in_lr;
}


