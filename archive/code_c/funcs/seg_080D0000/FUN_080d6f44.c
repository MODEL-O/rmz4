// undefined FUN_080d6f44(void)
// entry 0x80d6f44


undefined4 FUN_080d6f44(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(DAT_080d6f74 + 9) & 4) == 0) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080d6f90));
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d6f78);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  return in_lr;
}


