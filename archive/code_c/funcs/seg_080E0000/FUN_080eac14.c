// undefined FUN_080eac14(void)
// entry 0x80eac14


undefined4 FUN_080eac14(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (4 < *(byte *)(param_1 + 0xe)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080eac28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080eac2c + (uint)*(byte *)(param_1 + 0xe) * 4))();
  return uVar1;
}


