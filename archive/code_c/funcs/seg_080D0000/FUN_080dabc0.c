// undefined FUN_080dabc0(void)
// entry 0x80dabc0


undefined4 FUN_080dabc0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cff0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x60) + 0x20;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x380 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x380;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dac14);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080dac18(param_1);
  }
  return in_lr;
}


