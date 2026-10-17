// undefined FUN_08105954(void)
// entry 0x8105954


longlong FUN_08105954(int param_1,undefined4 param_2,int param_3)

{
  uint in_lr;
  longlong lVar1;
  
  if (5 < *(byte *)(param_1 + 0xf)) {
    return (ulonglong)in_lr << 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x08105970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(PTR_PTR_08105974 + (uint)*(byte *)(param_1 + 0xf) * 4))
                    (*(code **)(PTR_PTR_08105974 + (uint)*(byte *)(param_1 + 0xf) * 4),
                     PTR_PTR_08105974,param_3 << 0x18);
  return lVar1;
}


