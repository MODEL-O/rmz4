// undefined FUN_080f22b4(void)
// entry 0x80f22b4


undefined4 FUN_080f22b4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (0x11 < *(byte *)(param_1 + 0xd)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080f22c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_080f22cc + (uint)*(byte *)(param_1 + 0xd) * 4))();
  return uVar1;
}


