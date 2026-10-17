// undefined FUN_0808d3c4(void)
// entry 0x808d3c4


undefined4 FUN_0808d3c4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (0xb < *(byte *)(param_1 + 0xe)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0808d3da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0808d3dc + (uint)*(byte *)(param_1 + 0xe) * 4))();
  return uVar1;
}


