// undefined FUN_08008e98(void)
// entry 0x8008e98


undefined4 FUN_08008e98(int param_1,int param_2)

{
  int iVar1;
  iVar1 = param_2 + DAT_08008eac + (param_1 >> 1);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = -iVar1;
  }
  return iVar1;
}


