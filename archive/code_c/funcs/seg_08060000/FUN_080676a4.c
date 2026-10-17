// undefined FUN_080676a4(void)
// entry 0x80676a4


undefined4 FUN_080676a4(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080676e4);
    uVar3 = FUN_080c8830(param_1,1,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = DAT_08067728;
      *(undefined4 *)(param_1 + 100) = 0x10;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x400;
      *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar5;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar4 = DAT_08067754;
    if (DAT_08067754 < iVar5) goto LAB_08067736;
  }
  else if (iVar5 <= DAT_0806772c) {
    iVar4 = DAT_0806772c + 1;
LAB_08067736:
    *(int *)(param_1 + 0x5c) = iVar4;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar5 = *(int *)(param_1 + 0xbc) + 0x5e00;
    if (iVar5 <= *(int *)(param_1 + 0x54)) goto LAB_08067770;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xc0) + DAT_08067758;
    if (*(int *)(param_1 + 0x54) <= iVar5) goto LAB_08067770;
  }
  *(int *)(param_1 + 0x54) = iVar5;
LAB_08067770:
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\x02' < *(char *)(param_1 + 0x71)) {
      FUN_08005784(param_1 + 0x74,DAT_08067798);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if ((*(int *)(param_1 + 0x2c) != 0) && (*(char *)(*(int *)(param_1 + 0x2c) + 0xd) != '\0')) {
    *(undefined1 *)(param_1 + 0x25) = 0xf;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if (0x18 < bVar1) {
    if ((*(int *)(param_1 + 0x2c) == 0) || (*(char *)(*(int *)(param_1 + 0x2c) + 0xd) == '\0')) {
      uVar2 = 0xf;
    }
    else {
      uVar2 = 0x10;
    }
    *(undefined1 *)(param_1 + 0xd) = uVar2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


