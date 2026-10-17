// undefined FUN_080321d4(void)
// entry 0x80321d4


undefined4 FUN_080321d4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_08032220);
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x1c4);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x1c8) + 0x2d00;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


