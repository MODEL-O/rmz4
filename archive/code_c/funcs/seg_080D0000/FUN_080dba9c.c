// undefined FUN_080dba9c(void)
// entry 0x80dba9c


undefined4 FUN_080dba9c(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x74);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080dbaec);
    *(undefined1 *)(param_1 + 0x12) = 0x1c;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dbaf0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080dbba4(param_1);
  }
  else if ((*(char *)(param_1 + 0x13) == '\0') && (*(char *)(iVar7 + 0xc) != '\x04')) {
    iVar6 = (int)*(short *)((*(byte *)(param_1 + 0x12) - 0xc & 0x3f) * 8 + DAT_080dbb50);
    iVar5 = (uint)bVar1 * 2 + -1;
    *(int *)(param_1 + 0x54) =
         *(int *)(iVar7 + 0x54) + *(int *)(param_1 + 0x78) + iVar5 * -0x400 + iVar6 * iVar5 * 4;
    iVar5 = iVar6 * -0x400;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x58) =
         *(int *)(iVar7 + 0x58) + *(int *)(param_1 + 0x7c) + (iVar5 >> 8) + 0x400;
    if (iVar6 < 1) {
      *(undefined1 *)(param_1 + 0x13) = 1;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar7;
    if (0x700 < iVar7) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar7 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar7;
    sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar7 + DAT_080dbb9c);
    if (sVar3 != 0) {
      piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dbba0);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
      FUN_080dbba4(param_1);
    }
  }
  return in_lr;
}


