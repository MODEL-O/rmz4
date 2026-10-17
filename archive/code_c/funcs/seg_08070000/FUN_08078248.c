// undefined FUN_08078248(void)
// entry 0x8078248


undefined4 FUN_08078248(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08078260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08078264 + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar1;
}


