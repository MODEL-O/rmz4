// undefined FUN_080da13c(void)
// entry 0x80da13c


undefined4 FUN_080da13c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x12) = 0x10;
  *(undefined1 *)(param_1 + 0x13) = 0;
  iVar1 = (uint)*(byte *)(param_1 + 0x7c) * -0x200 + 0x100;
  *(int *)(param_1 + 0x5c) = iVar1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  iVar1 = iVar1 * 0xb4;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar1 >> 8;
  FUN_0801cf00(param_1,DAT_080da174);
  return in_lr;
}


