// undefined FUN_0810bccc(void)
// entry 0x810bccc


undefined4 FUN_0810bccc(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0810bd00));
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810bd04);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0810bd08(param_1);
  return in_lr;
}


