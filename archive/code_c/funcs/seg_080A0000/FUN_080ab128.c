// undefined FUN_080ab128(void)
// entry 0x80ab128


undefined4 FUN_080ab128(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080ab1c0);
    *(uint *)(param_1 + 0x5c) = (uVar4 * 2 + -1) * 0x140;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,DAT_080ab1c4);
  iVar3 = *(int *)(param_1 + 0x54);
  uVar6 = *(undefined4 *)(param_1 + 0x54);
  iVar5 = *(int *)(param_1 + 0x58) + 1;
  sVar2 = FUN_08007c7c(uVar6,iVar5);
  if (sVar2 == 0) {
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar5;
    uVar6 = *(undefined4 *)(param_1 + 0x54);
    iVar5 = iVar5 + 1;
    sVar2 = FUN_08007c7c(uVar6,iVar5);
    if (sVar2 == 0) {
      iVar5 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar5;
      if (0x700 < iVar5) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      iVar5 = FUN_08008534(uVar6,iVar5);
      *(int *)(param_1 + 0x58) = iVar5 + -1;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else {
    iVar5 = FUN_08008534(uVar6,iVar5);
    *(int *)(param_1 + 0x58) = iVar5 + -1;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x5c) < 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x54);
    uVar7 = *(undefined4 *)(param_1 + 0x58);
    sVar2 = FUN_08007c7c(uVar6,uVar7);
    if (sVar2 == 0) goto LAB_080ab28e;
    uVar6 = FUN_08008988(uVar6,uVar7);
    *(undefined4 *)(param_1 + 0x54) = uVar6;
    uVar4 = uVar4 + 1 & 1;
    if (uVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x54);
    uVar7 = *(undefined4 *)(param_1 + 0x58);
    sVar2 = FUN_08007c7c(uVar6,uVar7);
    if (sVar2 == 0) goto LAB_080ab28e;
    uVar6 = FUN_08008868(uVar6,uVar7);
    *(undefined4 *)(param_1 + 0x54) = uVar6;
    uVar4 = uVar4 + 1 & 1;
    if (uVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
LAB_080ab28e:
  iVar5 = *(int *)(param_1 + 0x54) - iVar3;
  if (iVar5 < 0) {
    iVar5 = iVar3 - *(int *)(param_1 + 0x54);
  }
  iVar5 = *(int *)(param_1 + 100) + iVar5;
  *(int *)(param_1 + 100) = iVar5;
  if (*(short *)(param_1 + 0xb4) == 0) {
    *(undefined1 *)(param_1 + 0xd) = 6;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else if (DAT_080ab2d4 < iVar5) {
    FUN_080ab610(param_1);
  }
  return in_lr;
}


