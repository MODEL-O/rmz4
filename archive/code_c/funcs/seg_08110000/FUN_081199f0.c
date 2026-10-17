// undefined FUN_081199f0(void)
// entry 0x81199f0


void FUN_081199f0(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0xff) < 8) {
                    /* WARNING: Could not recover jumptable at 0x08119a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(PTR_PTR_08119a08 + (param_2 & 0xff) * 4))
              (*(code **)(PTR_PTR_08119a08 + (param_2 & 0xff) * 4),PTR_PTR_08119a08,param_1);
    return;
  }
  return;
}


