// undefined FUN_08127388(void)
// entry 0x8127388


undefined4 FUN_08127388(undefined4 param_1,byte *param_2)

{
  char *pcVar1;
  undefined4 in_lr;
  
  if ((*param_2 & 0x80) != 0) {
    for (pcVar1 = *(char **)(param_2 + 0x20); pcVar1 != (char *)0x0;
        pcVar1 = *(char **)(pcVar1 + 0x34)) {
      if (*pcVar1 != '\0') {
        if ((pcVar1[1] & 7U) != 0) {
          FUN_08127378();
        }
        *pcVar1 = '\0';
      }
      pcVar1[0x2c] = '\0';
      pcVar1[0x2d] = '\0';
      pcVar1[0x2e] = '\0';
      pcVar1[0x2f] = '\0';
    }
    param_2[0x20] = 0;
    param_2[0x21] = 0;
    param_2[0x22] = 0;
    param_2[0x23] = 0;
  }
  return in_lr;
}


