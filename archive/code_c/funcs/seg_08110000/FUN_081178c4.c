// undefined FUN_081178c4(void)
// entry 0x81178c4


undefined4 FUN_081178c4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (0x11 < *(byte *)(param_1 + 3)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x081178d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_081178dc + (uint)*(byte *)(param_1 + 3) * 4))();
  return uVar1;
}


