// undefined FUN_08027f44(void)
// entry 0x8027f44


longlong FUN_08027f44(int param_1)

{
  uint uVar1;
  uint in_lr;
  longlong lVar2;
  
  uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + 1);
  if (0x11 < uVar1) {
    return (ulonglong)in_lr << 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x08027f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)(uVar1 * 4 + DAT_08027f64))();
  return lVar2;
}


