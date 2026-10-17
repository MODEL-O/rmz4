// undefined FUN_080625d8(void)
// entry 0x80625d8


undefined4 FUN_080625d8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (7 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080625f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0xf) * 4 + DAT_08062600))();
  return uVar1;
}


