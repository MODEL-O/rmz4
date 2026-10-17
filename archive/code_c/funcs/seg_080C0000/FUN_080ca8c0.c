// undefined FUN_080ca8c0(void)
// entry 0x80ca8c0


undefined4 FUN_080ca8c0(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cff0();
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  sVar1 = FUN_08007c7c(iVar2,*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68));
  if (sVar1 != 0) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ca8f8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  return in_lr;
}


