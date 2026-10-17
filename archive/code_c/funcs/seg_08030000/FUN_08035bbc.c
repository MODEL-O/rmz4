// undefined FUN_08035bbc(void)
// entry 0x8035bbc


undefined4 FUN_08035bbc(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_0803a19c();
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  else {
    *(undefined1 *)(param_1 + DAT_08035be8) = 1;
    FUN_08035bec(param_1);
  }
  return in_lr;
}


