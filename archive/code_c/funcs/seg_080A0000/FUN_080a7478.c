// undefined FUN_080a7478(void)
// entry 0x80a7478


undefined4 FUN_080a7478(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x54)) {
      *(undefined4 *)(param_1 + 0x5c) = DAT_080a7498;
      uVar2 = DAT_080a749c;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x1c0;
      uVar2 = 0x1000;
    }
    *(undefined4 *)(param_1 + 100) = uVar2;
    uVar2 = DAT_080a74d4;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (*(int *)(param_1 + 0x5c) < 0) goto LAB_080a74cc;
      FUN_0801cf00(param_1,DAT_080a752c);
    }
    else {
      if (*(int *)(param_1 + 0x5c) < 1) {
        uVar2 = DAT_080a74c0;
      }
LAB_080a74cc:
      FUN_0801cf00(param_1,uVar2);
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == DAT_080a7530) {
    if (((*(char *)(param_1 + 0x71) == '\x02') || (*(char *)(param_1 + 0x71) == '\x06')) &&
       (*(char *)(param_1 + 0x72) < '\x02')) {
      FUN_08002b10(DAT_080a7534);
    }
  }
  else if (((*(char *)(param_1 + 0x71) == '\x03') || (*(char *)(param_1 + 0x71) == '\a')) &&
          (*(char *)(param_1 + 0x72) < '\x02')) {
    FUN_08002b10(DAT_080a75b0);
  }
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  iVar3 = FUN_08008534(iVar3,*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar3;
  if (((*(char *)(param_1 + 0x11) == '\0') &&
      (bVar1 = *(byte *)(param_1 + 0x12), *(byte *)(param_1 + 0x12) = bVar1 + 1, 0x20 < bVar1)) &&
     (((*(int *)(*DAT_080a75b4 + 0x54) - *(int *)(param_1 + 0x54)) + 0x3000U < 0x6001 &&
      ((*(int *)(*DAT_080a75b4 + 0x58) - iVar3) + 0x3000U < 0x6001)))) {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar3 = *(int *)(param_1 + 0xb4);
    if (iVar3 <= *(int *)(param_1 + 0x54)) goto LAB_080a75da;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xb4);
    if (*(int *)(param_1 + 0x54) <= iVar3) goto LAB_080a75da;
  }
  *(int *)(param_1 + 0x54) = iVar3;
LAB_080a75da:
  if (*(int *)(param_1 + 0x54) == *(int *)(param_1 + 0xb4)) {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


