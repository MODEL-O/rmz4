// undefined FUN_080ad8b4(void)
// entry 0x80ad8b4


undefined4 FUN_080ad8b4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if (*(char *)(param_1 + 0xb8) == '\0') {
      FUN_080ad9f4(param_1);
    }
    else {
      FUN_080adc78(param_1);
    }
    FUN_080adad8(param_1);
    FUN_0801cff0(param_1);
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ad8e0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080ad910(param_1);
  }
  return in_lr;
}


