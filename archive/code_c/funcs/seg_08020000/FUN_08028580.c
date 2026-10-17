// undefined FUN_08028580(void)
// entry 0x8028580


longlong FUN_08028580(int param_1)

{
  uint uVar1;
  uint in_lr;
  longlong lVar2;
  
  if ((*(int *)(param_1 + (uint)*(byte *)(*(int *)(param_1 + 0xc) + 1) * 0x10 + 0x10) != 0) &&
     (uVar1 = (uint)*(short *)(*(int *)(param_1 + 0xc) + 2), uVar1 < 8)) {
                    /* WARNING: Could not recover jumptable at 0x080285a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(PTR_PTR_080285a8 + uVar1 * 4))();
    return lVar2;
  }
  return (ulonglong)in_lr << 0x20;
}


