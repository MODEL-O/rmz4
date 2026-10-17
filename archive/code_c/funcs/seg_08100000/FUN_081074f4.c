// undefined FUN_081074f4(void)
// entry 0x81074f4


undefined4 FUN_081074f4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0xd) < 5) {
                    /* WARNING: Could not recover jumptable at 0x08107506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_08107508 + (uint)*(byte *)(param_1 + 0xd) * 4))();
    return uVar1;
  }
  return in_lr;
}


