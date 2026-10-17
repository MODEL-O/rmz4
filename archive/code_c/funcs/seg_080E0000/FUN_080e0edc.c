// undefined FUN_080e0edc(void)
// entry 0x80e0edc


undefined4 FUN_080e0edc(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  FUN_0801cff0(param_1);
  iVar7 = *(int *)(param_1 + 0x58);
  iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0x60);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if ((cVar2 == '\0') ||
     (sVar3 = FUN_08007c7c(iVar6 + ((bVar1 >> 4 & 1) * 2 + -1) * -0xc00), sVar3 != 0)) {
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e0f3c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 8);
    FUN_080e0f5c(param_1);
  }
  else {
    *(int *)(param_1 + 0x54) = iVar6;
    *(int *)(param_1 + 0x58) = iVar4 + iVar7;
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  return in_lr;
}


