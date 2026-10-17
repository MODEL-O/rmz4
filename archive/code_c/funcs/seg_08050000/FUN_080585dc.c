// undefined FUN_080585dc(void)
// entry 0x80585dc


undefined4 FUN_080585dc(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080585f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080585fc + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar1;
}


