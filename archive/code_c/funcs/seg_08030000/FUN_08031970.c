// undefined FUN_08031970(void)
// entry 0x8031970


undefined4 FUN_08031970(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x142) & 2) == 0) {
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_080319a0) {
      FUN_0801cf00(param_1,DAT_080319a0);
    }
  }
  else {
    FUN_0801cf00(param_1,DAT_080319e4);
  }
  iVar2 = *(int *)(param_1 + 0x5c);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  sVar1 = FUN_080386d4(param_1);
  if (iVar2 < sVar1) {
    sVar1 = FUN_080386d4(param_1);
    *(int *)(param_1 + 0x5c) = (int)sVar1;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  FUN_080319e8(param_1);
  return in_lr;
}


