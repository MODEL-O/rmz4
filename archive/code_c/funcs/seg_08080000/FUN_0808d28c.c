// undefined FUN_0808d28c(void)
// entry 0x808d28c


undefined4 FUN_0808d28c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (7 < *(byte *)(param_1 + 0xe)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0808d2a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0808d2a4 + (uint)*(byte *)(param_1 + 0xe) * 4))();
  return uVar1;
}


