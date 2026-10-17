// undefined FUN_080d4314(void)
// entry 0x80d4314


undefined4 FUN_080d4314(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  if (*(byte *)(param_1 + 0xe) < 5) {
                    /* WARNING: Could not recover jumptable at 0x080d432c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_080d4330 + (uint)*(byte *)(param_1 + 0xe) * 4))();
    return uVar1;
  }
  return in_lr;
}


