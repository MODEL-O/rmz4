// undefined FUN_08127880(void)
// entry 0x8127880


undefined4 FUN_08127880(uint param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 in_lr;
  
  piVar1 = (int *)((param_1 & 0xffff) * 8 + DAT_081278b0);
  piVar2 = *(int **)((uint)*(ushort *)(piVar1 + 1) * 0xc + DAT_081278ac);
  if (*piVar2 == *piVar1) {
    FUN_08127f84(piVar2);
  }
  return in_lr;
}


