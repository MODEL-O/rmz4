// undefined FUN_08092674(void)
// entry 0x8092674


undefined4 FUN_08092674(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (5 < *(byte *)(param_1 + 0xe)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08092688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_0809268c + (uint)*(byte *)(param_1 + 0xe) * 4))();
  return uVar1;
}


