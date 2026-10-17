// undefined FUN_0810181c(void)
// entry 0x810181c


undefined4 FUN_0810181c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (4 < *(byte *)(param_1 + 0xd)) {
    FUN_0801cff0(param_1);
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08101830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08101834 + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


