// undefined FUN_08114318(void)
// entry 0x8114318


undefined4 FUN_08114318(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (0xe < *(byte *)(param_1 + 2)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0811432c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08114330 + (uint)*(byte *)(param_1 + 2) * 4))();
  return uVar1;
}


