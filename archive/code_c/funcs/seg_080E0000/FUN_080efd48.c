// undefined FUN_080efd48(void)
// entry 0x80efd48


undefined4 FUN_080efd48(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (0xf < *(byte *)(param_1 + 0x11)) {
    FUN_0801cff0(param_1);
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080efd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080efd60 + (uint)*(byte *)(param_1 + 0x11) * 4))();
  return uVar1;
}


