// undefined FUN_080280c4(void)
// entry 0x80280c4


longlong FUN_080280c4(int param_1)

{
  uint uVar1;
  uint in_lr;
  longlong lVar2;
  
  uVar1 = (uint)*(short *)(*(int *)(param_1 + 0xc) + 2);
  if (6 < uVar1) {
    return (ulonglong)in_lr << 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x080280e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (**(code **)(PTR_PTR_080280e4 + uVar1 * 4))();
  return lVar2;
}


