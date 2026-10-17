// undefined FUN_08100d68(void)
// entry 0x8100d68


undefined4 FUN_08100d68(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (4 < *(byte *)(param_1 + 0xe)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08100d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08100d80 + (uint)*(byte *)(param_1 + 0xe) * 4))();
  return uVar1;
}


