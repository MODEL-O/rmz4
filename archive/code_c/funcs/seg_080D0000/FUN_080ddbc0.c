// undefined FUN_080ddbc0(void)
// entry 0x80ddbc0


undefined4 FUN_080ddbc0(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  FUN_0801cff0();
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == -1) || (sVar2 = FUN_08007c7c(iVar4), sVar2 != 0)) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ddc14);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080dd6e0(param_1);
  }
  return in_lr;
}


