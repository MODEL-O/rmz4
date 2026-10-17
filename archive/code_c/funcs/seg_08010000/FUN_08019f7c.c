// undefined FUN_08019f7c(void)
// entry 0x8019f7c


undefined4 FUN_08019f7c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (0x11 < *(byte *)(param_1 + 0xe)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08019fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08019fc4 + (uint)*(byte *)(param_1 + 0xe) * 4))();
  return uVar1;
}


