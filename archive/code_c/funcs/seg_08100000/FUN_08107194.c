// undefined FUN_08107194(void)
// entry 0x8107194


undefined4 FUN_08107194(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (0xf < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x081071a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_081071ac + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


