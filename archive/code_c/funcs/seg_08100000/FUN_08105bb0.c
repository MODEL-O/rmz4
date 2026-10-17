// undefined FUN_08105bb0(void)
// entry 0x8105bb0


undefined4 FUN_08105bb0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (9 < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08105bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08105bc8 + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


