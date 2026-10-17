// undefined FUN_080cb404(void)
// entry 0x80cb404


undefined4 FUN_080cb404(int param_1)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  FUN_0801cff0();
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if ((*(int *)(*DAT_080cb47c + 0x58) + DAT_080cb480 < *(int *)(param_1 + 0x58)) &&
     (sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54)), sVar2 != 0)) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cb484);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080cb178(param_1);
  }
  return in_lr;
}


