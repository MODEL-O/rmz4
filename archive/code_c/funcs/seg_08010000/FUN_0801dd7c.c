// undefined FUN_0801dd7c(void)
// entry 0x801dd7c


longlong FUN_0801dd7c(uint param_1)

{
  uint in_lr;
  longlong lVar1;
  
  if (8 < (param_1 & 0xff)) {
    return (ulonglong)in_lr << 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x0801dd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(PTR_PTR_0801dd98 + (param_1 & 0xff) * 4))();
  return lVar1;
}


