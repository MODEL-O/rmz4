// undefined FUN_080697f0(void)
// entry 0x80697f0


undefined4 FUN_080697f0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08069832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08069834 + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar1;
}


