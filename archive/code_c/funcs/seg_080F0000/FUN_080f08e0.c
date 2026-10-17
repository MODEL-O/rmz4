// undefined FUN_080f08e0(void)
// entry 0x80f08e0


undefined4 FUN_080f08e0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080f08f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080f08f8 + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


