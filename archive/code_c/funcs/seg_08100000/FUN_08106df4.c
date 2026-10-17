// undefined FUN_08106df4(void)
// entry 0x8106df4


undefined4 FUN_08106df4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (7 < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08106e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08106e0c + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


