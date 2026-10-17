// undefined FUN_08124ad4(void)
// entry 0x8124ad4


undefined8 FUN_08124ad4(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined8 uVar3;
  
  piVar1 = (int *)(param_1 + DAT_08124afc);
  *(undefined1 *)(*piVar1 + 0x254) = 2;
  uVar2 = (uint)*(byte *)((int)piVar1 + 0x19);
  if (5 < uVar2) {
    return CONCAT44(in_lr,1);
  }
                    /* WARNING: Could not recover jumptable at 0x08124af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(PTR_PTR_08124b00 + uVar2 * 4))();
  return uVar3;
}


