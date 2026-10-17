// undefined FUN_08100f5c(void)
// entry 0x8100f5c


undefined4 FUN_08100f5c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (4 < *(byte *)(param_1 + 0xe)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08100f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08100f74 + (uint)*(byte *)(param_1 + 0xe) * 4))();
  return uVar1;
}


