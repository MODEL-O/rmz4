// undefined FUN_080f1c44(void)
// entry 0x80f1c44


undefined4 FUN_080f1c44(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sVar2 = FUN_080ed7f8(param_1,DAT_080f1ce0,1);
      if (sVar2 == 0) {
        return in_lr;
      }
      goto LAB_080f1cd4;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(short *)(DAT_080f1cb4 + 0x14e) = (short)DAT_080f1cb8;
    *(undefined2 *)(DAT_080f1cbc + 0x14e) = 6;
    FUN_0801cf00(param_1,DAT_080f1cc0);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    *(undefined1 *)(param_1 + 0x25) = 0x1d;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
    return in_lr;
  }
  *(undefined1 *)(param_1 + 0x12) = 0x1e;
LAB_080f1cd4:
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  return in_lr;
}


