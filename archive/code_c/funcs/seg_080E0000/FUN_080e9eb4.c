// undefined FUN_080e9eb4(void)
// entry 0x80e9eb4


undefined4 FUN_080e9eb4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (4 < *(byte *)(param_1 + 0xe)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080e9ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080e9ecc + (uint)*(byte *)(param_1 + 0xe) * 4))();
  return uVar1;
}


