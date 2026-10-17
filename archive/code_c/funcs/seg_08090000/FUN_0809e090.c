// undefined FUN_0809e090(void)
// entry 0x809e090


undefined4 FUN_0809e090(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = FUN_0802adac(0,param_1,DAT_0809e0d4);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (iVar1 == 0) {
      if (*(int *)(*DAT_0809e0f4 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(undefined1 *)(param_1 + 0xbc) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0xbc) = 0;
      }
    }
    else {
      FUN_08005784(param_1 + 0x74,DAT_0809e0d8);
      FUN_0801cf00(param_1,DAT_0809e0dc);
    }
    if ((byte)(*(char *)(param_1 + 0xd) - 2U) < 2) {
      *(undefined1 *)(param_1 + 0x12) = 0xb4;
    }
    *(undefined1 *)(param_1 + 0xd) = 5;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0x13) = 8;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


