// undefined FUN_080cee40(void)
// entry 0x80cee40


undefined4 FUN_080cee40(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_080d0c88(3,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cee68);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


