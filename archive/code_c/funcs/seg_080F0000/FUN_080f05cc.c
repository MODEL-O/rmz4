// undefined FUN_080f05cc(void)
// entry 0x80f05cc


undefined4 FUN_080f05cc(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080f05e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080f05e4))();
  return uVar1;
}


