// undefined FUN_080f156c(void)
// entry 0x80f156c


undefined4 FUN_080f156c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (6 < *(byte *)(param_1 + 0x11)) {
    FUN_0801cff0(param_1);
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080f1580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080f1584 + (uint)*(byte *)(param_1 + 0x11) * 4))();
  return uVar1;
}


