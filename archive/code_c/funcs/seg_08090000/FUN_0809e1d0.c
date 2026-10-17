// undefined FUN_0809e1d0(void)
// entry 0x809e1d0


undefined4 FUN_0809e1d0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_0809e1ec;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar1 = 0x180;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  return in_lr;
}


