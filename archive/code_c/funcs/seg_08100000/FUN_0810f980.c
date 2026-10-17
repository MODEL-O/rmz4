// undefined FUN_0810f980(void)
// entry 0x810f980


undefined4 FUN_0810f980(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (4 < *(byte *)(param_1 + 5)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0810f99e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0810f9a0 + (uint)*(byte *)(param_1 + 5) * 4))();
  return uVar1;
}


