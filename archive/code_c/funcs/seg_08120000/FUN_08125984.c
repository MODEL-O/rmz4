// undefined FUN_08125984(void)
// entry 0x8125984


undefined8 FUN_08125984(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined8 uVar3;
  
  piVar1 = (int *)(param_1 + DAT_081259ac);
  *(undefined1 *)(*piVar1 + 0x254) = 2;
  uVar2 = (uint)*(byte *)((int)piVar1 + 0x19);
  if (5 < uVar2) {
    return CONCAT44(in_lr,1);
  }
                    /* WARNING: Could not recover jumptable at 0x081259a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(PTR_PTR_081259b0 + uVar2 * 4))();
  return uVar3;
}


