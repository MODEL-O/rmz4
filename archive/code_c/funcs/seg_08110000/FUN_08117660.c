// undefined FUN_08117660(void)
// entry 0x8117660


undefined4 FUN_08117660(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (0x15 < *(byte *)(param_1 + 3)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08117674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08117678 + (uint)*(byte *)(param_1 + 3) * 4))();
  return uVar1;
}


