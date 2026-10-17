// undefined FUN_080c9b28(void)
// entry 0x80c9b28


undefined4 FUN_080c9b28(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cff0();
  FUN_08005784(param_1 + 0x74,*(undefined4 *)(*(char *)(param_1 + 0x71) * 4 + DAT_080c9b84));
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c9b88);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080c9b8c(param_1);
  }
  return in_lr;
}


