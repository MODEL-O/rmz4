// undefined FUN_08093460(void)
// entry 0x8093460


undefined4 FUN_08093460(int param_1)

{
  byte bVar1;
  bool bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  uVar9 = bVar1 & 1;
  bVar2 = false;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080935a0);
    FUN_0801cf00(param_1,DAT_080935a4);
    iVar5 = uVar9 * 2 + -1;
    *(int *)(param_1 + 100) = iVar5;
    *(int *)(param_1 + 0x5c) = iVar5 * 0x200;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08094a38(param_1);
  iVar5 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x54);
  if ((0x8000 < (*(int *)(param_1 + 0xb4) - iVar5) + 0x4000U) &&
     (uVar9 == *(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x54))) {
    bVar2 = true;
  }
  iVar6 = *(int *)(param_1 + 100) * 0x700 + iVar5;
  uVar9 = *(int *)(param_1 + 0x58) + DAT_080935a8;
  sVar3 = FUN_08007c7c(iVar6,uVar9);
  if ((sVar3 == 0) || (uVar7 = FUN_08007c7c(iVar6,uVar9), (uVar7 & 0xf) == 0xf)) {
    iVar10 = (uVar9 & DAT_080935ac) + DAT_080935b0;
    uVar4 = FUN_08007020(iVar6,iVar10);
    if (0xb < (ushort)((uVar4 & 0xf) - 2)) {
      iVar8 = DAT_080935b4 + iVar6;
      sVar3 = FUN_08007c7c(iVar8,iVar10);
      if ((sVar3 != 0) && (uVar9 = FUN_08007c7c(iVar8,iVar10), (uVar9 & 0xf) != 0xf)) {
        iVar6 = iVar6 + DAT_080935b8;
        sVar3 = FUN_08007c7c(iVar6,iVar10);
        if ((sVar3 != 0) && (uVar9 = FUN_08007c7c(iVar6,iVar10), (uVar9 & 0xf) != 0xf))
        goto LAB_0809358a;
      }
      bVar2 = true;
    }
  }
LAB_0809358a:
  if ((bVar1 & 1) == 0) {
    iVar6 = FUN_0809482c(param_1,iVar5);
    if (iVar6 != 0) goto LAB_080935d2;
  }
  else {
    iVar6 = FUN_08094934(param_1,iVar5);
    if (iVar6 != 0) {
      bVar2 = true;
    }
  }
  if (!bVar2) {
    *(int *)(param_1 + 0x54) = iVar5;
    FUN_08094a38(param_1);
    return in_lr;
  }
LAB_080935d2:
  *(undefined1 *)(param_1 + 0xd) = 2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


