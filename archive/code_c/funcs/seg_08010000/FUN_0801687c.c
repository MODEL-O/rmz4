// undefined FUN_0801687c(void)
// entry 0x801687c


undefined4 FUN_0801687c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (0xb < *(byte *)(param_1 + 0xe)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08016890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08016894 + (uint)*(byte *)(param_1 + 0xe) * 4))();
  return uVar1;
}


