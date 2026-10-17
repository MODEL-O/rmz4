// undefined FUN_080abc78(void)
// entry 0x80abc78


undefined4 FUN_080abc78(int param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 in_lr;
  
  puVar1 = DAT_080abcd0;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *DAT_080abcd0 = (short)DAT_080abcd4;
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0xbc) + '\x01';
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar2 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar2;
  puVar1[2] = *(short *)((0x10 - uVar2 & 0x3f) * 8 + DAT_080abcd8) >> 4;
  if ((uVar2 & 0xff) == 0) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


