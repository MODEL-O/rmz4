// undefined FUN_080f4d6c(void)
// entry 0x80f4d6c


undefined4 FUN_080f4d6c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (4 < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080f4d82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080f4d84 + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


