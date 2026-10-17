// undefined FUN_081171b0(void)
// entry 0x81171b0


undefined4 FUN_081171b0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (9 < *(byte *)(param_1 + 3)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x081171c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_081171c8 + (uint)*(byte *)(param_1 + 3) * 4))();
  return uVar1;
}


