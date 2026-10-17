// undefined FUN_08106f28(void)
// entry 0x8106f28


undefined4 FUN_08106f28(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (0x10 < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08106f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08106f40 + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


