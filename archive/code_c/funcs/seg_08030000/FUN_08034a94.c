// undefined FUN_08034a94(void)
// entry 0x8034a94


undefined4 FUN_08034a94(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  cVar1 = FUN_08039fd8(param_1,param_1 + 0x144);
  if (cVar1 == '\0') {
    pcVar2 = (char *)(param_1 + DAT_08034af4);
    if (*pcVar2 == -1) {
      if (*(char *)(param_1 + DAT_08034b30) == '\0') {
LAB_08034b3a:
        *pcVar2 = -1;
        return in_lr;
      }
      if ((*(char *)(param_1 + 0xc0) != '\x04') && (*(char *)(param_1 + 0xc1) != '\x04')) {
        *(char *)(param_1 + DAT_08034b30) = '\0';
        goto LAB_08034b3a;
      }
      *(undefined1 *)(param_1 + 0x144) = 4;
    }
    else {
      *(char *)(param_1 + 0x144) = *pcVar2;
      *pcVar2 = -1;
    }
    *(undefined1 *)(param_1 + 0x100) = 3;
    *(undefined1 *)(param_1 + DAT_08034b34) = 0;
  }
  else {
    *(undefined1 *)(param_1 + DAT_08034ac8) = 0xff;
    *(undefined1 *)(param_1 + 0x100) = 3;
    *(undefined1 *)(param_1 + DAT_08034acc) = 0;
  }
  FUN_08034b48(param_1);
  return in_lr;
}


