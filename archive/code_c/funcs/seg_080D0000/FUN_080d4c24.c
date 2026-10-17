// undefined FUN_080d4c24(void)
// entry 0x80d4c24


undefined4 FUN_080d4c24(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cff0();
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(int *)(param_1 + 0x54) = **(int **)(param_1 + 0x28) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x58) = (*(int **)(param_1 + 0x28))[1] + *(int *)(param_1 + 0x68);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d4c68);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


