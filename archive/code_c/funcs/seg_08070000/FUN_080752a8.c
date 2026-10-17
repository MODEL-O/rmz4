// undefined FUN_080752a8(void)
// entry 0x80752a8


undefined4 FUN_080752a8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080752cc);
    if (*DAT_080752d0 == 3) {
      FUN_08002b10(0xd4);
    }
    else {
      FUN_08002b10(0xd5);
    }
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 0x21) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0807535c);
    FUN_0801cff0(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x71) == '\0') && (*(char *)(param_1 + 0x72) < '\x02')) {
      FUN_0801fe64(1,param_1 + 0x54);
      FUN_08002b10(0xde);
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  else {
    if (bVar1 != 2) {
      return in_lr;
    }
    bVar1 = *(byte *)(DAT_0807537c + 0x12);
    if ((bVar1 & 1) != 0) {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0xe) = bVar1 & 1;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


