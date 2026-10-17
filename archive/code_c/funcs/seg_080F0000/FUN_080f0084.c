// undefined FUN_080f0084(void)
// entry 0x80f0084


undefined4 FUN_080f0084(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080f009a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080f009c + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


