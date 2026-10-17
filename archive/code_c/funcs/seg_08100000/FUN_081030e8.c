// undefined FUN_081030e8(void)
// entry 0x81030e8


void FUN_081030e8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(ushort *)(param_1 + 0xbc) == DAT_0810313c) && ((*(byte *)(*DAT_08103140 + 2) & 1) == 0)) {
    iVar1 = 8;
  }
  if (*(ushort *)(param_1 + 0xbc) == DAT_08103144) {
    if (((*(byte *)*DAT_08103140 & 0xf) >> 1 & 1) == 0) {
      iVar1 = 1;
    }
  }
  if (iVar1 != 0) {
    FUN_0810901c(iVar1);
  }
  return;
}


