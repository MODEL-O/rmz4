// undefined FUN_080d1040(void)
// entry 0x80d1040


undefined4 FUN_080d1040(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080d1070));
  if ((*(ushort *)(DAT_080d1074 + 0x1d0) & 0x7f) == 2) {
    uVar1 = FUN_08007b84(param_1 + 0x54);
  }
  else {
    uVar1 = *(undefined4 *)(DAT_080d1074 + DAT_080d1088);
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  return in_lr;
}


