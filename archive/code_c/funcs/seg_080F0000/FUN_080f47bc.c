// undefined FUN_080f47bc(void)
// entry 0x80f47bc


undefined4 FUN_080f47bc(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (4 < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080f47d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080f47d4 + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


