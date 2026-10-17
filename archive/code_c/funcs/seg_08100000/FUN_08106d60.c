// undefined FUN_08106d60(void)
// entry 0x8106d60


undefined4 FUN_08106d60(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_08106de6;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    uVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_08106db0;
    FUN_0801cf00(param_1,DAT_08106db4);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
    FUN_0801cff0(param_1);
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0xa00;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_08106de6:
  FUN_0801cff0(param_1);
  return in_lr;
}


