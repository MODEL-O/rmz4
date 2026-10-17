// undefined FUN_080ecc6c(void)
// entry 0x80ecc6c


undefined4 FUN_080ecc6c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0xd) < 8) {
                    /* WARNING: Could not recover jumptable at 0x080ecc7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_080ecc80 + (uint)*(byte *)(param_1 + 0xd) * 4))();
    return uVar1;
  }
  return in_lr;
}


