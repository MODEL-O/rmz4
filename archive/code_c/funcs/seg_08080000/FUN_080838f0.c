// undefined FUN_080838f0(void)
// entry 0x80838f0


undefined4 FUN_080838f0(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08083928);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_08083a10(param_1);
  }
  else {
    FUN_08083a78(param_1);
  }
  FUN_08083940(param_1);
  return in_lr;
}


