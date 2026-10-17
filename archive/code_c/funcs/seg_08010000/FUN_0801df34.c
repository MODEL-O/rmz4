// undefined FUN_0801df34(void)
// entry 0x801df34


undefined4 FUN_0801df34(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (8 < (uint)(int)*(char *)(param_1 + 8)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0801df4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0801df4c + *(char *)(param_1 + 8) * 4))();
  return uVar1;
}


