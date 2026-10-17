// undefined FUN_08009160(void)
// entry 0x8009160


undefined4 FUN_08009160(int param_1,int param_2)

{
  int iVar1;
  if ((0x000007ff < param_1) &&
     (iVar1 = param_2 + 0xfffff000 + (param_1 + 0xfffff800) * 2, 0 < iVar1)) {
    iVar1 = -iVar1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


