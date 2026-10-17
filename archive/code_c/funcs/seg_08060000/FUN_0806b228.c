// undefined FUN_0806b228(void)
// entry 0x806b228


undefined4 FUN_0806b228(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_0806b25c) {
      FUN_0801cf00(param_1);
    }
    if (*DAT_0806b260 == 8) {
      FUN_08002b10(0xc4);
    }
    else {
      FUN_08002b10(0xc5);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(DAT_0806b290 + 0x12);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0xe) = bVar1 & 1;
  }
  return in_lr;
}


