// undefined FUN_08078dc4(void)
// entry 0x8078dc4


undefined4 FUN_08078dc4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (7 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08078dda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0xf) * 4 + DAT_08078ddc))();
  return uVar1;
}


