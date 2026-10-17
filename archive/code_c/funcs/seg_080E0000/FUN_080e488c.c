// undefined FUN_080e488c(void)
// entry 0x80e488c


undefined4 FUN_080e488c(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  iVar6 = *(int *)(iVar4 + 0x58);
  iVar7 = *(int *)(param_1 + 0x54);
  iVar4 = FUN_08128fb8((*(int *)(iVar4 + 0x54) + DAT_080e48d8) - iVar7,
                       *(undefined1 *)(param_1 + 0x12));
  *(int *)(param_1 + 0x5c) = iVar4;
  iVar5 = *(int *)(param_1 + 0x58);
  iVar6 = FUN_08128fb8(iVar6 - iVar5,*(undefined1 *)(param_1 + 0x12));
  *(int *)(param_1 + 0x60) = iVar6;
  *(int *)(param_1 + 0x54) = iVar7 + iVar4;
  *(int *)(param_1 + 0x58) = iVar5 + iVar6;
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e4914);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080e429c(param_1);
  }
  return in_lr;
}


