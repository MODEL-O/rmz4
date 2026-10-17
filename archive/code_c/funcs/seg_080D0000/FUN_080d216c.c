// undefined FUN_080d216c(void)
// entry 0x80d216c


undefined4 FUN_080d216c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,9);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d21a8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080d1dd0(param_1);
  return in_lr;
}


