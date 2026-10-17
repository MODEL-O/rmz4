// undefined FUN_08126b04(void)
// entry 0x8126b04


void FUN_08126b04(void)

{
  int *piVar1;
  
  piVar1 = (int *)*DAT_08126b70;
  if (DAT_08126b74 != *piVar1) {
    return;
  }
  *piVar1 = *piVar1 + 1;
  if (piVar1[8] != 0) {
    FUN_08126eb2(piVar1[9]);
  }
  FUN_08126eb2();
                    /* WARNING: Could not recover jumptable at 0x08126b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_08126b78)();
  return;
}


