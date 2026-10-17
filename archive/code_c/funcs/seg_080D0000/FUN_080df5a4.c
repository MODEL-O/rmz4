// undefined FUN_080df5a4(void)
// entry 0x80df5a4


undefined4 FUN_080df5a4(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\0') goto LAB_080df652;
  FUN_0801cf00(param_1,DAT_080df5cc);
  pcVar6 = (char *)(param_1 + 0x74);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*pcVar6 != '\x01') goto LAB_080df634;
LAB_080df5d4:
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x14;
    iVar7 = DAT_080df630;
    iVar5 = DAT_080df600;
    if (*pcVar6 == '\0') {
      iVar5 = (int)*(short *)(DAT_080df630 + 0x15c);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xf;
      }
      *(int *)(param_1 + 100) = iVar5 >> 4;
      sVar2 = *(short *)(iVar7 + 0xdc);
    }
    else {
      iVar7 = (int)*(short *)(DAT_080df600 + 0xa4);
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xf;
      }
      *(int *)(param_1 + 100) = iVar7 >> 4;
      sVar2 = *(short *)(iVar5 + 0x24);
    }
    iVar5 = (int)sVar2;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    *(int *)(param_1 + 0x68) = iVar5 >> 4;
  }
  else {
    if (*pcVar6 == '\0') goto LAB_080df5d4;
LAB_080df634:
    *(undefined1 *)(param_1 + 0x12) = 0;
    uVar3 = DAT_080df670;
    if (*pcVar6 != '\0') {
      uVar3 = 0x100;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = DAT_080df670;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080df652:
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar7;
    iVar5 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    *(char *)(param_1 + 0x12) = cVar1 + -1;
    if (cVar1 == '\x01') {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_080df6cc);
  if (sVar2 != 0) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080df6d0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  }
  return in_lr;
}


