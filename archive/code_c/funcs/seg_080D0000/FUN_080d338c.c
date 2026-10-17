// undefined FUN_080d338c(void)
// entry 0x80d338c


undefined4 FUN_080d338c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x22) = 1;
  FUN_0801cc9c(param_1);
  FUN_0801cf00(param_1,DAT_080d33c8);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d33cc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080d33d0(param_1);
  return in_lr;
}


