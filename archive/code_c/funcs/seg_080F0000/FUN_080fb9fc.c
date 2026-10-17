// undefined FUN_080fb9fc(void)
// entry 0x80fb9fc


undefined4 FUN_080fb9fc(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    FUN_0801cf00(param_1,DAT_080fbab0);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined4 *)(param_1 + 0x30) = DAT_080fbab4;
    *(short *)(param_1 + 0x26) = (short)DAT_080fbab8;
    *(undefined1 *)(param_1 + 0x12) = 0x80;
    if (*(char *)(param_1 + 0xbd) != '\0') {
      FUN_08002b10(0x40);
      FUN_08002624(0x36);
      FUN_0800249c(0xac,0);
      *(char *)(param_1 + 0xbd) = '\0';
    }
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  pcVar2 = (char *)(param_1 + 0xbd);
  if ((*(char *)(param_1 + 0xd) != '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    if (*pcVar2 == '\0') {
      FUN_08002624(0xac);
      FUN_0800249c(0x36,0);
      *pcVar2 = '\x01';
    }
    FUN_0801cf00(param_1,0xc400);
    FUN_08005784(param_1 + 0x74,DAT_080fbabc);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  FUN_0801cff0(param_1);
  if (*pcVar2 == '\0') {
    FUN_080025d8(0xac);
  }
  else {
    FUN_080025d8(0x36);
  }
  return in_lr;
}


