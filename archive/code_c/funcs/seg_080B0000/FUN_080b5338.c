// undefined FUN_080b5338(void)
// entry 0x80b5338


undefined4 FUN_080b5338(int param_1)

{
  int iVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0x60) < 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar3 != 0) {
      uVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar4;
    }
    FUN_0801cf00(param_1,DAT_080b53f8);
    *(undefined1 *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = DAT_080b5400;
  if ((*(byte *)(param_1 + 0x12) & 2) != 0) {
    iVar5 = (uint)(*(int *)(param_1 + 0x54) < *(int *)(*DAT_080b53fc + 0x54)) * 8;
    sVar3 = FUN_08007c7c(*(int *)(param_1 + 0x54) + *(int *)(iVar5 + DAT_080b5400) * 0x100,
                         *(int *)(param_1 + 0x58) + DAT_080b5404);
    if (sVar3 == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(iVar5 + iVar1 + 4) * 0x100;
    }
  }
  sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar3 == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  }
  cVar2 = FUN_080b56a8(param_1);
  if (cVar2 != '\0') {
    sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar3 == 0) {
      *(undefined1 *)(param_1 + 0xd) = 6;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


