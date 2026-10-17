// undefined FUN_08046c90(void)
// entry 0x8046c90


undefined4 FUN_08046c90(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    cVar1 = FUN_08041318(iVar5,param_1 + 0x54);
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08046d08);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(int *)(iVar5 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x2c0;
        goto LAB_08046d36;
      }
      *(undefined4 *)(param_1 + 0x5c) = DAT_08046d28;
LAB_08046d5a:
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      if (*(int *)(param_1 + 0x54) <= *(int *)(iVar5 + 0x54)) goto LAB_08046d5a;
LAB_08046d36:
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    *(undefined4 *)(param_1 + 0x60) = DAT_08046de8;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_08046dec,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_08046df0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0803aa4c(iVar5);
    *(undefined1 *)(param_1 + 0xbd) = 1;
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      FUN_0801cf00(param_1,DAT_08046eb8);
      FUN_0801cff0(param_1);
      FUN_08002b10(0xa9);
      *(undefined1 *)(param_1 + 0xbd) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if ((byte)(*(char *)(param_1 + 0x71) - 1U) < 2) {
      FUN_08005784(param_1 + 0x74,DAT_08046ebc);
    }
    else {
      FUN_08005784(param_1 + 0x74,DAT_08046ef0);
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08046ef4);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      FUN_08046f08(param_1);
      return in_lr;
    }
LAB_08046ef8:
    FUN_0801cff0(param_1);
    return in_lr;
  }
  pcVar4 = (char *)(param_1 + 0x24);
  *pcVar4 = *pcVar4 + '\a';
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  sVar2 = FUN_08046f90(iVar5,*(undefined4 *)(param_1 + 0x58));
  if (sVar2 == 0) {
    iVar5 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar5;
    if (0x700 < iVar5) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar2 = FUN_08046f90(*(undefined4 *)(param_1 + 0x54));
    if (sVar2 == 0) {
      if ((*(uint *)(param_1 + 0x8c) & DAT_08046e70) == 0) goto LAB_08046ef8;
    }
    else {
      if (*(int *)(param_1 + 0x60) < 1) {
        iVar5 = FUN_08007f8c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
        *pcVar4 = -0x80;
        goto LAB_08046e66;
      }
      iVar5 = FUN_08007db4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    }
    *pcVar4 = '\0';
  }
  else {
    if (*(int *)(param_1 + 0x5c) < 1) {
      iVar5 = FUN_0800834c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    else {
      iVar5 = FUN_0800816c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    *pcVar4 = '@';
  }
LAB_08046e66:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}


