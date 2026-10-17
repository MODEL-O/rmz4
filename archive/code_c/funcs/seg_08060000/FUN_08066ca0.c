// undefined FUN_08066ca0(void)
// entry 0x8066ca0


undefined4 FUN_08066ca0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08066cf4);
    *(undefined1 *)(param_1 + 0x12) = 4;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_08066cf8);
    FUN_08002b10(0x5e);
    *(undefined1 *)(param_1 + 0x12) = 0x50;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      if ((*(char *)(param_1 + 0x73) == '\x03') &&
         (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_08066d60)
         ) {
        FUN_0801cf00(param_1);
      }
      bVar1 = *(byte *)(DAT_08066d64 + 0x12);
      if ((bVar1 & 1) != 0) {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(byte *)(param_1 + 0xe) = bVar1 & 1;
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_08066d20);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


