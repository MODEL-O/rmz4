// undefined FUN_08028e84(void)
// entry 0x8028e84


longlong FUN_08028e84(int param_1)

{
  uint uVar1;
  uint in_lr;
  longlong lVar2;
  
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + 1), uVar1 < 0x13)) {
                    /* WARNING: Could not recover jumptable at 0x08028ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(PTR_PTR_08028eac + uVar1 * 4))();
    return lVar2;
  }
  return (ulonglong)in_lr << 0x20;
}


