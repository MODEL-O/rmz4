// undefined FUN_080ece7c(void)
// entry 0x80ece7c


undefined4 FUN_080ece7c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(DAT_080ecec8 + DAT_080ececc) & 0xf) == 1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080eced0,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080eced4);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
    FUN_080ecefc(param_1);
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ecef8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080ecf58(param_1);
  }
  return in_lr;
}


