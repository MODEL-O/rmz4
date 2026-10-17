// undefined FUN_080d2510(void)
// entry 0x80d2510


undefined4 FUN_080d2510(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cff0();
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0xc0;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d2560);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


