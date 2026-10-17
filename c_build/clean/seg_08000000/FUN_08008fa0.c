// undefined FUN_08008fa0(void)
// entry 0x8008fa0


undefined4 FUN_08008fa0(int param_1,int param_2)

{
  int iVar1;
  iVar1 = (param_2 + DAT_08008fb4) - (param_1 >> 2);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = -iVar1;
  }
  return iVar1;
}


