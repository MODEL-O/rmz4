// undefined FUN_08102f04(void)
// entry 0x8102f04


void FUN_08102f04(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(ushort *)(param_1 + 0xbc) == DAT_08102f34) {
    if ((*(byte *)(*DAT_08102f38 + 6) & 1) == 0) {
      iVar1 = 0x18;
    }
  }
  if (iVar1 != 0) {
    FUN_0810901c(iVar1);
  }
  return;
}


