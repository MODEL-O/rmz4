// undefined FUN_080ef8ac(void)
// entry 0x80ef8ac


undefined4 FUN_080ef8ac(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (0x11 < *(byte *)(param_1 + 0x11)) {
    FUN_0801cff0(param_1);
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080ef8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080ef8c4 + (uint)*(byte *)(param_1 + 0x11) * 4))();
  return uVar1;
}


