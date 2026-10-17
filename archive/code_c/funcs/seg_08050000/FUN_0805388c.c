// undefined FUN_0805388c(void)
// entry 0x805388c


undefined4 FUN_0805388c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (7 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080538a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080538a4 + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar1;
}


