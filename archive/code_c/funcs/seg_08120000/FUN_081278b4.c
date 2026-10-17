// undefined FUN_081278b4(void)
// entry 0x81278b4


undefined4 FUN_081278b4(uint param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 in_lr;
  
  piVar1 = (int *)((param_1 & 0xffff) * 8 + DAT_081278e4);
  piVar2 = *(int **)((uint)*(ushort *)(piVar1 + 1) * 0xc + DAT_081278e0);
  if (*piVar2 == *piVar1) {
    FUN_081276f4(piVar2);
  }
  return in_lr;
}


