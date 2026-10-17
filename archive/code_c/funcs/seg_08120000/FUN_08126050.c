// undefined FUN_08126050(void)
// entry 0x8126050


undefined8 FUN_08126050(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined8 uVar3;
  
  piVar1 = (int *)(param_1 + DAT_08126078);
  *(undefined1 *)(*piVar1 + 0x254) = 2;
  uVar2 = (uint)*(byte *)((int)piVar1 + 0x19);
  if (5 < uVar2) {
    return CONCAT44(in_lr,1);
  }
                    /* WARNING: Could not recover jumptable at 0x08126074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(PTR_PTR_0812607c + uVar2 * 4))();
  return uVar3;
}


