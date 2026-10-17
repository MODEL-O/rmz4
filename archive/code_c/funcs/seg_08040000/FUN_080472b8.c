// undefined FUN_080472b8(void)
// entry 0x80472b8


undefined8 FUN_080472b8(int param_1)

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
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    uVar6 = 0;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto LAB_08047524;
    cVar2 = FUN_08041318(iVar7,param_1 + 0x54);
    if (cVar2 == '\0') {
      if (*(char *)(param_1 + 0x11) == '\0') {
        if (*(int *)(param_1 + 0x54) <= *(int *)(iVar7 + 0x54)) {
          *(undefined4 *)(param_1 + 0x5c) = DAT_08047348;
          goto LAB_0804737a;
        }
        *(undefined4 *)(param_1 + 0x5c) = 0x180;
LAB_08047356:
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        if (*(int *)(iVar7 + 0x54) < *(int *)(param_1 + 0x54)) goto LAB_08047356;
LAB_0804737a:
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined1 *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      *(undefined4 *)(param_1 + 0x60) = DAT_08047414;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      FUN_08005760(param_1 + 0x74,DAT_08047418,param_1 + 0x54,8);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = DAT_0804741c;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      FUN_0803aa4c(iVar7);
      *(undefined1 *)(param_1 + 0xbd) = 1;
      *(undefined1 *)(param_1 + 0xd) = 1;
      goto LAB_080473d0;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08047328);
    uVar6 = 3;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar5 = *(undefined4 *)(*piVar4 + 0xc);
  }
  else {
LAB_080473d0:
    iVar7 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar7;
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) == 0) {
      sVar3 = FUN_08047688(iVar7 + DAT_08047530,*(undefined4 *)(param_1 + 0x58));
      if (sVar3 != 0) {
        iVar7 = FUN_0800834c(*(int *)(param_1 + 0x54) + DAT_08047530,*(undefined4 *)(param_1 + 0x58)
                            );
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
        *(uint *)(param_1 + 0x5c) = bVar1 & 0x10;
      }
    }
    else {
      sVar3 = FUN_08047688(iVar7 + 0x400,*(undefined4 *)(param_1 + 0x58));
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
    sVar3 = FUN_08047688(*(undefined4 *)(param_1 + 0x54),iVar7 + 0x400);
    if (sVar3 != 0) {
      iVar7 = FUN_08007db4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    sVar3 = FUN_08047688(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_08047530);
    if (sVar3 != 0) {
      iVar7 = FUN_08007f8c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_08047530);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    if (((*(int *)(param_1 + 0x5c) == 0) && (*(int *)(param_1 + 0x60) == 0)) &&
       (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == DAT_08047534))
    {
      FUN_0801cf00(param_1,DAT_08047534 + 1);
    }
    if ((*(byte *)(param_1 + 0x13) < 0x19) && (*(byte *)(param_1 + 0x13) == 0x18)) {
      FUN_0801cf00(param_1,DAT_08047538);
    }
    FUN_0801cff0(param_1);
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if ((cVar2 != -1) && (uVar6 = DAT_0804753c, (*(uint *)(param_1 + 0x8c) & DAT_0804753c) == 0))
    goto LAB_08047524;
    FUN_08002b10(0x6f);
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08047540);
    uVar6 = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar5 = *(undefined4 *)(*piVar4 + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar5;
LAB_08047524:
  return CONCAT44(uVar6,in_lr);
}


