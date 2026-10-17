// undefined FUN_0806eda4(void)
// entry 0x806eda4


undefined4 FUN_0806eda4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (7 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0806edba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0806edbc + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar1;
}


