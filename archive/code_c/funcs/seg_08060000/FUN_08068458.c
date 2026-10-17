// undefined FUN_08068458(void)
// entry 0x8068458


undefined4 FUN_08068458(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      FUN_0801cf00(param_1,DAT_080684a4);
      FUN_0801cff0(param_1);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    if ((*(char *)(param_1 + 0x71) == '\x04') && (*(char *)(param_1 + 0x72) < '\x02')) {
      FUN_08002b10(DAT_080684e4);
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined1 *)(param_1 + 0xd) = 0x22;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


