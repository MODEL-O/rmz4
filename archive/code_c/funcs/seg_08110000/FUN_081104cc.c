// undefined FUN_081104cc(void)
// entry 0x81104cc


void FUN_081104cc(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 7);
  if (0x17 < uVar1) {
    uVar1 = FUN_08110f4a();
  }
                    /* WARNING: Could not recover jumptable at 0x08110524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_PTR_08110538 + uVar1 * 4))();
  return;
}


