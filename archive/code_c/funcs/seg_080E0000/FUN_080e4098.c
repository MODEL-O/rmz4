// undefined FUN_080e4098(void)
// entry 0x80e4098


undefined4 FUN_080e4098(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x7c);
  FUN_0801cff0();
  if (((*(byte *)(iVar7 + 3) & 0x40) != 0) &&
     (*(byte *)(param_1 + 0x12) < *(byte *)(param_1 + 0x13) >> 1)) {
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  if ((*(byte *)(iVar7 + 3) & 0x10) != 0) {
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  iVar5 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar5;
  iVar6 = *(int *)(param_1 + 0x58) + iVar5;
  *(int *)(param_1 + 0x58) = iVar6;
  bVar1 = *(byte *)(iVar7 + 3);
  if ((bVar1 & 0x20) == 0) {
    if (iVar5 < 1) {
      iVar7 = -(int)*(short *)(param_1 + 0x76);
    }
    else {
      iVar7 = (int)*(short *)(param_1 + 0x76);
    }
    sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar6 + iVar7);
    if (sVar3 != 0) {
      *(byte *)(param_1 + 0x12) = bVar1 & 0x20;
    }
    iVar7 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar7;
    iVar5 = *(int *)(param_1 + 0x54) + iVar7;
    *(int *)(param_1 + 0x54) = iVar5;
    if (iVar7 < 1) {
      iVar7 = -(int)*(short *)(param_1 + 0x74);
    }
    else {
      iVar7 = (int)*(short *)(param_1 + 0x74);
    }
    sVar3 = FUN_08007c7c(iVar5 + iVar7,*(undefined4 *)(param_1 + 0x58));
    if (sVar3 != 0) {
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar7;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e41b0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080e3fdc(param_1);
  }
  return in_lr;
}


