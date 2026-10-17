// undefined FUN_08009244(void)
// entry 0x8009244


undefined4 FUN_08009244(int param_1,int param_2)

{
  int iVar1;
  if ((0x00000bff < param_1) &&
     (iVar1 = param_2 + 0xfffff000 + (param_1 + 0xfffff400) * 4, 0 < iVar1)) {
    iVar1 = -iVar1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


