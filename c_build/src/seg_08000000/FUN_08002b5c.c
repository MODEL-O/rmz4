// undefined FUN_08002b5c(void)
// entry 0x8002b5c


void FUN_08002b5c(uint param_1)

{
  int iVar1;
  if (-1 < (int)(param_1 * 0x10000)) {
    iVar1 = FUN_08002ad0(param_1 & 0xffff);
    if (iVar1 != 0) {
      FUN_08127880(param_1 & 0xffff);
    }
  }
  return;
}


