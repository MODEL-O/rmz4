// undefined FUN_08106acc(void)
// entry 0x8106acc


undefined4 FUN_08106acc(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08106aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08106af0 + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


