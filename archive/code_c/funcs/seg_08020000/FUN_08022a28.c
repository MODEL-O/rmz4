// undefined FUN_08022a28(void)
// entry 0x8022a28


longlong FUN_08022a28(int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 uVar9;
  int iVar10;
  char *pcVar11;
  uint in_lr;
  
  iVar8 = DAT_08022ca4;
  pbVar7 = DAT_08022c04;
  pbVar6 = DAT_08022bd4;
  iVar5 = DAT_08022bd0;
  iVar4 = DAT_08022a6c;
  iVar10 = *(int *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\0') {
    *(ushort *)(DAT_08022a6c + 8) = *(ushort *)(DAT_08022a6c + 8) | 1;
    *(byte *)(DAT_08022a70 + 4) = *(byte *)(DAT_08022a70 + 4) | 8;
    cVar1 = *(char *)(iVar4 + 2);
    if (cVar1 == '\0') {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08022a74 + 0x18) + 0x38));
      FUN_0801f63c(2);
      uVar9 = 2;
    }
    else {
      if (cVar1 == '\x02') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08022a90 + 0x18) + 8));
        *(char *)(param_1 + 0x17c) = '\x02';
        goto LAB_08022c98;
      }
      if (cVar1 == '\x03') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08022ab0 + 0x18) + 0x10));
        FUN_0801f63c(4);
        uVar9 = 4;
      }
      else if (cVar1 == '\x04') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08022acc + 0x18) + 0x18));
        uVar9 = 5;
      }
      else {
        if (cVar1 != '\x05') goto LAB_08022c98;
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08022ae8 + 0x18) + 0x20));
        uVar9 = 9;
      }
    }
  }
  else if (((cVar1 == '\x02') && (0xf0000 < *(int *)(iVar10 + 0x54))) &&
          (*(int *)(iVar10 + 0x58) <= DAT_08022b08)) {
    uVar9 = 3;
  }
  else {
    if (((*(char *)(param_1 + 0x17c) == '\x03') && (0xff000 < *(int *)(iVar10 + 0x54))) ||
       ((*(char *)(param_1 + 0x17c) == '\x04' && (0xff000 < *(int *)(iVar10 + 0x54))))) {
      FUN_080275f0(DAT_08022b5c,*(undefined4 *)(*(int *)(DAT_08022b60 + 0x18) + 0x14));
      FUN_0801f63c(4);
      *(byte *)(DAT_08022b64 + 4) = *(byte *)(DAT_08022b64 + 4) | 8;
      *(undefined1 *)(param_1 + 0x17c) = 5;
      goto LAB_08022c98;
    }
    if (*(char *)(param_1 + 0x17c) == '\x05') {
      FUN_0801f63c(3);
      uVar9 = 6;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\x06') && ((*(ushort *)(DAT_08022bd0 + 8) & 0x10) != 0)
            ) {
      *DAT_08022bd4 = *DAT_08022bd4 | 0x80;
      pbVar6[1] = pbVar6[1] | 2;
      FUN_080275f0(iVar5 + 0x10,*(undefined4 *)(*(int *)(DAT_08022bd8 + 0x18) + 0x1c));
      uVar2 = *(ushort *)(iVar5 + 8);
      uVar3 = (ushort)DAT_08022bdc;
      *(byte *)(iVar5 + 0x12) = *(byte *)(iVar5 + 0x12) & 0xfd;
      *(byte *)(DAT_08022be0 + 4) = *(byte *)(DAT_08022be0 + 4) & 0xf7;
      *(ushort *)(iVar5 + 8) = uVar3 & uVar2 | 1;
      uVar9 = 7;
    }
    else {
      pcVar11 = (char *)(param_1 + 0x17c);
      if (*pcVar11 == '\a') {
        *DAT_08022c04 = *DAT_08022c04 & 0x7f;
        pbVar7[1] = 0;
        *pcVar11 = '\b';
        goto LAB_08022c98;
      }
      if ((*pcVar11 == '\b') && (DAT_08022c2c < *(int *)(iVar10 + 0x54))) {
        FUN_0801f63c(5);
        *(byte *)(DAT_08022c30 + 4) = *(byte *)(DAT_08022c30 + 4) | 8;
        *pcVar11 = '\t';
        goto LAB_08022c98;
      }
      if (*(char *)(param_1 + 0x17c) == '\t') {
        if (DAT_08022c64 < *(int *)(iVar10 + 0x54)) {
          *(byte *)(DAT_08022c68 + 1) = *(byte *)(DAT_08022c68 + 1) | 2;
        }
        if (*(int *)(iVar10 + 0x54) <= DAT_08022c6c) goto LAB_08022c98;
        *(undefined1 *)(DAT_08022c68 + 1) = 0;
        uVar9 = 10;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\n') || (*(int *)(iVar10 + 0x54) <= DAT_08022ca0))
        goto LAB_08022c98;
        FUN_080275f0(DAT_08022ca4,*(undefined4 *)(*(int *)(DAT_08022ca8 + 0x18) + 0x3c));
        *(ushort *)(iVar8 + -8) = (ushort)DAT_08022cac & *(ushort *)(iVar8 + -8);
        uVar9 = 0xc;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x17c) = uVar9;
LAB_08022c98:
  return (ulonglong)in_lr << 0x20;
}


