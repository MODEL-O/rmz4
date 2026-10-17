// undefined FUN_08109480(void)
// entry 0x8109480


undefined4 FUN_08109480(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  ushort uVar8;
  int *piVar9;
  ushort *puVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  undefined4 in_lr;
  
  iVar13 = *(int *)(param_1 + 0x28);
  uVar8 = (ushort)*(byte *)(iVar13 + 0xf1);
  if (uVar8 < *(byte *)(iVar13 + 0xf2)) {
    uVar8 = (ushort)*(byte *)(iVar13 + 0xf2);
  }
  if (uVar8 < *(byte *)(iVar13 + 0xf3)) {
    uVar8 = (ushort)*(byte *)(iVar13 + 0xf3);
  }
  if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) !=
      (ushort)(uVar8 + 0x9400)) {
    FUN_0801cf00(param_1,uVar8 + 0x9400);
  }
  FUN_0801cff0(param_1);
  if (*DAT_0810951c != '\0') {
    return in_lr;
  }
  if (*(char *)(iVar13 + DAT_08109520) != '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08109524);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
    return in_lr;
  }
  if (((*(uint *)(iVar13 + 0x8c) & 0x200) != 0) || (*(short *)(iVar13 + 0xa4) == 0)) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08109558);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    return in_lr;
  }
  if ((*(byte *)(iVar13 + 10) & 0x10) == 0) {
    if (*(char *)(param_1 + 0xbe) == '\0') {
      iVar3 = *(int *)(param_1 + 0xb4);
      iVar12 = DAT_08109624;
      goto LAB_081095cc;
    }
    iVar12 = *(int *)(iVar13 + 0x54) - (*(int *)(param_1 + 0xb4) + DAT_081095c0);
    iVar3 = *(int *)(param_1 + 0xb8);
    iVar6 = 0x1300;
  }
  else if (*(char *)(param_1 + 0xbe) == '\0') {
    iVar3 = *(int *)(param_1 + 0xb4);
    iVar12 = 0xd00;
LAB_081095cc:
    iVar12 = *(int *)(iVar13 + 0x54) - (iVar3 + iVar12);
    iVar3 = *(int *)(param_1 + 0xb8);
    iVar6 = 0x2900;
  }
  else {
    iVar12 = *(int *)(iVar13 + 0x54) - (*(int *)(param_1 + 0xb4) + 0x1b00);
    iVar3 = *(int *)(param_1 + 0xb8);
    iVar6 = 0x1300;
  }
  piVar9 = (int *)(param_1 + 0xb4);
  piVar2 = (int *)(param_1 + 0xb8);
  iVar6 = *(int *)(iVar13 + 0x58) - (iVar3 + iVar6);
  uVar4 = FUN_0810d338(iVar12,iVar6);
  iVar3 = iVar12;
  if (iVar12 < 0) {
    iVar3 = -iVar12;
  }
  iVar5 = iVar6;
  if (iVar6 < 0) {
    iVar5 = -iVar6;
  }
  if (iVar5 < iVar3) {
    if (iVar12 < 0) {
      iVar12 = -iVar12;
    }
    if (iVar12 < 0x801) {
LAB_08109650:
      if (0x200 < *(int *)(param_1 + 0x5c)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x200;
      }
      iVar12 = *(int *)(param_1 + 0x5c) + -0x20;
    }
    else {
      if (DAT_08109628 < *(int *)(param_1 + 0x5c)) goto LAB_08109662;
      iVar12 = *(int *)(param_1 + 0x5c) + 0x40;
    }
LAB_08109660:
    *(int *)(param_1 + 0x5c) = iVar12;
  }
  else {
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (iVar6 < 0x801) goto LAB_08109650;
    if (*(int *)(param_1 + 0x5c) <= DAT_0810964c) {
      iVar12 = *(int *)(param_1 + 0x5c) + 0x40;
      goto LAB_08109660;
    }
  }
LAB_08109662:
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  iVar12 = DAT_081096ec;
  *piVar9 = *piVar9 + (*(int *)(param_1 + 0x5c) *
                       (int)*(short *)(((uVar4 & 0xff) + 0x40 & 0xff) * 2 + DAT_081096ec) >> 8);
  *piVar2 = *piVar2 + (*(int *)(param_1 + 0x5c) * (int)*(short *)((uVar4 & 0xff) * 2 + iVar12) >> 8)
  ;
  pbVar7 = (byte *)(param_1 + 0xbc);
  *pbVar7 = (char)(*pbVar7 + 1) + (char)((int)(*pbVar7 + 1) >> 5) * -0x20;
  uVar4 = (uint)*pbVar7;
  if (*(char *)(param_1 + 0xbe) == '\0') {
    *(int *)(param_1 + 0x54) = *piVar9 + *(short *)((uVar4 * 8 + 0x40 & 0xff) * 2 + iVar12) * 4;
    iVar12 = *piVar2 + *(short *)((uVar4 & 0x1f) * 0x10 + iVar12) * 4;
  }
  else {
    *(int *)(param_1 + 0x54) = *piVar9 + *(short *)((uVar4 * -8 + 0x3f & 0xff) * 2 + iVar12) * -4;
    iVar12 = *piVar2 + *(short *)((~(uVar4 * 8) & 0xff) * 2 + iVar12) * -4;
  }
  *(int *)(param_1 + 0x58) = iVar12;
  cVar1 = FUN_081092f0(iVar13);
  if (cVar1 != '\0') {
    if (*(char *)(iVar13 + 199) == '\x02') {
      if (*(char *)(iVar13 + 0xf1) != '\0') {
        puVar10 = (ushort *)(param_1 + 0xc0);
        uVar8 = *puVar10;
        *puVar10 = uVar8 + 1;
        uVar4 = DAT_081097c4;
        if (*(char *)(iVar13 + 0xf5) == '\x03') {
          uVar4 = 0x4b00000;
        }
        if (uVar4 < (uint)(ushort)(uVar8 + 1) * 0x10000) {
          FUN_081083b4(0,param_1 + 0x54,0);
          *puVar10 = 0;
        }
      }
      pbVar7 = (byte *)(iVar13 + 0xf2);
      if (2 < *pbVar7) {
        puVar10 = (ushort *)(param_1 + 0xc2);
        uVar8 = *puVar10;
        *puVar10 = uVar8 + 1;
        if (0x28 < (ushort)(uVar8 + 1)) {
          FUN_081098d4(iVar13,param_1,0);
          *puVar10 = 0;
        }
      }
      if ((3 < *pbVar7) &&
         (iVar12 = *(int *)(param_1 + 100) + 1, *(int *)(param_1 + 100) = iVar12, 0x3c < iVar12)) {
        FUN_081098d4(iVar13,param_1,2);
        *(undefined4 *)(param_1 + 100) = 0;
      }
      if (*pbVar7 < 5) goto LAB_08109872;
    }
    else {
      if ((*(char *)(iVar13 + 0xf1) == '\x01') || (*(char *)(iVar13 + 0xf1) == '\x06')) {
        puVar10 = (ushort *)(param_1 + 0xc0);
        uVar8 = *puVar10;
        *puVar10 = uVar8 + 1;
        uVar4 = DAT_081098a0;
        if (*(char *)(iVar13 + 0xf5) == '\x03') {
          uVar4 = 0x4b00000;
        }
        if (uVar4 < (uint)(ushort)(uVar8 + 1) * 0x10000) {
          FUN_081083b4(0,param_1 + 0x54,0);
          *puVar10 = 0;
        }
      }
      pcVar11 = (char *)(iVar13 + 0xf2);
      if (*pcVar11 == '\x03') {
        puVar10 = (ushort *)(param_1 + 0xc2);
        uVar8 = *puVar10;
        *puVar10 = uVar8 + 1;
        if (0x28 < (ushort)(uVar8 + 1)) {
          FUN_081098d4(iVar13,param_1,0);
          *puVar10 = 0;
        }
      }
      if ((*pcVar11 == '\x04') &&
         (iVar12 = *(int *)(param_1 + 100) + 1, *(int *)(param_1 + 100) = iVar12, 0x3c < iVar12)) {
        FUN_081098d4(iVar13,param_1,2);
        *(undefined4 *)(param_1 + 100) = 0;
      }
      if (*pcVar11 != '\x05') goto LAB_08109872;
    }
    iVar12 = *(int *)(param_1 + 0x68) + 1;
    *(int *)(param_1 + 0x68) = iVar12;
    if (0x3c < iVar12) {
      FUN_081098d4(iVar13,param_1,1);
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
  }
LAB_08109872:
  pcVar11 = (char *)(param_1 + 0xbd);
  cVar1 = *pcVar11;
  *pcVar11 = cVar1 + -1;
  if ((char)(cVar1 + -1) == -1) {
    FUN_080df8d0(param_1 + 0x54,2);
    *pcVar11 = ' ';
  }
  return in_lr;
}


