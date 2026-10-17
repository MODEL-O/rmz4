// undefined FUN_0810edf8(void)
// entry 0x810edf8


undefined4 FUN_0810edf8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (8 < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0810ee0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0810ee10))();
  return uVar1;
}


