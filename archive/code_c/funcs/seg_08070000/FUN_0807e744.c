// undefined FUN_0807e744(void)
// entry 0x807e744


undefined4 FUN_0807e744(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (7 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0807e75a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0807e75c + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar1;
}


