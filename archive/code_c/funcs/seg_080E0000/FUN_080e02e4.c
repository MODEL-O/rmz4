// undefined FUN_080e02e4(void)
// entry 0x80e02e4


undefined4 FUN_080e02e4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cff0();
  if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e0314);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080dff80(param_1);
  }
  return in_lr;
}


