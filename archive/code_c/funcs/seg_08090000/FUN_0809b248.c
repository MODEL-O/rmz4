// undefined FUN_0809b248(void)
// entry 0x809b248


undefined4 FUN_0809b248(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0xb7) = 1;
    FUN_08005784(param_1 + 0x74,*(undefined4 *)(DAT_0809b2ac + 4));
    FUN_0801cf00(param_1,DAT_0809b2b0);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x60) = 0x80;
    *(undefined4 *)(param_1 + 100) = 400;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  if (DAT_0809b2b8 < (uint)((*(int *)(param_1 + 0x68) - iVar2) + DAT_0809b2b4)) {
    iVar2 = DAT_0809b2bc;
    if (-1 < *(int *)(param_1 + 0x60)) {
      iVar2 = 0x1000;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + iVar2;
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
  }
  uVar4 = *(uint *)(param_1 + 100);
  if ((int)uVar4 < 0x3c) {
    if ((uVar4 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  if (uVar4 == 0) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809b318);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_0809b454(param_1);
  }
  return in_lr;
}


