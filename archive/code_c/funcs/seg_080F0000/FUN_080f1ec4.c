// undefined FUN_080f1ec4(void)
// entry 0x80f1ec4


undefined4 FUN_080f1ec4(int param_1)

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
      sVar2 = FUN_080ed7f8(param_1,0xaa00,1);
      if (sVar2 == 0) {
        return in_lr;
      }
      goto LAB_080f1f5e;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(short *)(DAT_080f1f3c + 0x154) = (short)DAT_080f1f40;
    *(undefined2 *)(DAT_080f1f44 + 0x154) = 7;
    FUN_0801cf00(param_1,DAT_080f1f48);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    *(undefined1 *)(param_1 + 0x25) = 0x1d;
    uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
    return in_lr;
  }
  *(undefined1 *)(param_1 + 0x12) = 0x1e;
LAB_080f1f5e:
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  return in_lr;
}


