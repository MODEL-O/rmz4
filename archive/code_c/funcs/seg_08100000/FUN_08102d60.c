// undefined FUN_08102d60(void)
// entry 0x8102d60


void FUN_08102d60(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(ushort *)(param_1 + 0xbc) == DAT_08102d90) {
    if ((*(byte *)(*DAT_08102d94 + 5) & 1) == 0) {
      iVar1 = 0x14;
    }
  }
  if (iVar1 != 0) {
    FUN_0810901c(iVar1);
  }
  return;
}


