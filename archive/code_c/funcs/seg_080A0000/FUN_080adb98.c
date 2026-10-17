// undefined FUN_080adb98(void)
// entry 0x80adb98


undefined8 FUN_080adb98(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = FUN_08128bdc((*(int *)(*DAT_080adbc8 + 0x54) - *(int *)(param_1 + 0x54)) * 0x100 >> 0x10,
                       (*(int *)(*DAT_080adbc8 + 0x58) - (*(int *)(param_1 + 0x58) + 0xf00)) * 0x100
                       >> 0x10);
  return CONCAT44(in_lr,(uVar1 & 0xffff) >> 8);
}


