// undefined FUN_08024034(void)
// entry 0x8024034


longlong FUN_08024034(int param_1)

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
  
  iVar8 = DAT_080242a4;
  pbVar7 = DAT_08024204;
  pbVar6 = DAT_080241d4;
  iVar5 = DAT_080241d0;
  iVar4 = DAT_08024078;
  iVar10 = *(int *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\0') {
    *(ushort *)(DAT_08024078 + 8) = *(ushort *)(DAT_08024078 + 8) | 1;
    *(byte *)(DAT_0802407c + 4) = *(byte *)(DAT_0802407c + 4) | 8;
    cVar1 = *(char *)(iVar4 + 2);
    if (cVar1 == '\0') {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08024080 + 0x24) + 0x38));
      FUN_0801f63c(2);
      uVar9 = 2;
    }
    else {
      if (cVar1 == '\x02') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_0802409c + 0x24) + 8));
        *(char *)(param_1 + 0x17c) = '\x02';
        goto LAB_08024298;
      }
      if (cVar1 == '\x03') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_080240bc + 0x24) + 0x10));
        FUN_0801f63c(4);
        uVar9 = 4;
      }
      else if (cVar1 == '\x04') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_080240d8 + 0x24) + 0x18));
        uVar9 = 5;
      }
      else {
        if (cVar1 != '\x05') goto LAB_08024298;
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_080240f4 + 0x24) + 0x20));
        uVar9 = 9;
      }
    }
  }
  else if ((cVar1 == '\x02') && (DAT_08024108 < *(int *)(iVar10 + 0x54))) {
    uVar9 = 3;
  }
  else {
    if (((*(char *)(param_1 + 0x17c) == '\x03') && (0x1a4000 < *(int *)(iVar10 + 0x54))) ||
       ((*(char *)(param_1 + 0x17c) == '\x04' && (0x1a4000 < *(int *)(iVar10 + 0x54))))) {
      FUN_080275f0(DAT_0802415c,*(undefined4 *)(*(int *)(DAT_08024160 + 0x24) + 0x14));
      FUN_0801f63c(4);
      *(byte *)(DAT_08024164 + 4) = *(byte *)(DAT_08024164 + 4) | 8;
      *(undefined1 *)(param_1 + 0x17c) = 5;
      goto LAB_08024298;
    }
    if (*(char *)(param_1 + 0x17c) == '\x05') {
      FUN_0801f63c(3);
      uVar9 = 6;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\x06') && ((*(ushort *)(DAT_080241d0 + 8) & 0x10) != 0)
            ) {
      *DAT_080241d4 = *DAT_080241d4 | 0x80;
      pbVar6[1] = pbVar6[1] | 2;
      FUN_080275f0(iVar5 + 0x10,*(undefined4 *)(*(int *)(DAT_080241d8 + 0x24) + 0x1c));
      uVar2 = *(ushort *)(iVar5 + 8);
      uVar3 = (ushort)DAT_080241dc;
      *(byte *)(iVar5 + 0x12) = *(byte *)(iVar5 + 0x12) & 0xfd;
      *(byte *)(DAT_080241e0 + 4) = *(byte *)(DAT_080241e0 + 4) & 0xf7;
      *(ushort *)(iVar5 + 8) = uVar3 & uVar2 | 1;
      uVar9 = 7;
    }
    else {
      pcVar11 = (char *)(param_1 + 0x17c);
      if (*pcVar11 == '\a') {
        *DAT_08024204 = *DAT_08024204 & 0x7f;
        pbVar7[1] = 0;
        *pcVar11 = '\b';
        goto LAB_08024298;
      }
      if ((*pcVar11 == '\b') && (DAT_0802422c < *(int *)(iVar10 + 0x54))) {
        FUN_0801f63c(5);
        *(byte *)(DAT_08024230 + 4) = *(byte *)(DAT_08024230 + 4) | 8;
        *pcVar11 = '\t';
        goto LAB_08024298;
      }
      if (*(char *)(param_1 + 0x17c) == '\t') {
        if (DAT_08024264 < *(int *)(iVar10 + 0x54)) {
          *(byte *)(DAT_08024268 + 1) = *(byte *)(DAT_08024268 + 1) | 2;
        }
        if (*(int *)(iVar10 + 0x54) <= DAT_0802426c) goto LAB_08024298;
        *(undefined1 *)(DAT_08024268 + 1) = 0;
        uVar9 = 10;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\n') || (*(int *)(iVar10 + 0x54) <= DAT_080242a0))
        goto LAB_08024298;
        FUN_080275f0(DAT_080242a4,*(undefined4 *)(*(int *)(DAT_080242a8 + 0x24) + 0x3c));
        *(ushort *)(iVar8 + -8) = (ushort)DAT_080242ac & *(ushort *)(iVar8 + -8);
        uVar9 = 0xc;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x17c) = uVar9;
LAB_08024298:
  return (ulonglong)in_lr << 0x20;
}


