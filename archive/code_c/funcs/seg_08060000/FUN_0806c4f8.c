// undefined FUN_0806c4f8(void)
// entry 0x806c4f8


undefined4 FUN_0806c4f8(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806c52c);
    FUN_08002b10(0xcb);
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
      uVar1 = 0x8d;
    }
    else {
      uVar1 = 0xf3;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar1;
    *(undefined1 *)(param_1 + 0x13) = 6;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0xf);
  if (cVar2 == '\0') {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0806c5a8);
    FUN_0801cff0(param_1);
    FUN_08005784(param_1 + 0x74,DAT_0806c5ac);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    return in_lr;
  }
  if (cVar2 == '\x01') {
    bVar5 = false;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xc4)) {
        bVar5 = true;
      }
LAB_0806c5e0:
      if (!bVar5) goto LAB_0806c62c;
    }
    else if (*(int *)(param_1 + 0x54) <= *(int *)(param_1 + 0xc4)) goto LAB_0806c5e0;
    FUN_0801cf00(param_1,DAT_0806c5f8);
    FUN_08005784(param_1 + 0x74,DAT_0806c5fc);
  }
  else {
    if ((cVar2 != '\x02') || (*(char *)(param_1 + 0x71) < '\x03')) goto LAB_0806c62c;
    FUN_08002b10(0xd2);
    FUN_080ca4c4(param_1,0,0);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0806c62c:
  iVar4 = DAT_0806c694;
  iVar6 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       (iVar6 * *(short *)((*(byte *)(param_1 + 0x12) + 0x40 & 0xff) * 2 + DAT_0806c694) >> 8);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       (iVar6 * *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + iVar4) >> 8);
  iVar4 = *(int *)(param_1 + 0x60);
  if (iVar4 < iVar6) {
    iVar4 = iVar6 - *(int *)(param_1 + 100);
  }
  *(int *)(param_1 + 0x5c) = iVar4;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 200) + 0x1800;
    if (*(int *)(param_1 + 0x54) < iVar4) {
      *(int *)(param_1 + 0x54) = iVar4;
      *(undefined1 *)(param_1 + 0xd) = 0x18;
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0xcc) + DAT_0806c698;
    if (iVar4 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = iVar4;
      *(undefined1 *)(param_1 + 0xd) = 0x18;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


