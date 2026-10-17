// undefined FUN_080ed7f8(void)
// entry 0x80ed7f8


longlong FUN_080ed7f8(int param_1,undefined4 param_2,int param_3)

{
  uint in_lr;
  longlong lVar1;
  
  if (5 < *(byte *)(param_1 + 0xf)) {
    return (ulonglong)in_lr << 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x080ed814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(PTR_PTR_080ed818 + (uint)*(byte *)(param_1 + 0xf) * 4))
                    (*(code **)(PTR_PTR_080ed818 + (uint)*(byte *)(param_1 + 0xf) * 4),
                     PTR_PTR_080ed818,param_3 << 0x18);
  return lVar1;
}


