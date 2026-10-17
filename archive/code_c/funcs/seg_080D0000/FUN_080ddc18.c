// undefined FUN_080ddc18(void)
// entry 0x80ddc18


undefined4 FUN_080ddc18(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801cff0();
  iVar3 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x5c) = iVar3 - *(int *)(param_1 + 100);
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_080ddc70);
  if (sVar1 != 0) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ddc74);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080dd6e0(param_1);
  }
  return in_lr;
}


