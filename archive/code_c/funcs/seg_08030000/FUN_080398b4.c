// undefined FUN_080398b4(void)
// entry 0x80398b4


longlong FUN_080398b4(int param_1)

{
  uint uVar1;
  uint in_lr;
  longlong lVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + DAT_080398d0);
  if (6 < uVar1) {
    *(byte *)(param_1 + DAT_080398d0) = 0;
    return (ulonglong)in_lr << 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x080398cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)(PTR_PTR_080398d4 + uVar1 * 4))();
  return lVar2;
}


