// undefined FUN_08028c60(void)
// entry 0x8028c60


longlong FUN_08028c60(int param_1)

{
  uint uVar1;
  uint in_lr;
  longlong lVar2;
  
  uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + 1);
  if (7 < uVar1) {
    return (ulonglong)in_lr << 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x08028c76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)(PTR_PTR_08028c78 + uVar1 * 4))();
  return lVar2;
}


