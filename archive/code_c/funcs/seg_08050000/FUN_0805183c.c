// undefined FUN_0805183c(void)
// entry 0x805183c


undefined4 FUN_0805183c(int param_1)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08051864);
    if (*(short *)(param_1 + 0xa4) < 0x11) {
      uVar3 = 0x340;
    }
    else {
      uVar3 = 0x300;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(bool *)(param_1 + 0xf) = *(int *)(param_1 + 0x54) < *(int *)(*DAT_080518c0 + 0x54);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar1 = false;
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar5 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    iVar4 = *(int *)(*DAT_080518e0 + 0x54);
    if (iVar5 < iVar4) goto LAB_080518da;
    sVar2 = FUN_08007c7c(iVar5 + DAT_0805190c,*(int *)(param_1 + 0x58) + DAT_08051910);
    if (sVar2 != 0) {
      bVar1 = true;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    iVar4 = *(int *)(*DAT_080518c0 + 0x54);
    if (iVar4 < iVar5) {
LAB_080518da:
      *(int *)(param_1 + 0x54) = iVar4;
      goto LAB_080518fe;
    }
    sVar2 = FUN_08007c7c(iVar5 + 0x2300,*(int *)(param_1 + 0x58) + DAT_080518c4);
    if (sVar2 != 0) goto LAB_080518fe;
  }
  if (!bVar1) {
    return in_lr;
  }
LAB_080518fe:
  *(undefined1 *)(param_1 + 0xd) = 0xb;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


