// undefined FUN_0810c424(void)
// entry 0x810c424


undefined4 FUN_0810c424(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (4 < *(byte *)(param_1 + 0xd)) {
    FUN_0801cff0(param_1);
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0810c43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0810c440 + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


