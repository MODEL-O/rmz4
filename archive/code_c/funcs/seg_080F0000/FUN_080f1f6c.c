// undefined FUN_080f1f6c(void)
// entry 0x80f1f6c


undefined4 FUN_080f1f6c(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sVar2 = FUN_080ed7f8(param_1,0xa900,1);
      if (sVar2 == 0) {
        return in_lr;
      }
      goto LAB_080f1ff2;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(short *)(DAT_080f1fd0 + 0x152) = (short)DAT_080f1fd4;
    *(undefined2 *)(DAT_080f1fd8 + 0x152) = 4;
    FUN_0801cf00(param_1,0xa900);
    iVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar3 + DAT_080f1fdc;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
    return in_lr;
  }
  *(undefined1 *)(param_1 + 0x12) = 0x1e;
LAB_080f1ff2:
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  return in_lr;
}


