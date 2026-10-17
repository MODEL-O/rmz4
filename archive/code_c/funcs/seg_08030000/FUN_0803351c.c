// undefined FUN_0803351c(void)
// entry 0x803351c


undefined4 FUN_0803351c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_0803a19c();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  else {
    *(undefined1 *)(param_1 + DAT_08033548) = 1;
    FUN_0803354c(param_1);
  }
  return in_lr;
}


