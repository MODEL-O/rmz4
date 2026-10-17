// undefined FUN_08105f00(void)
// entry 0x8105f00


undefined4 FUN_08105f00(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0xd) < 5) {
                    /* WARNING: Could not recover jumptable at 0x08105f12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_08105f14 + (uint)*(byte *)(param_1 + 0xd) * 4))();
    return uVar1;
  }
  return in_lr;
}


