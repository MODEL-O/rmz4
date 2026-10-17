// undefined FUN_080a8518(void)
// entry 0x80a8518


undefined4 FUN_080a8518(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xe)) {
    FUN_0801cff0(param_1);
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080a8534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080a8538 + (uint)*(byte *)(param_1 + 0xe) * 4))();
  return uVar1;
}


