// undefined FUN_08049f40(void)
// entry 0x8049f40


undefined4 FUN_08049f40(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    cVar1 = FUN_08041318(iVar6,param_1 + 0x54);
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08049fb8);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(int *)(iVar6 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x400;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = DAT_0804a018;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined1 *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      uVar5 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      if (*(int *)(iVar6 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
        uVar5 = DAT_0804a110;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined1 *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        uVar5 = DAT_0804a110;
      }
    }
    *(undefined4 *)(param_1 + 0x60) = uVar5;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_0804a114,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_0804a118;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0803aa4c(iVar6);
    *(undefined1 *)(param_1 + 0xbd) = 1;
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar6 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar6;
      if (0x700 < iVar6) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (((cVar1 != -1) && ((*(uint *)(param_1 + 0x8c) & DAT_0804a11c) == 0)) &&
       (sVar2 = FUN_0804a264(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
       sVar2 == 0)) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0804a120);
    FUN_0801cff0(param_1);
    *(undefined1 *)(param_1 + 0x12) = 0x3c;
    FUN_08002b10(0x6c);
    goto LAB_0804a196;
  }
  if (*(char *)(param_1 + 0xe) != '\x01') {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804a1d8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_0804a1dc(param_1);
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 == '<') {
    uVar5 = 1;
    uVar4 = DAT_0804a13c;
LAB_0804a152:
    FUN_08005794(param_1 + 0x74,uVar4,0xffffffff,0xffffffff,0xffffffff,uVar5);
  }
  else {
    if (cVar1 == '(') {
      uVar5 = 2;
      uVar4 = DAT_0804a15c;
      goto LAB_0804a152;
    }
    if (cVar1 == '\x14') {
      FUN_08005794(param_1 + 0x74,DAT_0804a1a0,0xffffffff,0xffffffff,0xffffffff,3);
    }
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 != -1) {
    return in_lr;
  }
  FUN_0801cf00(param_1,DAT_0804a1a4);
  FUN_0801cff0(param_1);
LAB_0804a196:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}


