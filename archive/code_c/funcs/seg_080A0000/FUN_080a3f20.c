// undefined FUN_080a3f20(void)
// entry 0x80a3f20


undefined4 FUN_080a3f20(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    if (*(int *)(param_1 + 0x60) < 1) {
      sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar4 + DAT_080a3fa0);
      if (sVar2 == 0) goto LAB_080a4004;
      iVar4 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = iVar4 + 0xd00;
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
      uVar1 = 1;
    }
    else {
      sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar4 + 0xd00);
      if (sVar2 == 0) goto LAB_080a4004;
      iVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = iVar4 + DAT_080a3f70;
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
      uVar1 = 1;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar4;
    if (*(int *)(param_1 + 0x5c) < 1) {
      sVar2 = FUN_08007c7c(iVar4 + DAT_080a4018,*(undefined4 *)(param_1 + 0x58));
      if (sVar2 == 0) goto LAB_080a4004;
      iVar3 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar4 = 0xd00;
    }
    else {
      sVar2 = FUN_08007c7c(iVar4 + 0xd00,*(undefined4 *)(param_1 + 0x58));
      if (sVar2 == 0) goto LAB_080a4004;
      iVar3 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar4 = DAT_080a3fd0;
    }
    *(int *)(param_1 + 0x54) = iVar3 + iVar4;
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
LAB_080a4004:
  if (3 < *(byte *)(param_1 + 0x13)) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


