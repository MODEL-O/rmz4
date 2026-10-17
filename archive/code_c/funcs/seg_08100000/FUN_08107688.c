// undefined FUN_08107688(void)
// entry 0x8107688


undefined4 FUN_08107688(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (8 < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0810769c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_081076a0 + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


