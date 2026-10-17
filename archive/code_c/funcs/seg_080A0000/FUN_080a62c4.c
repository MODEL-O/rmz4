// undefined FUN_080a62c4(void)
// entry 0x80a62c4


undefined4 FUN_080a62c4(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x13) == '\0') {
      FUN_08005784(param_1 + 0x74,DAT_080a6310);
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x32;
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x13) * 2 + DAT_080a6314));
    cVar1 = FUN_080a66b4(param_1);
    if (cVar1 == '\x02') {
      *(undefined1 *)(param_1 + 0x12) = 0x1e;
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    FUN_080a67d8(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = FUN_080a669c(param_1);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    if ((*(char *)(param_1 + 0x10) == '\0') &&
       (iVar2 + DAT_080a63b0 < *(int *)(DAT_080a63a8 + DAT_080a63ac))) {
      iVar2 = *(int *)(param_1 + 0x60) * -0x100;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar2 >> 8;
    }
    piVar3 = (int *)(param_1 + 0xc0);
    if (*piVar3 <= DAT_080a63b4) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *piVar3 = *piVar3 + 0x20;
    }
  }
  else {
    if (*(char *)(param_1 + 0x13) == '\x02') {
      *(undefined1 *)(param_1 + 0xd) = 4;
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 3;
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


