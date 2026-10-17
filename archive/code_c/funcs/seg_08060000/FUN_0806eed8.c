// undefined FUN_0806eed8(void)
// entry 0x806eed8


undefined4 FUN_0806eed8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (7 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0806eef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0806eef8 + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar1;
}


