// undefined FUN_0806b7e8(void)
// entry 0x806b7e8


undefined4 FUN_0806b7e8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806b814);
    FUN_08002b10(199);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = DAT_0806b868;
      uVar2 = 0xffffffe8;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x400;
      uVar2 = 0x18;
    }
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x54);
    *(undefined1 *)(param_1 + 0x12) = 0x19;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\x01' < *(char *)(param_1 + 0x71)) {
      FUN_08002b10(0xd2);
      FUN_08005784(param_1 + 0x74,DAT_0806b86c);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = -iVar3;
    }
    if (0x200 < iVar4) {
      *(int *)(param_1 + 0x5c) = iVar3 - *(int *)(param_1 + 100);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined1 *)(param_1 + 0xd) = 9;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


