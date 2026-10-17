// undefined FUN_08008f38(void)
// entry 0x8008f38


undefined4 FUN_08008f38(int param_1,int param_2)

{
  int iVar1;
  iVar1 = param_2 + 0xfffffc00 + (param_1 >> 2);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = -iVar1;
  }
  return iVar1;
}


