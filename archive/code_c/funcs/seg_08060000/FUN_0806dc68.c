// undefined FUN_0806dc68(void)
// entry 0x806dc68


undefined4 FUN_0806dc68(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0806dc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0806dc80 + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar1;
}


