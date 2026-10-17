// undefined FUN_08032160(void)
// entry 0x8032160


undefined4 FUN_08032160(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080321b4);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x1c4);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x1c8) + 0x2d00;
  bVar1 = *(byte *)(param_1 + 10) & 0x10;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if ((*(uint *)(param_1 + 600) & 0x10) == 0) {
      return in_lr;
    }
  }
  else {
    if ((*(uint *)(param_1 + 600) & 0x20) == 0) {
      return in_lr;
    }
    bVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0xe) = 3;
  *(byte *)(param_1 + 0xf) = bVar1;
  return in_lr;
}


