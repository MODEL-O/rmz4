// undefined FUN_080da478(void)
// entry 0x80da478


undefined4 FUN_080da478(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cff0();
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080da4a4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


