// undefined FUN_080294dc(void)
// entry 0x80294dc


longlong FUN_080294dc(int param_1)

{
  uint uVar1;
  uint in_lr;
  longlong lVar2;
  
  uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + 1);
  if (0xb < uVar1) {
    return (ulonglong)in_lr << 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x080294f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)(PTR_PTR_080294f8 + uVar1 * 4))();
  return lVar2;
}


