// undefined FUN_08008f6c(void)
// entry 0x8008f6c


undefined4 FUN_08008f6c(int param_1,int param_2)

{
  int iVar1;
  iVar1 = (param_2 + 0xfffff800) - (param_1 >> 1);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = -iVar1;
  }
  return iVar1;
}


