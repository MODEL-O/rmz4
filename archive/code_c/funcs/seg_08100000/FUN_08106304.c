// undefined FUN_08106304(void)
// entry 0x8106304


undefined4 FUN_08106304(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (10 < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08106318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0810631c + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


