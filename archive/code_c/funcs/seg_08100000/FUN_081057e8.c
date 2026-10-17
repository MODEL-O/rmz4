// undefined FUN_081057e8(void)
// entry 0x81057e8


longlong FUN_081057e8(int param_1,undefined4 param_2,int param_3)

{
  uint in_lr;
  longlong lVar1;
  
  if (5 < *(byte *)(param_1 + 0xf)) {
    return (ulonglong)in_lr << 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x08105804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(PTR_PTR_08105808 + (uint)*(byte *)(param_1 + 0xf) * 4))
                    (*(code **)(PTR_PTR_08105808 + (uint)*(byte *)(param_1 + 0xf) * 4),
                     PTR_PTR_08105808,param_3 << 0x18);
  return lVar1;
}


