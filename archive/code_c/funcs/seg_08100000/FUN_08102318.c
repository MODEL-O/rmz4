// undefined FUN_08102318(void)
// entry 0x8102318


undefined4 FUN_08102318(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(byte *)(param_1 + 0xd) < 3) && ((*(uint *)(param_1 + 0x8c) & 0x20000000) != 0)) &&
      (*DAT_08102370 != '\0')) && (*(int *)(DAT_08102374 + 0x628) == param_1 + 0x74)) {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08102378));
  FUN_0801cff0(param_1);
  return in_lr;
}


