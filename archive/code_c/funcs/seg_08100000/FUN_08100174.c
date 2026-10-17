// undefined FUN_08100174(void)
// entry 0x8100174


undefined4 FUN_08100174(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xe)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0810018c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08100190 + (uint)*(byte *)(param_1 + 0xe) * 4))();
  return uVar1;
}


