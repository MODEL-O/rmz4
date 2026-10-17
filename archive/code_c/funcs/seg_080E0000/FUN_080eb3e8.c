// undefined FUN_080eb3e8(void)
// entry 0x80eb3e8


undefined4 FUN_080eb3e8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xe)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080eb400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080eb404 + (uint)*(byte *)(param_1 + 0xe) * 4))();
  return uVar1;
}


