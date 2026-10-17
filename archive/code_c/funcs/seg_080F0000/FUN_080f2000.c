// undefined FUN_080f2000(void)
// entry 0x80f2000


undefined4 FUN_080f2000(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x11) < 5) {
                    /* WARNING: Could not recover jumptable at 0x080f2012. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_080f2014 + (uint)*(byte *)(param_1 + 0x11) * 4))();
    return uVar1;
  }
  return in_lr;
}


