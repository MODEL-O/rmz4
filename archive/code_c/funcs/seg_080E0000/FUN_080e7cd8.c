// undefined FUN_080e7cd8(void)
// entry 0x80e7cd8


undefined4 FUN_080e7cd8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e7cfc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  }
  return in_lr;
}


