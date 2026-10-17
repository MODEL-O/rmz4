// undefined FUN_081251e0(void)
// entry 0x81251e0


undefined8 FUN_081251e0(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined8 uVar3;
  
  piVar1 = (int *)(param_1 + DAT_08125208);
  *(undefined1 *)(*piVar1 + 0x254) = 2;
  uVar2 = (uint)*(byte *)((int)piVar1 + 0x19);
  if (5 < uVar2) {
    if (*(short *)(param_1 + 6) == 0) {
      *(undefined4 *)(param_1 + DAT_08125310 + 0x2c) = 0xff;
    }
    return CONCAT44(in_lr,1);
  }
                    /* WARNING: Could not recover jumptable at 0x08125204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(PTR_PTR_0812520c + uVar2 * 4))();
  return uVar3;
}


