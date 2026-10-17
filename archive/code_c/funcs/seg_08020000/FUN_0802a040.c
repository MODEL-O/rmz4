// undefined FUN_0802a040(void)
// entry 0x802a040


undefined8 FUN_0802a040(int param_1)

{
  undefined4 in_lr;
  undefined8 uVar1;
  
  if ((*DAT_0802a06c & 0xb) != 0) {
    *(short *)(param_1 + 4) = (short)DAT_0802a070;
  }
  if (0x1b < *(byte *)(param_1 + 1)) {
    return CONCAT44(in_lr,1);
  }
                    /* WARNING: Could not recover jumptable at 0x0802a06a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0802a074 + (uint)*(byte *)(param_1 + 1) * 4))();
  return uVar1;
}


