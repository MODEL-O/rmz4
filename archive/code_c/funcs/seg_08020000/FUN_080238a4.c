// undefined FUN_080238a4(void)
// entry 0x80238a4


void FUN_080238a4(int param_1)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  char cVar8;
  undefined1 uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  
  iVar7 = DAT_08023bcc;
  pbVar6 = DAT_08023b2c;
  pbVar5 = DAT_08023afc;
  iVar4 = DAT_08023af8;
  iVar11 = DAT_08023904;
  iVar12 = *(int *)(param_1 + 0x20);
  pcVar10 = (char *)(param_1 + 0x17c);
  if (*pcVar10 != '\0') {
    if ((*pcVar10 == '\x02') && (0x69000 < *(int *)(iVar12 + 0x54))) {
      bVar1 = *(int *)(iVar12 + 0x58) <= DAT_080239d4;
      iVar11 = DAT_080239f0;
      if (bVar1) {
        iVar11 = DAT_080239d8;
      }
      *(ushort *)(iVar11 + 10) = (ushort)bVar1;
      *(undefined1 *)(param_1 + 0x17c) = 3;
      return;
    }
    if (((*(char *)(param_1 + 0x17c) == '\x03') && (0xc3000 < *(int *)(iVar12 + 0x54))) &&
       (0x6f000 < *(int *)(iVar12 + 0x58))) {
      FUN_080275f0(DAT_08023a34,*(undefined4 *)(*(int *)(DAT_08023a38 + 0x20) + 0x14));
      FUN_0801f63c(4);
      *(byte *)(DAT_08023a3c + 4) = *(byte *)(DAT_08023a3c + 4) | 8;
      uVar9 = 5;
    }
    else if (((*(char *)(param_1 + 0x17c) == '\x04') && (0xc3000 < *(int *)(iVar12 + 0x54))) &&
            (0x6f000 < *(int *)(iVar12 + 0x58))) {
      FUN_080275f0(DAT_08023a80,*(undefined4 *)(*(int *)(DAT_08023a84 + 0x20) + 0x14));
      FUN_0801f63c(4);
      *(byte *)(DAT_08023a88 + 4) = *(byte *)(DAT_08023a88 + 4) | 8;
      uVar9 = 5;
    }
    else {
      pcVar10 = (char *)(param_1 + 0x17c);
      if (*pcVar10 == '\x05') {
        FUN_0801f63c(3);
        *pcVar10 = '\x06';
        return;
      }
      if ((*pcVar10 == '\x06') && ((*(ushort *)(DAT_08023af8 + 8) & 0x10) != 0)) {
        *DAT_08023afc = *DAT_08023afc | 0x80;
        pbVar5[1] = pbVar5[1] | 2;
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08023b00 + 0x20) + 0x1c));
        uVar2 = *(ushort *)(iVar4 + 8);
        uVar3 = (ushort)DAT_08023b04;
        *(byte *)(iVar4 + 0x12) = *(byte *)(iVar4 + 0x12) & 0xfd;
        *(byte *)(DAT_08023b08 + 4) = *(byte *)(DAT_08023b08 + 4) & 0xf7;
        *(ushort *)(iVar4 + 8) = uVar3 & uVar2 | 1;
        *pcVar10 = '\a';
        return;
      }
      if (*(char *)(param_1 + 0x17c) == '\a') {
        *DAT_08023b2c = *DAT_08023b2c & 0x7f;
        pbVar6[1] = 0;
        uVar9 = 8;
      }
      else if ((*(char *)(param_1 + 0x17c) == '\b') && (DAT_08023b50 < *(int *)(iVar12 + 0x54))) {
        FUN_0801f63c(5);
        *(byte *)(DAT_08023b54 + 4) = *(byte *)(DAT_08023b54 + 4) | 8;
        uVar9 = 9;
      }
      else if (*(char *)(param_1 + 0x17c) == '\t') {
        if (DAT_08023b88 < *(int *)(iVar12 + 0x54)) {
          *(byte *)(DAT_08023b8c + 1) = *(byte *)(DAT_08023b8c + 1) | 2;
        }
        if (*(int *)(iVar12 + 0x54) <= DAT_08023b90) {
          return;
        }
        *(undefined1 *)(DAT_08023b8c + 1) = 0;
        uVar9 = 10;
      }
      else {
        if (*(char *)(param_1 + 0x17c) != '\n') {
          return;
        }
        if (*(int *)(iVar12 + 0x54) <= DAT_08023bc8) {
          return;
        }
        FUN_080275f0(DAT_08023bcc,*(undefined4 *)(*(int *)(DAT_08023bd0 + 0x20) + 0x3c));
        *(ushort *)(iVar7 + -8) = (ushort)DAT_08023bd4 & *(ushort *)(iVar7 + -8);
        uVar9 = 0xc;
      }
    }
    *(undefined1 *)(param_1 + 0x17c) = uVar9;
    return;
  }
  *(ushort *)(DAT_08023904 + 8) = *(ushort *)(DAT_08023904 + 8) | 1;
  *(byte *)(DAT_08023908 + 4) = *(byte *)(DAT_08023908 + 4) | 8;
  iVar4 = DAT_0802390c;
  *(undefined1 *)(DAT_0802390c + DAT_08023910) = 0;
  *(undefined1 *)(iVar4 + DAT_08023914) = 0xc;
  cVar8 = *(char *)(iVar11 + 2);
  if (cVar8 == '\0') {
    FUN_080275f0(iVar11 + 0x10,*(undefined4 *)(*(int *)(DAT_08023918 + 0x20) + 0x38));
    FUN_0801f63c(2);
    *(undefined2 *)(iVar11 + 10) = 0;
    cVar8 = '\x02';
  }
  else {
    if (cVar8 == '\x02') {
      FUN_080275f0(iVar11 + 0x10,*(undefined4 *)(*(int *)(DAT_08023934 + 0x20) + 8));
      *pcVar10 = '\x02';
      return;
    }
    if (cVar8 == '\x03') {
      if (*(short *)(iVar11 + 10) == 0) {
        FUN_080275f0(iVar11 + 0x10,*(undefined4 *)(*(int *)(DAT_08023974 + 0x20) + 0x40));
      }
      else {
        FUN_080275f0(iVar11 + 0x10,*(undefined4 *)(*(int *)(DAT_08023954 + 0x20) + 0x10));
      }
      *(undefined1 *)(param_1 + 0x17c) = 4;
      return;
    }
    if (cVar8 == '\x04') {
      FUN_080275f0(iVar11 + 0x10,*(undefined4 *)(*(int *)(DAT_08023994 + 0x20) + 0x18));
      *pcVar10 = '\x05';
      return;
    }
    if (cVar8 != '\x05') {
      return;
    }
    FUN_080275f0(iVar11 + 0x10,*(undefined4 *)(*(int *)(DAT_080239b4 + 0x20) + 0x20));
    cVar8 = '\t';
  }
  *pcVar10 = cVar8;
  return;
}


