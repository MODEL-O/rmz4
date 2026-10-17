// undefined FUN_080353e0(void)
// entry 0x80353e0


undefined4 FUN_080353e0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_0803a19c();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  else {
    *(undefined1 *)(param_1 + DAT_0803540c) = 1;
    FUN_08035410(param_1);
  }
  return in_lr;
}


