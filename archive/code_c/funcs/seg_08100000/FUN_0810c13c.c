// undefined FUN_0810c13c(void)
// entry 0x810c13c


undefined4 FUN_0810c13c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0810c170));
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810c174);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0810c178(param_1);
  return in_lr;
}


