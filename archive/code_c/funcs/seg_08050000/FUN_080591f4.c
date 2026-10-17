// undefined FUN_080591f4(void)
// entry 0x80591f4


undefined4 FUN_080591f4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (7 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08059214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0805921c + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar1;
}


