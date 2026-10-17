// undefined FUN_080d7048(void)
// entry 0x80d7048


undefined4 FUN_080d7048(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  FUN_0801cff0();
  iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar4;
  iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar3;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d7098);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080d6f44(param_1);
  }
  return in_lr;
}


