// undefined FUN_080a7084(void)
// entry 0x80a7084


undefined4 FUN_080a7084(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080a70ac);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = DAT_080a7134;
      uVar3 = DAT_080a7138;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x1c0;
      uVar3 = 0x1000;
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (((*(char *)(param_1 + 0x71) == '\x02') || (*(char *)(param_1 + 0x71) == '\x06')) &&
     (*(char *)(param_1 + 0x72) < '\x02')) {
    FUN_08002b10(DAT_080a713c);
  }
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar4 = FUN_08008534(iVar4,*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar4;
  if (*(char *)(param_1 + 0x11) == '\0') {
    if (((*(int *)(*DAT_080a7140 + 0x54) - *(int *)(param_1 + 0x54)) + 0x2800U < 0x5001) &&
       ((*(int *)(*DAT_080a7140 + 0x58) - iVar4) + 0x3000U < 0x6001)) {
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
    if (iVar4 < 0) {
      iVar4 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb4);
    }
    if (0x4600 < iVar4) {
      uVar1 = 2;
      goto LAB_080a71a6;
    }
  }
  sVar2 = FUN_08007c7c(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                       *(int *)(param_1 + 0x58) + DAT_080a71b0);
  if (sVar2 != 0) {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  sVar2 = FUN_08007c7c(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                       *(int *)(param_1 + 0x58) + 0x1000);
  if (sVar2 != 0) {
    return in_lr;
  }
  uVar1 = 4;
LAB_080a71a6:
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


