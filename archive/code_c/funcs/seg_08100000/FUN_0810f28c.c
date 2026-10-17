// undefined FUN_0810f28c(void)
// entry 0x810f28c


undefined4 FUN_0810f28c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (6 < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0810f2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0810f2a4 + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


