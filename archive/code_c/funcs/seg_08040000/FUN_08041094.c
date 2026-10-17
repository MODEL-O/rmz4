// undefined FUN_08041094(void)
// entry 0x8041094


undefined4 FUN_08041094(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    cVar2 = FUN_08041318(iVar7,param_1 + 0x54);
    if (cVar2 == '\0') {
      if (*(int *)(iVar7 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x2c0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = DAT_080411bc;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined1 *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      *(undefined4 *)(param_1 + 0x60) = DAT_080411c0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      FUN_08005760(param_1 + 0x74,DAT_080411c4,param_1 + 0x54,8);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = DAT_080411c8;
      *(undefined1 *)(param_1 + 0xbe) = 1;
      bVar1 = *(byte *)(param_1 + 10);
      *(byte *)(param_1 + 10) = bVar1 | 1;
      if ((2 < *(byte *)(iVar7 + 0xc0)) || (2 < *(byte *)(iVar7 + 0xc1))) {
        pcVar5 = (char *)(iVar7 + 0xf8);
        cVar2 = *pcVar5;
        if (cVar2 != '\x02') {
          pcVar5 = (char *)(iVar7 + 0xf9);
          cVar2 = '\x02';
        }
        *pcVar5 = cVar2;
        if (*(byte *)(iVar7 + 0xc0) < 3) {
          *(undefined1 *)(iVar7 + 0xc1) = 2;
        }
        else {
          *(undefined1 *)(iVar7 + 0xc0) = 2;
        }
        *(undefined1 *)(iVar7 + 0xfa) = 2;
        *(undefined1 *)(iVar7 + 0xc3) = 0;
        FUN_08002b10(0x46);
        *(undefined1 *)(param_1 + 0xd) = 1;
        return in_lr;
      }
      *(byte *)(param_1 + 10) = bVar1 & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804121c);
      *(undefined4 *)(param_1 + 0xc) = 3;
      uVar4 = *(undefined4 *)(*piVar3 + 0xc);
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08041100);
      *(undefined4 *)(param_1 + 0xc) = 3;
      uVar4 = *(undefined4 *)(*piVar3 + 0xc);
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar6 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
    if (iVar6 <= DAT_080412a4) {
      *(int *)(param_1 + 0x60) = iVar6 + 0x40;
    }
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + -0x18;
    cVar2 = FUN_0803a99c(param_1,3);
    if (*(char *)(iVar7 + 0xfa) != '\x02') {
      cVar2 = '\x01';
    }
    if ((cVar2 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
      return in_lr;
    }
    if (cVar2 != -1) {
      FUN_080d0c88(1,param_1 + 0x54);
      FUN_08002b10(0x27);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080412a8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar4 = *(undefined4 *)(*piVar3 + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return in_lr;
}


