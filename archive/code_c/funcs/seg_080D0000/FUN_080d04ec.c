// undefined FUN_080d04ec(void)
// entry 0x80d04ec


undefined4 FUN_080d04ec(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cff0();
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d0520);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080d0524(param_1);
  }
  return in_lr;
}


