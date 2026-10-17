// undefined FUN_080f43bc(void)
// entry 0x80f43bc


undefined4 FUN_080f43bc(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xd)) {
    FUN_0801cff0(param_1);
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080f43d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080f43d4 + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


