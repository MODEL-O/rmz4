// undefined FUN_08030e68(void)
// entry 0x8030e68


undefined4 FUN_08030e68(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xf)) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    FUN_08031138(param_1);
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08030e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08030e80 + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar1;
}


