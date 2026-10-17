// undefined FUN_080d9dec(void)
// entry 0x80d9dec


undefined4 FUN_080d9dec(int param_1)

{
  short sVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if ((cVar3 == '\0') || (sVar1 = FUN_08007c7c(iVar5,iVar4), sVar1 != 0)) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d9e30);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080d9e68(param_1);
  }
  else {
    FUN_0801cff0(param_1);
    *(int *)(param_1 + 0x54) = iVar5;
    *(int *)(param_1 + 0x58) = iVar4;
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    cVar3 = *(char *)(param_1 + 0x75) + *(char *)(param_1 + 0x74);
    *(char *)(param_1 + 0x74) = cVar3;
    *(char *)(param_1 + 0x24) = cVar3;
  }
  return in_lr;
}


