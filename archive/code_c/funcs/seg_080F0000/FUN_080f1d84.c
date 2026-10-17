// undefined FUN_080f1d84(void)
// entry 0x80f1d84


undefined4 FUN_080f1d84(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sVar2 = FUN_080ed7f8(param_1,0xa100,1);
      if (sVar2 == 0) {
        return in_lr;
      }
      goto LAB_080f1e16;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined2 *)(DAT_080f1df8 + 0x142) = 0x200;
    *(undefined2 *)(DAT_080f1dfc + 0x142) = 5;
    FUN_0801cf00(param_1,DAT_080f1e00);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
    return in_lr;
  }
  *(undefined1 *)(param_1 + 0x12) = 0x1e;
LAB_080f1e16:
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  return in_lr;
}


