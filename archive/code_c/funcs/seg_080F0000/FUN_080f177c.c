// undefined FUN_080f177c(void)
// entry 0x80f177c


undefined4 FUN_080f177c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (0x20 < *(byte *)(param_1 + 0x11)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080f1790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080f1794 + (uint)*(byte *)(param_1 + 0x11) * 4))();
  return uVar1;
}


