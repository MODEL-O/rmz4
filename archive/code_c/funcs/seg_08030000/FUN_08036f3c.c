// undefined FUN_08036f3c(void)
// entry 0x8036f3c


undefined4 FUN_08036f3c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_0803a19c();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  else {
    *(undefined1 *)(param_1 + DAT_08036f68) = 1;
    FUN_08036f6c(param_1);
  }
  return in_lr;
}


