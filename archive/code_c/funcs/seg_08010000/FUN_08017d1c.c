// undefined FUN_08017d1c(void)
// entry 0x8017d1c


undefined4 FUN_08017d1c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0xe) < 5) {
                    /* WARNING: Could not recover jumptable at 0x08017d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_08017d30 + (uint)*(byte *)(param_1 + 0xe) * 4))();
    return uVar1;
  }
  return in_lr;
}


