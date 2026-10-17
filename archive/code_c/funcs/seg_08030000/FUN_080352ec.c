// undefined FUN_080352ec(void)
// entry 0x80352ec


undefined4 FUN_080352ec(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  cVar1 = FUN_08039fd8(param_1,param_1 + 0x144);
  if (cVar1 == '\0') {
    pcVar2 = (char *)(param_1 + DAT_0803534c);
    if (*pcVar2 == -1) {
      if (*(char *)(param_1 + DAT_08035388) == '\0') {
LAB_08035392:
        *pcVar2 = -1;
        return in_lr;
      }
      if ((*(char *)(param_1 + 0xc0) != '\x04') && (*(char *)(param_1 + 0xc1) != '\x04')) {
        *(char *)(param_1 + DAT_08035388) = '\0';
        goto LAB_08035392;
      }
      *(undefined1 *)(param_1 + 0x144) = 4;
    }
    else {
      *(char *)(param_1 + 0x144) = *pcVar2;
      *pcVar2 = -1;
    }
    *(undefined1 *)(param_1 + 0x100) = 3;
    *(undefined1 *)(param_1 + DAT_0803538c) = 0;
  }
  else {
    *(undefined1 *)(param_1 + DAT_08035320) = 0xff;
    *(undefined1 *)(param_1 + 0x100) = 3;
    *(undefined1 *)(param_1 + DAT_08035324) = 0;
  }
  FUN_080353a0(param_1);
  return in_lr;
}


