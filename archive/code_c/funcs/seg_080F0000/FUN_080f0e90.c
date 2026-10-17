// undefined FUN_080f0e90(void)
// entry 0x80f0e90


undefined4 FUN_080f0e90(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (10 < *(byte *)(param_1 + 0x11)) {
    FUN_0801cff0(param_1);
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080f0ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080f0ea8 + (uint)*(byte *)(param_1 + 0x11) * 4))();
  return uVar1;
}


