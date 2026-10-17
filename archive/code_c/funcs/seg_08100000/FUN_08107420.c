// undefined FUN_08107420(void)
// entry 0x8107420


undefined4 FUN_08107420(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0xd) < 6) {
                    /* WARNING: Could not recover jumptable at 0x08107432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_08107434 + (uint)*(byte *)(param_1 + 0xd) * 4))();
    return uVar1;
  }
  return in_lr;
}


