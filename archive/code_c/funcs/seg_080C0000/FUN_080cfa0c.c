// undefined FUN_080cfa0c(void)
// entry 0x80cfa0c


undefined4 FUN_080cfa0c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_080e7a4c(param_1 + 0x54,0x100,*(byte *)(param_1 + 10) >> 4 & 1);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cfa3c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


