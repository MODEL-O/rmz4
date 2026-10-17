// undefined FUN_08097854(void)
// entry 0x8097854


undefined4 FUN_08097854(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x54)) {
      *(undefined4 *)(param_1 + 0x5c) = DAT_08097874;
      uVar2 = DAT_08097878;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x1c0;
      uVar2 = 0x1000;
    }
    *(undefined4 *)(param_1 + 100) = uVar2;
    uVar2 = DAT_080978b0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (*(int *)(param_1 + 0x5c) < 0) goto LAB_080978a8;
      FUN_0801cf00(param_1,DAT_08097908);
    }
    else {
      if (*(int *)(param_1 + 0x5c) < 1) {
        uVar2 = DAT_0809789c;
      }
LAB_080978a8:
      FUN_0801cf00(param_1,uVar2);
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == DAT_0809790c) {
    if (((*(char *)(param_1 + 0x71) == '\x02') || (*(char *)(param_1 + 0x71) == '\x06')) &&
       (*(char *)(param_1 + 0x72) < '\x02')) {
      FUN_08002b10(DAT_08097910);
    }
  }
  else if (((*(char *)(param_1 + 0x71) == '\x03') || (*(char *)(param_1 + 0x71) == '\a')) &&
          (*(char *)(param_1 + 0x72) < '\x02')) {
    FUN_08002b10(DAT_08097994);
  }
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  iVar3 = FUN_08008534(iVar3,*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar3;
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (((0x20 < bVar1) &&
      ((*(int *)(*DAT_08097998 + 0x54) - *(int *)(param_1 + 0x54)) + 0x3000U < 0x6001)) &&
     ((*(int *)(*DAT_08097998 + 0x58) - iVar3) + 0x3000U < 0x6001)) goto LAB_080979b2;
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar3 = *(int *)(param_1 + 0xb4);
    if (*(int *)(param_1 + 0x54) < iVar3) goto LAB_080979a8;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xb4);
    if (iVar3 < *(int *)(param_1 + 0x54)) {
LAB_080979a8:
      *(int *)(param_1 + 0x54) = iVar3;
    }
  }
  if (*(int *)(param_1 + 0x54) != *(int *)(param_1 + 0xb4)) {
    return in_lr;
  }
LAB_080979b2:
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


