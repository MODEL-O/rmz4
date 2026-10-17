// undefined FUN_08036e48(void)
// entry 0x8036e48


undefined4 FUN_08036e48(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  cVar1 = FUN_08039fd8(param_1,param_1 + 0x144);
  if (cVar1 == '\0') {
    pcVar2 = (char *)(param_1 + DAT_08036ea8);
    if (*pcVar2 == -1) {
      if (*(char *)(param_1 + DAT_08036ee4) == '\0') {
LAB_08036eee:
        *pcVar2 = -1;
        return in_lr;
      }
      if ((*(char *)(param_1 + 0xc0) != '\x04') && (*(char *)(param_1 + 0xc1) != '\x04')) {
        *(char *)(param_1 + DAT_08036ee4) = '\0';
        goto LAB_08036eee;
      }
      *(undefined1 *)(param_1 + 0x144) = 4;
    }
    else {
      *(char *)(param_1 + 0x144) = *pcVar2;
      *pcVar2 = -1;
    }
    *(undefined1 *)(param_1 + 0x100) = 3;
    *(undefined1 *)(param_1 + DAT_08036ee8) = 0;
  }
  else {
    *(undefined1 *)(param_1 + DAT_08036e7c) = 0xff;
    *(undefined1 *)(param_1 + 0x100) = 3;
    *(undefined1 *)(param_1 + DAT_08036e80) = 0;
  }
  FUN_08036efc(param_1);
  return in_lr;
}


