// undefined FUN_08105ff8(void)
// entry 0x8105ff8


undefined4 FUN_08105ff8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (0x10 < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0810600c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08106010 + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


