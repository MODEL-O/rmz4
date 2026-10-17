// undefined FUN_0802476c(void)
// entry 0x802476c


longlong FUN_0802476c(int param_1)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  char cVar7;
  undefined1 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint in_lr;
  
  iVar6 = DAT_08024a64;
  pbVar5 = DAT_08024998;
  pbVar4 = DAT_08024964;
  iVar10 = DAT_080247b8;
  iVar11 = *(int *)(param_1 + 0x20);
  pcVar9 = (char *)(param_1 + 0x17c);
  if (*pcVar9 == '\0') {
    *(ushort *)(DAT_080247b8 + 8) = *(ushort *)(DAT_080247b8 + 8) | 1;
    *(byte *)(DAT_080247bc + 4) = *(byte *)(DAT_080247bc + 4) | 8;
    cVar7 = *(char *)(iVar10 + 2);
    if (cVar7 == '\0') {
      FUN_080275f0(iVar10 + 0x10,*(undefined4 *)(*(int *)(DAT_080247c0 + 0x28) + 0x38));
      FUN_0801f63c(2);
      *(undefined2 *)(iVar10 + 10) = 0;
      cVar7 = '\x02';
    }
    else {
      if (cVar7 == '\x02') {
        FUN_080275f0(iVar10 + 0x10,*(undefined4 *)(*(int *)(DAT_080247dc + 0x28) + 8));
        *pcVar9 = '\x02';
        goto LAB_08024a54;
      }
      if (cVar7 == '\x03') {
        FUN_080275f0(iVar10 + 0x10,*(undefined4 *)(*(int *)(DAT_080247fc + 0x28) + 0x10));
        FUN_0801f63c(4);
        cVar7 = '\x04';
      }
      else {
        if (cVar7 != '\x04') {
          if (cVar7 != '\x05') goto LAB_08024a54;
          if (*(short *)(iVar10 + 10) == 0) {
            FUN_080275f0(iVar10 + 0x10,*(undefined4 *)(*(int *)(DAT_0802484c + 0x28) + 0x40));
          }
          else {
            FUN_080275f0(iVar10 + 0x10,*(undefined4 *)(*(int *)(DAT_08024838 + 0x28) + 0x20));
          }
LAB_080249de:
          *(undefined1 *)(param_1 + 0x17c) = 9;
          goto LAB_08024a54;
        }
        FUN_080275f0(iVar10 + 0x10,*(undefined4 *)(*(int *)(DAT_08024818 + 0x28) + 0x18));
        cVar7 = '\x05';
      }
    }
  }
  else {
    if ((*pcVar9 != '\x02') || (*(int *)(iVar11 + 0x54) < 0x12c001)) {
      if ((*(char *)(param_1 + 0x17c) == '\x03') && (DAT_0802489c < *(int *)(iVar11 + 0x54))) {
        FUN_080275f0(DAT_080248a0,*(undefined4 *)(*(int *)(DAT_080248a4 + 0x28) + 0x14));
        FUN_0801f63c(4);
        *(byte *)(DAT_080248a8 + 4) = *(byte *)(DAT_080248a8 + 4) | 8;
        uVar8 = 5;
      }
      else if ((*(char *)(param_1 + 0x17c) == '\x04') && (DAT_080248e0 < *(int *)(iVar11 + 0x54))) {
        FUN_080275f0(DAT_080248e4,*(undefined4 *)(*(int *)(DAT_080248e8 + 0x28) + 0x14));
        FUN_0801f63c(4);
        *(byte *)(DAT_080248ec + 4) = *(byte *)(DAT_080248ec + 4) | 8;
        uVar8 = 5;
      }
      else if (*(char *)(param_1 + 0x17c) == '\x05') {
        FUN_0801f63c(3);
        uVar8 = 6;
      }
      else if ((*(char *)(param_1 + 0x17c) == '\x06') &&
              (*(char *)(DAT_0802495c + DAT_08024960) == '(')) {
        *DAT_08024964 = *DAT_08024964 | 0x80;
        pbVar4[1] = pbVar4[1] | 2;
        iVar10 = DAT_08024968;
        FUN_080275f0(DAT_08024968,*(undefined4 *)(*(int *)(DAT_0802496c + 0x28) + 0x1c));
        uVar2 = *(ushort *)(iVar10 + -8);
        uVar3 = (ushort)DAT_08024970;
        *(byte *)(iVar10 + 2) = *(byte *)(iVar10 + 2) & 0xfd;
        *(byte *)(DAT_08024974 + 4) = *(byte *)(DAT_08024974 + 4) & 0xf7;
        *(ushort *)(iVar10 + -8) = uVar3 & uVar2 | 1;
        uVar8 = 7;
      }
      else {
        cVar7 = *(char *)(param_1 + 0x17c);
        if (cVar7 == '\a') {
          *DAT_08024998 = *DAT_08024998 & 0x7f;
          pbVar5[1] = 0;
          *(char *)(param_1 + 0x17c) = '\b';
          goto LAB_08024a54;
        }
        if ((cVar7 == '\b') && (DAT_080249c8 < *(int *)(iVar11 + 0x54))) {
          FUN_0801f63c(5);
          *(byte *)(DAT_080249cc + 4) = *(byte *)(DAT_080249cc + 4) | 8;
          bVar1 = *(int *)(iVar11 + 0x58) <= DAT_080249d0;
          iVar10 = DAT_080249ec;
          if (bVar1) {
            iVar10 = DAT_080249d4;
          }
          *(ushort *)(iVar10 + 10) = (ushort)bVar1;
          goto LAB_080249de;
        }
        if (*(char *)(param_1 + 0x17c) == '\t') {
          if (DAT_08024a20 < *(int *)(iVar11 + 0x54)) {
            *(byte *)(DAT_08024a24 + 1) = *(byte *)(DAT_08024a24 + 1) | 2;
          }
          if (*(int *)(iVar11 + 0x54) <= DAT_08024a28) goto LAB_08024a54;
          *(undefined1 *)(DAT_08024a24 + 1) = 0;
          uVar8 = 10;
        }
        else {
          if ((*(char *)(param_1 + 0x17c) != '\n') || (*(int *)(iVar11 + 0x54) <= DAT_08024a60))
          goto LAB_08024a54;
          FUN_080275f0(DAT_08024a64,*(undefined4 *)(*(int *)(DAT_08024a68 + 0x28) + 0x3c));
          *(ushort *)(iVar6 + -8) = (ushort)DAT_08024a6c & *(ushort *)(iVar6 + -8);
          uVar8 = 0xc;
        }
      }
      *(undefined1 *)(param_1 + 0x17c) = uVar8;
      goto LAB_08024a54;
    }
    cVar7 = '\x03';
  }
  *pcVar9 = cVar7;
LAB_08024a54:
  return (ulonglong)in_lr << 0x20;
}


