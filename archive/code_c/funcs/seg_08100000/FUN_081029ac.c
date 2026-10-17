// undefined FUN_081029ac(void)
// entry 0x81029ac


void FUN_081029ac(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(ushort *)(param_1 + 0xbc) == DAT_081029dc) {
    if ((*(byte *)(*DAT_081029e0 + 1) & 1) == 0) {
      iVar1 = 4;
    }
  }
  if (iVar1 != 0) {
    FUN_0810901c(iVar1);
  }
  return;
}


