// undefined FUN_08037bdc(void)
// entry 0x8037bdc


undefined4 FUN_08037bdc(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (1 < *(byte *)(param_1 + 0xe)) {
    cVar1 = FUN_08039fd8(param_1,param_1 + 0x144);
    if (cVar1 == '\0') {
      pcVar2 = (char *)(param_1 + DAT_08037c48);
      if (*pcVar2 == -1) {
        *pcVar2 = -1;
        return in_lr;
      }
      *(char *)(param_1 + DAT_08037c48 + -3) = *pcVar2;
      *pcVar2 = -1;
      *(undefined1 *)(param_1 + 0x100) = 3;
      *(undefined1 *)(param_1 + DAT_08037c4c) = 0;
    }
    else {
      *(undefined1 *)(param_1 + DAT_08037c14) = 0xff;
      *(undefined1 *)(param_1 + 0x100) = 3;
      *(undefined1 *)(param_1 + DAT_08037c18) = 0;
    }
    FUN_08037c60(param_1);
  }
  return in_lr;
}


