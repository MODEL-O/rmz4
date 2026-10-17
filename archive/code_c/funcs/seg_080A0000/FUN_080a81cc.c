// undefined FUN_080a81cc(void)
// entry 0x80a81cc


undefined4 FUN_080a81cc(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (6 < *(byte *)(param_1 + 0xe)) {
    FUN_0801cff0(param_1);
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080a81e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080a81ec + (uint)*(byte *)(param_1 + 0xe) * 4))();
  return uVar1;
}


