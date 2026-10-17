// undefined FUN_080e87f4(void)
// entry 0x80e87f4


undefined4 FUN_080e87f4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x10) < 5) && (*(char *)(param_1 + 0x73) == '\x03')) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e8824);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


