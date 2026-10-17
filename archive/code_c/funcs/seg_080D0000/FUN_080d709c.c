// undefined FUN_080d709c(void)
// entry 0x80d709c


undefined4 FUN_080d709c(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cff0();
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar2 + 0xa00);
  if (sVar1 != 0) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d70ec);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080d6f44(param_1);
  }
  return in_lr;
}


