// undefined FUN_080655b0(void)
// entry 0x80655b0


undefined4 FUN_080655b0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (7 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080655d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080655d8 + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar1;
}


