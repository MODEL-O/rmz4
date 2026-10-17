// undefined FUN_081269bc(void)
// entry 0x81269bc


undefined8 FUN_081269bc(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined8 uVar3;
  
  piVar1 = (int *)(param_1 + DAT_081269e4);
  *(undefined1 *)(*piVar1 + 0x254) = 3;
  uVar2 = (uint)*(byte *)((int)piVar1 + 0x19);
  if (5 < uVar2) {
    *(undefined1 *)(*(int *)(param_1 + DAT_08126af0) + 0x254) = 1;
    return CONCAT44(in_lr,1);
  }
                    /* WARNING: Could not recover jumptable at 0x081269e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(PTR_PTR_081269e8 + uVar2 * 4))();
  return uVar3;
}


