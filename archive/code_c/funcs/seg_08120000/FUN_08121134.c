// undefined FUN_08121134(void)
// entry 0x8121134


void FUN_08121134(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 2);
  if (99 < uVar1) {
    uVar1 = FUN_081223fa();
  }
                    /* WARNING: Could not recover jumptable at 0x0812114a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_PTR_0812114c + uVar1 * 4))();
  return;
}


