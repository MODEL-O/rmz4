// undefined FUN_080e234c(void)
// entry 0x80e234c


undefined4 FUN_080e234c(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x74) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    cVar1 = '\x01';
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    if (2 < *(byte *)(param_1 + 0x11)) goto LAB_080e2378;
    cVar1 = '\0';
  }
  *(char *)(param_1 + 0x74) = cVar1;
LAB_080e2378:
  FUN_080e2500(param_1);
  cVar1 = FUN_080e25e8(param_1);
  if (cVar1 != '\0') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e23a8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


