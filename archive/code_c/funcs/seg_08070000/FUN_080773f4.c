// undefined FUN_080773f4(void)
// entry 0x80773f4


undefined4 FUN_080773f4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (4 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08077408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0807740c + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar1;
}


