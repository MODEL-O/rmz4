// undefined FUN_080fb44c(void)
// entry 0x80fb44c


undefined4 FUN_080fb44c(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080fb49c);
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0xe) == '\x01') &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1)) {
    FUN_0801cf00(param_1,DAT_080fb4a0);
    if ((*(byte *)(DAT_080fb4a4 + DAT_080fb4a8) & 0xf) == 0) {
      uVar1 = 200;
    }
    else {
      uVar1 = 100;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xe) == '\x02') {
    if ((*(uint *)(param_1 + 0x70) & DAT_080fb52c) == DAT_080fb530) {
      FUN_08005784(param_1 + 0x74,DAT_080fb534);
    }
    cVar2 = FUN_08129198(*(undefined1 *)(param_1 + 0x12),6);
    if (cVar2 == '\0') {
      FUN_08002b10(0x16e);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      FUN_0801cf00(param_1,DAT_080fb538);
      FUN_08005784(param_1 + 0x74,DAT_080fb53c);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  if ((*(char *)(param_1 + 0xe) == '\x03') && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


