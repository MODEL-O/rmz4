// undefined FUN_080f0b58(void)
// entry 0x80f0b58


undefined4 FUN_080f0b58(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080f0b6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080f0b70))();
  return uVar1;
}


