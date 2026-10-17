// undefined FUN_08043d90(void)
// entry 0x8043d90


undefined8 FUN_08043d90(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    uVar6 = 0;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto LAB_08044002;
    cVar2 = FUN_08041318(iVar7,param_1 + 0x54);
    if (cVar2 == '\0') {
      if (*(char *)(param_1 + 0x10) == '\0') {
        if (*(int *)(param_1 + 0x54) <= *(int *)(iVar7 + 0x54)) {
          *(undefined4 *)(param_1 + 0x5c) = DAT_08043e24;
          goto LAB_08043e56;
        }
        *(undefined4 *)(param_1 + 0x5c) = 0x280;
LAB_08043e32:
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        if (*(int *)(iVar7 + 0x54) < *(int *)(param_1 + 0x54)) goto LAB_08043e32;
LAB_08043e56:
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined1 *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      *(undefined4 *)(param_1 + 0x60) = DAT_08043ee8;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      FUN_08005760(param_1 + 0x74,DAT_08043eec,param_1 + 0x54,8);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = DAT_08043ef0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      FUN_0803aa4c(iVar7);
      *(undefined1 *)(param_1 + 0xd) = 1;
      goto LAB_08043ea6;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08043e04);
    uVar6 = 3;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar5 = *(undefined4 *)(*piVar4 + 0xc);
  }
  else {
LAB_08043ea6:
    iVar7 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar7;
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) == 0) {
      sVar3 = FUN_0804409c(iVar7 + DAT_08043fa4,*(undefined4 *)(param_1 + 0x58));
      if (sVar3 != 0) {
        iVar7 = FUN_0800834c(*(int *)(param_1 + 0x54) + DAT_08043fa4,*(undefined4 *)(param_1 + 0x58)
                            );
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
        *(uint *)(param_1 + 0x5c) = bVar1 & 0x10;
      }
    }
    else {
      sVar3 = FUN_0804409c(iVar7 + 0x400,*(undefined4 *)(param_1 + 0x58));
      if (sVar3 != 0) {
        iVar7 = FUN_0800816c(*(int *)(param_1 + 0x54) + 0x400,*(undefined4 *)(param_1 + 0x58));
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
    }
    iVar7 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar7;
    if (0x700 < iVar7) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar7 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar7;
    sVar3 = FUN_0804409c(*(undefined4 *)(param_1 + 0x54),iVar7 + 0x400);
    if (sVar3 != 0) {
      iVar7 = FUN_08007db4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    sVar3 = FUN_0804409c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_08043fa4);
    if (sVar3 != 0) {
      iVar7 = FUN_08007f8c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_08043fa4);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    if (*(byte *)(param_1 + 0x13) < 0x18) {
      if ((*(byte *)(param_1 + 0x13) & 3) < 2) {
        FUN_0801cf00(param_1,DAT_0804400c);
        FUN_0801cff0(param_1);
      }
      else {
        FUN_0801cf00(param_1,DAT_08043fa8);
        FUN_0801cff0(param_1);
      }
    }
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if ((cVar2 != -1) && (uVar6 = DAT_08044010, (*(uint *)(param_1 + 0x8c) & DAT_08044010) == 0))
    goto LAB_08044002;
    FUN_080d0c88(1,param_1 + 0x54);
    FUN_08002b10(0x35);
    FUN_08005784(param_1 + 0x74,DAT_08044014);
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08044018);
    uVar6 = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar5 = *(undefined4 *)(*piVar4 + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar5;
LAB_08044002:
  return CONCAT44(uVar6,in_lr);
}


