// undefined FUN_0806c778(void)
// entry 0x806c778


undefined4 FUN_0806c778(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806c7ac);
    FUN_08002b10(0xcc);
    *(undefined4 *)(param_1 + 0x5c) = 0x600;
    *(undefined4 *)(param_1 + 100) = 0x20;
    if (*(short *)(param_1 + 0xa4) < 0x10) {
      uVar2 = 0x480;
    }
    else if (*(short *)(param_1 + 0xa4) < 0x20) {
      uVar2 = 0x440;
    }
    else {
      uVar2 = 0x400;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0x80;
    }
    else {
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar1;
    FUN_08005784(param_1 + 0x74,DAT_0806c814);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\0' < *(char *)(param_1 + 0x71)) {
      FUN_08005784(param_1 + 0x74,DAT_0806c818);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    if ((*(char *)(param_1 + 0xf) == '\x01') && ('\x03' < *(char *)(param_1 + 0x71))) {
      FUN_08002b10(0xd2);
      FUN_080ca4c4(param_1,0,1);
      FUN_080ca4c4(param_1,0,2);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    iVar3 = DAT_0806c8b8;
    iVar4 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         (iVar4 * *(short *)((*(byte *)(param_1 + 0x12) + 0x40 & 0xff) * 2 + DAT_0806c8b8) >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (iVar4 * *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + iVar3) >> 8);
    iVar3 = *(int *)(param_1 + 0x60);
    if (iVar3 < iVar4) {
      iVar3 = iVar4 - *(int *)(param_1 + 100);
    }
    *(int *)(param_1 + 0x5c) = iVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(param_1 + 200) + 0x1800;
      if (*(int *)(param_1 + 0x54) < iVar3) {
        *(int *)(param_1 + 0x54) = iVar3;
        *(undefined1 *)(param_1 + 0xd) = 0x1a;
        *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0xcc) + DAT_0806c8bc;
      if (iVar3 < *(int *)(param_1 + 0x54)) {
        *(int *)(param_1 + 0x54) = iVar3;
        *(undefined1 *)(param_1 + 0xd) = 0x1a;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
    }
  }
  return in_lr;
}


