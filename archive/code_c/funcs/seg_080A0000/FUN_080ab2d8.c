// undefined FUN_080ab2d8(void)
// entry 0x80ab2d8


undefined4 FUN_080ab2d8(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080ab34c);
    *(uint *)(param_1 + 0x5c) = ((bVar1 >> 4 & 1) * 2 + -1) * 0x200;
    *(undefined4 *)(param_1 + 0x60) = DAT_080ab350;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,DAT_080ab354);
  if (*(short *)(param_1 + 0xb4) == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    uVar4 = *(undefined4 *)(param_1 + 0x54);
    uVar5 = *(undefined4 *)(param_1 + 0x58);
    sVar2 = FUN_08007c7c(uVar4,uVar5);
    if (sVar2 == 0) {
      iVar3 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      uVar4 = FUN_08008748(uVar4,uVar5);
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x5c) < 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x54);
      uVar5 = *(undefined4 *)(param_1 + 0x58);
      sVar2 = FUN_08007c7c(uVar4,uVar5);
      if (sVar2 != 0) {
        uVar4 = FUN_08008988(uVar4,uVar5);
        *(undefined4 *)(param_1 + 0x54) = uVar4;
      }
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x54);
      uVar5 = *(undefined4 *)(param_1 + 0x58);
      sVar2 = FUN_08007c7c(uVar4,uVar5);
      if (sVar2 != 0) {
        uVar4 = FUN_08008868(uVar4,uVar5);
        *(undefined4 *)(param_1 + 0x54) = uVar4;
      }
    }
  }
  if (-1 < *(int *)(param_1 + 0x60)) {
    *(undefined1 *)(param_1 + 0xd) = 7;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


