// undefined FUN_08029be0(void)
// entry 0x8029be0


undefined8 FUN_08029be0(byte *param_1)

{
  undefined4 in_lr;
  undefined8 uVar1;
  
  if (8 < *param_1) {
    FUN_0802aa9c();
    return CONCAT44(in_lr,1);
  }
                    /* WARNING: Could not recover jumptable at 0x08029bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08029bf8 + (uint)*param_1 * 4))();
  return uVar1;
}


