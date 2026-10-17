// undefined FUN_08020ebc(void)
// entry 0x8020ebc


longlong FUN_08020ebc(int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  undefined1 uVar10;
  int iVar11;
  char *pcVar12;
  uint in_lr;
  
  iVar9 = DAT_080211a4;
  pbVar8 = DAT_0802111c;
  pbVar7 = DAT_080210ec;
  iVar5 = DAT_080210e8;
  pbVar6 = DAT_08020fc8;
  iVar4 = DAT_08020f1c;
  iVar11 = *(int *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\0') {
    *(ushort *)(DAT_08020f1c + 8) = *(ushort *)(DAT_08020f1c + 8) | 1;
    iVar5 = DAT_08020f20;
    *(byte *)(DAT_08020f20 + 4) = *(byte *)(DAT_08020f20 + 4) | 8;
    *(undefined4 *)(iVar4 + 0x188) = 0;
    cVar1 = *(char *)(iVar4 + 2);
    if (cVar1 == '\0') {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08020f24 + 0xc) + 0x38));
      FUN_0801f63c(2);
      *(byte *)(iVar5 + 9) = *(byte *)(iVar5 + 9) & 0xdf;
      *(byte *)(DAT_08020f28 + 5) = *(byte *)(DAT_08020f28 + 5) & 0xdf;
      uVar10 = 2;
    }
    else {
      if (cVar1 == '\x02') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08020f44 + 0xc) + 8));
        *(char *)(param_1 + 0x17c) = '\x02';
        goto LAB_08021198;
      }
      if (cVar1 == '\x03') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08020f64 + 0xc) + 0x10));
        FUN_0801f63c(4);
        uVar10 = 4;
      }
      else if (cVar1 == '\x04') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08020f80 + 0xc) + 0x18));
        uVar10 = 5;
      }
      else {
        if (cVar1 != '\x05') goto LAB_08021198;
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08020f9c + 0xc) + 0x20));
        uVar10 = 9;
      }
    }
  }
  else if ((cVar1 == '\x02') && (*(int *)(iVar11 + 0x54) <= DAT_08020fc4)) {
    *DAT_08020fc8 = *DAT_08020fc8 | 0x80;
    pbVar6[1] = pbVar6[1] | 2;
    uVar10 = 3;
  }
  else if ((*(char *)(param_1 + 0x17c) == '\x03') && (*(int *)(iVar11 + 0x54) <= DAT_08021008)) {
    *(undefined1 *)(DAT_0802100c + 1) = 0;
    FUN_080275f0(DAT_08021010,*(undefined4 *)(*(int *)(DAT_08021014 + 0xc) + 0x14));
    FUN_0801f63c(4);
    *(byte *)(DAT_08021018 + 4) = *(byte *)(DAT_08021018 + 4) | 8;
    uVar10 = 5;
  }
  else if ((*(char *)(param_1 + 0x17c) == '\x04') && (*(int *)(iVar11 + 0x54) <= DAT_08021058)) {
    *(undefined1 *)(DAT_0802105c + 1) = 0;
    FUN_080275f0(DAT_08021060,*(undefined4 *)(*(int *)(DAT_08021064 + 0xc) + 0x14));
    FUN_0801f63c(4);
    *(byte *)(DAT_08021068 + 4) = *(byte *)(DAT_08021068 + 4) | 8;
    uVar10 = 5;
  }
  else {
    pcVar12 = (char *)(param_1 + 0x17c);
    if (*pcVar12 == '\x05') {
      *DAT_08021090 = *DAT_08021090 & 0x7f;
      FUN_0801f63c(3);
      *pcVar12 = '\x06';
      goto LAB_08021198;
    }
    if ((*pcVar12 == '\x06') && ((*(ushort *)(DAT_080210e8 + 8) & 0x10) != 0)) {
      *DAT_080210ec = *DAT_080210ec | 0x80;
      pbVar7[1] = pbVar7[1] | 2;
      FUN_080275f0(iVar5 + 0x10,*(undefined4 *)(*(int *)(DAT_080210f0 + 0xc) + 0x1c));
      uVar2 = *(ushort *)(iVar5 + 8);
      uVar3 = (ushort)DAT_080210f4;
      *(byte *)(iVar5 + 0x12) = *(byte *)(iVar5 + 0x12) & 0xfd;
      *(byte *)(DAT_080210f8 + 4) = *(byte *)(DAT_080210f8 + 4) & 0xf7;
      *(ushort *)(iVar5 + 8) = uVar3 & uVar2 | 1;
      *pcVar12 = '\a';
      goto LAB_08021198;
    }
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\a') {
      *DAT_0802111c = *DAT_0802111c & 0x7f;
      pbVar8[1] = 0;
      uVar10 = 8;
    }
    else if (cVar1 == '\b') {
      FUN_0801f63c(5);
      *(byte *)(DAT_08021138 + 4) = *(byte *)(DAT_08021138 + 4) | 8;
      uVar10 = 9;
    }
    else if (cVar1 == '\t') {
      if (DAT_08021164 < *(int *)(iVar11 + 0x54)) {
        *(byte *)(DAT_08021168 + 1) = *(byte *)(DAT_08021168 + 1) | 2;
      }
      if (*(int *)(iVar11 + 0x54) <= DAT_0802116c) goto LAB_08021198;
      *(undefined1 *)(DAT_08021168 + 1) = 0;
      uVar10 = 10;
    }
    else {
      if ((cVar1 != '\n') || (*(int *)(iVar11 + 0x54) <= DAT_080211a0)) goto LAB_08021198;
      FUN_080275f0(DAT_080211a4,*(undefined4 *)(*(int *)(DAT_080211a8 + 0xc) + 0x3c));
      *(ushort *)(iVar9 + -8) = (ushort)DAT_080211ac & *(ushort *)(iVar9 + -8);
      uVar10 = 0xc;
    }
  }
  *(undefined1 *)(param_1 + 0x17c) = uVar10;
LAB_08021198:
  return (ulonglong)in_lr << 0x20;
}


