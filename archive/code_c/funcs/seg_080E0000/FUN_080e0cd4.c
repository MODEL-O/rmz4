// undefined FUN_080e0cd4(void)
// entry 0x80e0cd4


undefined8 FUN_080e0cd4(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 == '\0') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e0d00);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  else {
    *(char *)(param_1 + 0x12) = cVar1 + -1;
  }
  return CONCAT44(in_lr,(uint)(cVar1 == '\0'));
}


