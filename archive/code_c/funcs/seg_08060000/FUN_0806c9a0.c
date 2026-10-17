// undefined FUN_0806c9a0(void)
// entry 0x806c9a0


undefined4 FUN_0806c9a0(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806c9d4);
    FUN_08002b10(0xcd);
    *(undefined4 *)(param_1 + 0x5c) = 0x600;
    *(undefined4 *)(param_1 + 100) = 0x20;
    if (*(short *)(param_1 + 0xa4) < 0x10) {
      uVar3 = 0x480;
    }
    else if (*(short *)(param_1 + 0xa4) < 0x20) {
      uVar3 = 0x440;
    }
    else {
      uVar3 = 0x400;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0x73;
    }
    else {
      uVar2 = 0xd;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar2;
    FUN_08005784(param_1 + 0x74,DAT_0806ca3c);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\0' < *(char *)(param_1 + 0x71)) {
      FUN_08005784(param_1 + 0x74,DAT_0806ca40);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    if ((*(char *)(param_1 + 0xf) == '\x01') && ('\x03' < *(char *)(param_1 + 0x71))) {
      FUN_08002b10(0xd2);
      FUN_080ca4c4(param_1,0,3);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    iVar1 = DAT_0806cae0;
    iVar5 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         (iVar5 * *(short *)((*(byte *)(param_1 + 0x12) + 0x40 & 0xff) * 2 + DAT_0806cae0) >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (iVar5 * *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + iVar1) >> 8);
    iVar4 = *(int *)(param_1 + 0x60);
    if (iVar4 < iVar5) {
      iVar4 = iVar5 - *(int *)(param_1 + 100);
    }
    *(int *)(param_1 + 0x5c) = iVar4;
    if (*(int *)(param_1 + 0xb8) < *(int *)(param_1 + 0x58)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      *(int *)(param_1 + 0x5c) =
           (int)*(short *)((*(byte *)(param_1 + 0x12) + 0x40 & 0xff) * 2 + iVar1) *
           *(int *)(param_1 + 0x5c) >> 8;
      *(undefined1 *)(param_1 + 0xd) = 0x1c;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


