// undefined FUN_0805bc14(void)
// entry 0x805bc14


undefined4 FUN_0805bc14(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (7 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0805bc3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0805bc44 + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar1;
}


