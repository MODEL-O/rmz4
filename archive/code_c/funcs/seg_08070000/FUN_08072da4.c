// undefined FUN_08072da4(void)
// entry 0x8072da4


undefined4 FUN_08072da4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08072dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08072ddc + (uint)*(byte *)(param_1 + 0xf) * 4))
                    (*(code **)(PTR_PTR_08072ddc + (uint)*(byte *)(param_1 + 0xf) * 4),
                     param_1 + 0x74,param_1 + 0x71);
  return uVar1;
}


