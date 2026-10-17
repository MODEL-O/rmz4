// undefined FUN_08037cb4(void)
// entry 0x8037cb4


undefined4 FUN_08037cb4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_0803a19c();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  else {
    *(undefined1 *)(param_1 + DAT_08037ce0) = 1;
    FUN_08037ce4(param_1);
  }
  return in_lr;
}


