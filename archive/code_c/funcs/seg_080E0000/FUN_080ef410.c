// undefined FUN_080ef410(void)
// entry 0x80ef410


undefined4 FUN_080ef410(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined1 auStack_54 [64];
  
  FUN_08129258(auStack_54,DAT_080ef434,0x38);
  if (0xd < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080ef430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080ef438 + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


