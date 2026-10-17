// undefined FUN_080eae0c(void)
// entry 0x80eae0c


undefined4 FUN_080eae0c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (4 < *(byte *)(param_1 + 0xe)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080eae20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080eae24 + (uint)*(byte *)(param_1 + 0xe) * 4))();
  return uVar1;
}


