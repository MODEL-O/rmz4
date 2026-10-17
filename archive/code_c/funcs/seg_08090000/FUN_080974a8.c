// undefined FUN_080974a8(void)
// entry 0x80974a8


undefined4 FUN_080974a8(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080974d0);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = DAT_08097550;
      uVar3 = DAT_08097554;
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
    FUN_08002b10(DAT_08097558);
  }
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar4 = FUN_08008534(iVar4,*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar4;
  if (((*(int *)(*DAT_0809755c + 0x54) - *(int *)(param_1 + 0x54)) + 0x2800U < 0x5001) &&
     ((*(int *)(*DAT_0809755c + 0x58) - iVar4) + 0x3000U < 0x6001)) {
    uVar1 = 2;
  }
  else {
    sVar2 = FUN_08007c7c(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                         *(int *)(param_1 + 0x58) + DAT_080975a4);
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
  }
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


