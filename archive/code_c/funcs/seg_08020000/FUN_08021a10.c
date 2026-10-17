// undefined FUN_08021a10(void)
// entry 0x8021a10


longlong FUN_08021a10(int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  uint in_lr;
  
  iVar9 = DAT_08021a60;
  iVar10 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x17c) == '\0') {
    *(ushort *)(DAT_08021a60 + 8) = *(ushort *)(DAT_08021a60 + 8) | 1;
    *(byte *)(DAT_08021a64 + 4) = *(byte *)(DAT_08021a64 + 4) | 8;
    cVar1 = *(char *)(iVar9 + 2);
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar9 + 0x284) = DAT_08021a68;
      FUN_080275f0(iVar9 + 0x10,*(undefined4 *)(*(int *)(DAT_08021a6c + 0x10) + 0x38));
      FUN_0801f63c(3);
      uVar7 = 3;
    }
    else if (cVar1 == '\x03') {
      FUN_080275f0(iVar9 + 0x10,*(undefined4 *)(*(int *)(DAT_08021a8c + 0x10) + 0x10));
      FUN_0801f63c(4);
      uVar7 = 4;
    }
    else if (cVar1 == '\x04') {
      FUN_080275f0(iVar9 + 0x10,*(undefined4 *)(*(int *)(DAT_08021ab0 + 0x10) + 0x18));
      *(ushort *)(iVar9 + 8) = *(ushort *)(iVar9 + 8) | 2;
      uVar7 = 5;
    }
    else {
      if (cVar1 != '\x05') goto LAB_08021d2e;
      FUN_080275f0(iVar9 + 0x10,*(undefined4 *)(*(int *)(DAT_08021acc + 0x10) + 0x20));
      uVar7 = 9;
    }
  }
  else if ((*(char *)(param_1 + 0x17c) == '\x03') &&
          (iVar8 = FUN_08129050(*(int *)(iVar10 + 0x54) + DAT_08021b1c,0x3c000),
          iVar9 = DAT_08021b20, 0x1e000 < iVar8 + 0xf000)) {
    FUN_080275f0(DAT_08021b20,*(undefined4 *)(*(int *)(DAT_08021b24 + 0x10) + 0x14));
    FUN_0801f63c(4);
    *(byte *)(DAT_08021b28 + 4) = *(byte *)(DAT_08021b28 + 4) | 8;
    *(ushort *)(iVar9 + -8) = *(ushort *)(iVar9 + -8) | 2;
    uVar7 = 5;
  }
  else if ((*(char *)(param_1 + 0x17c) == '\x04') &&
          (iVar8 = FUN_08129050(*(int *)(iVar10 + 0x54) + DAT_08021b80,0x3c000),
          iVar9 = DAT_08021b84, 0x1e000 < iVar8 + 0xf000)) {
    FUN_080275f0(DAT_08021b84,*(undefined4 *)(*(int *)(DAT_08021b88 + 0x10) + 0x14));
    FUN_0801f63c(4);
    *(byte *)(DAT_08021b8c + 4) = *(byte *)(DAT_08021b8c + 4) | 8;
    *(ushort *)(iVar9 + -8) = *(ushort *)(iVar9 + -8) | 2;
    uVar7 = 5;
  }
  else {
    pbVar6 = DAT_08021c38;
    pbVar5 = DAT_08021c04;
    iVar9 = DAT_08021c00;
    pcVar11 = (char *)(param_1 + 0x17c);
    if (*pcVar11 == '\x05') {
      FUN_0801f63c(3);
      *pcVar11 = '\x06';
      goto LAB_08021d2e;
    }
    if ((*pcVar11 == '\x06') && ((*(ushort *)(DAT_08021c00 + 8) & 0x10) != 0)) {
      *DAT_08021c04 = *DAT_08021c04 | 0x80;
      pbVar5[1] = pbVar5[1] | 2;
      FUN_080275f0(iVar9 + 0x10,*(undefined4 *)(*(int *)(DAT_08021c08 + 0x10) + 0x1c));
      uVar2 = *(ushort *)(iVar9 + 8);
      uVar4 = (ushort)DAT_08021c0c;
      uVar3 = (ushort)DAT_08021c10;
      *(byte *)(iVar9 + 0x12) = *(byte *)(iVar9 + 0x12) & 0xfd;
      *(byte *)(DAT_08021c14 + 4) = *(byte *)(DAT_08021c14 + 4) & 0xf7;
      *(ushort *)(iVar9 + 8) = uVar4 & uVar2 & uVar3 | 1;
      *pcVar11 = '\a';
      goto LAB_08021d2e;
    }
    if (*(char *)(param_1 + 0x17c) == '\a') {
      *DAT_08021c38 = *DAT_08021c38 & 0x7f;
      pbVar6[1] = 0;
      uVar7 = 8;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\b') &&
            (iVar9 = FUN_08129050(*(int *)(iVar10 + 0x54) + DAT_08021c70,0x3c000),
            DAT_08021c74 < iVar9 + 0xf000)) {
      FUN_0801f63c(5);
      *(byte *)(DAT_08021c78 + 4) = *(byte *)(DAT_08021c78 + 4) | 8;
      uVar7 = 9;
    }
    else {
      if ((*(char *)(param_1 + 0x17c) == '\t') && (*(int *)(iVar10 + 0x58) <= DAT_08021cd8)) {
        iVar9 = FUN_08129050(*(int *)(iVar10 + 0x54) + DAT_08021cdc,0x3c000);
        if (DAT_08021ce0 < iVar9 + 0xf000) {
          *(byte *)(DAT_08021ce4 + 1) = *(byte *)(DAT_08021ce4 + 1) | 2;
        }
        iVar9 = FUN_08129050(*(int *)(iVar10 + 0x54) + DAT_08021cdc,0x3c000);
        if (DAT_08021ce8 < iVar9 + 0xf000) {
          *(undefined1 *)(DAT_08021ce4 + 1) = 0;
          *(char *)(param_1 + 0x17c) = '\n';
        }
        goto LAB_08021d2e;
      }
      if ((*(char *)(param_1 + 0x17c) != '\n') ||
         (iVar10 = FUN_08129050(*(int *)(iVar10 + 0x54) + DAT_08021d38,0x3c000),
         iVar9 = DAT_08021d40, iVar10 + 0xf000 <= DAT_08021d3c)) goto LAB_08021d2e;
      FUN_080275f0(DAT_08021d40,*(undefined4 *)(*(int *)(DAT_08021d44 + 0x10) + 0x3c));
      *(ushort *)(iVar9 + -8) = (ushort)DAT_08021d48 & *(ushort *)(iVar9 + -8);
      uVar7 = 0xc;
    }
  }
  *(undefined1 *)(param_1 + 0x17c) = uVar7;
LAB_08021d2e:
  return (ulonglong)in_lr << 0x20;
}


