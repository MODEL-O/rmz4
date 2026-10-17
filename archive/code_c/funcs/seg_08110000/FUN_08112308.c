// undefined FUN_08112308(void)
// entry 0x8112308


/* WARNING: Removing unreachable block (ram,0x0811266c) */

undefined4 FUN_08112308(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 6) < 8) {
                    /* WARNING: Could not recover jumptable at 0x08112326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_08112328 + (uint)*(byte *)(param_1 + 6) * 4))();
    return uVar1;
  }
  FUN_080025d8(0x33);
  FUN_080025d8(0x79);
  return in_lr;
}


