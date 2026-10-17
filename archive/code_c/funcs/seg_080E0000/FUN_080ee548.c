// undefined FUN_080ee548(void)
// entry 0x80ee548


void FUN_080ee548(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xd);
  if (0xd3 < uVar1) {
    uVar1 = FUN_080ef0ac();
  }
                    /* WARNING: Could not recover jumptable at 0x080ee566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_PTR_080ee568 + uVar1 * 4))();
  return;
}


