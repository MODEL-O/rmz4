// undefined FUN_080e1164(void)
// entry 0x80e1164


undefined4 FUN_080e1164(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  FUN_0801cff0();
  uVar5 = *(undefined4 *)(param_1 + 0x54);
  iVar6 = *(int *)(param_1 + 0x58);
  iVar3 = *(int *)(param_1 + 0x60);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') || (sVar2 = FUN_08007c7c(uVar5), sVar2 != 0)) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e11a8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080e11c8(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    *(int *)(param_1 + 0x58) = iVar3 + iVar6;
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  return in_lr;
}


