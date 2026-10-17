// undefined FUN_080e8a94(void)
// entry 0x80e8a94


undefined4 FUN_080e8a94(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    FUN_0801cff0(param_1);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e8af0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080e8af4(param_1);
  }
  return in_lr;
}


