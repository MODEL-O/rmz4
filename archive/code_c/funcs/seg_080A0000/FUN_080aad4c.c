// undefined FUN_080aad4c(void)
// entry 0x80aad4c


undefined4 FUN_080aad4c(int param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  uVar7 = *(byte *)(param_1 + 10) >> 4 & 1;
  bVar1 = false;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0x9000);
    *(uint *)(param_1 + 0x5c) = (uVar7 * 2 + -1) * -0x280;
    *(undefined4 *)(param_1 + 0x60) = DAT_080aadc8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,DAT_080aadcc);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x60) < 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x54);
    uVar6 = *(undefined4 *)(param_1 + 0x58);
    sVar3 = FUN_08007c7c(uVar5,uVar6);
    if (sVar3 == 0) {
LAB_080aadf4:
      iVar4 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar4;
      if (0x700 < iVar4) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      uVar5 = FUN_08008748(uVar5,uVar6);
      *(undefined4 *)(param_1 + 0x58) = uVar5;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x54);
    uVar6 = *(undefined4 *)(param_1 + 0x58);
    sVar3 = FUN_08007c7c(uVar5,uVar6);
    if (sVar3 == 0) goto LAB_080aadf4;
    iVar4 = FUN_08008534(uVar5,uVar6);
    *(int *)(param_1 + 0x58) = iVar4 + -1;
    bVar1 = true;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x5c) < 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x54);
    uVar6 = *(undefined4 *)(param_1 + 0x58);
    sVar3 = FUN_08007c7c(uVar5,uVar6);
    if (sVar3 == 0) goto LAB_080aaea4;
    uVar5 = FUN_08008988(uVar5,uVar6);
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    uVar7 = uVar7 + 1 & 1;
    if (uVar7 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x54);
    uVar6 = *(undefined4 *)(param_1 + 0x58);
    sVar3 = FUN_08007c7c(uVar5,uVar6);
    if (sVar3 == 0) goto LAB_080aaea4;
    uVar5 = FUN_08008868(uVar5,uVar6);
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    uVar7 = uVar7 + 1 & 1;
    if (uVar7 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  *(char *)(param_1 + 0x4c) = (char)uVar7;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar7 << 4);
  *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
LAB_080aaea4:
  if (bVar1) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


