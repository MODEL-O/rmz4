// undefined FUN_08115ba8(void)
// entry 0x8115ba8


undefined4 FUN_08115ba8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (0x14 < *(byte *)(param_1 + 3)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08115bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08115bc0 + (uint)*(byte *)(param_1 + 3) * 4))();
  return uVar1;
}


