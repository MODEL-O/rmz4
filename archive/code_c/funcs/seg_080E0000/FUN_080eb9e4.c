// undefined FUN_080eb9e4(void)
// entry 0x80eb9e4


undefined4 FUN_080eb9e4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    FUN_08005784(param_1 + 0x74,DAT_080eba48);
    FUN_0801cf00(param_1,DAT_080eba4c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    FUN_08002b10(DAT_080eba50);
    FUN_0801cf00(param_1,DAT_080eba54);
    *(undefined1 *)(DAT_080eba58 + DAT_080eba5c) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


