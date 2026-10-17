// undefined FUN_080d83a0(void)
// entry 0x80d83a0


undefined4 FUN_080d83a0(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d83c8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080d83d8(param_1);
  }
  else {
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


