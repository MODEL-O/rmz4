// undefined FUN_080aaec0(void)
// entry 0x80aaec0


undefined4 FUN_080aaec0(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar3 = uVar6 * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar3 * -0x280;
    *(int *)(param_1 + 100) = iVar3 * 0x10;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,DAT_080aaf44);
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x58) + 1;
  sVar2 = FUN_08007c7c(uVar4,iVar3);
  if (sVar2 == 0) {
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    uVar4 = *(undefined4 *)(param_1 + 0x54);
    iVar3 = iVar3 + 1;
    sVar2 = FUN_08007c7c(uVar4,iVar3);
    if (sVar2 != 0) {
      iVar3 = FUN_08008534(uVar4,iVar3);
      *(int *)(param_1 + 0x58) = iVar3 + -1;
      goto LAB_080aaf68;
    }
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  else {
    iVar3 = FUN_08008534(uVar4,iVar3);
    *(int *)(param_1 + 0x58) = iVar3 + -1;
LAB_080aaf68:
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x5c) < 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x54);
    uVar5 = *(undefined4 *)(param_1 + 0x58);
    sVar2 = FUN_08007c7c(uVar4,uVar5);
    if (sVar2 == 0) goto LAB_080ab006;
    uVar4 = FUN_08008988(uVar4,uVar5);
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    uVar6 = uVar6 + 1 & 1;
    if (uVar6 == 0) {
LAB_080aafd6:
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x54);
    uVar5 = *(undefined4 *)(param_1 + 0x58);
    sVar2 = FUN_08007c7c(uVar4,uVar5);
    if (sVar2 == 0) goto LAB_080ab006;
    uVar4 = FUN_08008868(uVar4,uVar5);
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    uVar6 = uVar6 + 1 & 1;
    if (uVar6 == 0) goto LAB_080aafd6;
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar6;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
  *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
LAB_080ab006:
  iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar3;
  if ((int)(iVar3 * (uVar6 * -2 + 1)) < 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if ((*(int *)(param_1 + 0x5c) == 0) && (*(int *)(param_1 + 0x60) == 0)) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


