// undefined FUN_08033428(void)
// entry 0x8033428


undefined4 FUN_08033428(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  cVar1 = FUN_08039fd8(param_1,param_1 + 0x144);
  if (cVar1 == '\0') {
    pcVar2 = (char *)(param_1 + DAT_08033488);
    if (*pcVar2 == -1) {
      if (*(char *)(param_1 + DAT_080334c4) == '\0') {
LAB_080334ce:
        *pcVar2 = -1;
        return in_lr;
      }
      if ((*(char *)(param_1 + 0xc0) != '\x04') && (*(char *)(param_1 + 0xc1) != '\x04')) {
        *(char *)(param_1 + DAT_080334c4) = '\0';
        goto LAB_080334ce;
      }
      *(undefined1 *)(param_1 + 0x144) = 4;
    }
    else {
      *(char *)(param_1 + 0x144) = *pcVar2;
      *pcVar2 = -1;
    }
    *(undefined1 *)(param_1 + 0x100) = 3;
    *(undefined1 *)(param_1 + DAT_080334c8) = 0;
  }
  else {
    *(undefined1 *)(param_1 + DAT_0803345c) = 0xff;
    *(undefined1 *)(param_1 + 0x100) = 3;
    *(undefined1 *)(param_1 + DAT_08033460) = 0;
  }
  FUN_080334dc(param_1);
  return in_lr;
}


