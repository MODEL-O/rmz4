// undefined FUN_081013f0(void)
// entry 0x81013f0


undefined4 FUN_081013f0(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_080e67ac(param_1 + 0x54,0x100,*(byte *)(param_1 + 10) >> 4 & 1);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08101420);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


