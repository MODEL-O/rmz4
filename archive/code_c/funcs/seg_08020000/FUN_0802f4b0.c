// undefined FUN_0802f4b0(void)
// entry 0x802f4b0


undefined4 FUN_0802f4b0(int param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  short *psVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  int *piVar12;
  ushort uVar13;
  ushort *puVar14;
  byte *pbVar15;
  ushort *puVar16;
  int iVar17;
  char *pcVar18;
  int iVar19;
  char *pcVar20;
  undefined4 in_lr;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint *local_38;
  int local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  byte *local_24;
  
  local_40 = *(int *)(param_1 + 0x54);
  local_3c = *(int *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    FUN_0802b7bc(param_1);
  }
  psVar8 = (short *)(param_1 + 0x10e);
  if (*psVar8 == -1) {
    iVar17 = *(int *)(param_1 + 0x58) + DAT_0802f510;
    if ((*(ushort *)(DAT_0802f514 + 0x1d0) & 0x7f) == 2) {
      iVar9 = FUN_08007b84(param_1 + 0x54);
    }
    else {
      iVar9 = *(int *)(DAT_0802f514 + DAT_0802f52c);
    }
    if (iVar9 < iVar17) {
      sVar7 = FUN_08002b10(0x32);
LAB_0802f56c:
      *psVar8 = sVar7;
    }
  }
  else {
    iVar17 = *(int *)(param_1 + 0x58);
    if ((*(ushort *)(DAT_0802f554 + 0x1d0) & 0x7f) == 2) {
      iVar9 = FUN_08007b84(param_1 + 0x54);
    }
    else {
      iVar9 = *(int *)(DAT_0802f554 + DAT_0802f5d4);
    }
    if (iVar17 < iVar9) {
      FUN_08002b5c((int)*psVar8);
      sVar7 = (short)DAT_0802f5d8;
      goto LAB_0802f56c;
    }
  }
  pcVar20 = (char *)(param_1 + 0xfc);
  *pcVar20 = *(char *)(param_1 + 0xd);
  pcVar18 = (char *)(param_1 + 0xfd);
  *pcVar18 = *(char *)(param_1 + 0xe);
  FUN_08038c34(param_1);
  local_38 = (uint *)(param_1 + 0x8c);
  local_24 = (byte *)(param_1 + 0x174);
  pbVar10 = (byte *)(param_1 + 0x142);
  local_30 = pcVar20;
  local_2c = pcVar18;
  if ((*local_38 & 0x200) == 0) {
    psVar8 = (short *)(param_1 + 0xa4);
    if (*psVar8 != 0) {
      cVar3 = FUN_0802e6a8(param_1,(uint)*local_24 * 8 + DAT_0802f5dc);
      if (cVar3 == '\x01') {
        FUN_08038988(param_1);
      }
      else if (cVar3 == '\x02') {
        *pbVar10 = *pbVar10 & 0xfe | *(byte *)(param_1 + 10) >> 4 & 1;
        *psVar8 = 0;
        *(undefined1 *)(param_1 + 0xd) = 4;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
    }
    if (((*local_38 & 0x200) == 0) && (*psVar8 != 0)) {
      cVar3 = FUN_0802ce00(param_1,(uint)*local_24 * 8 + DAT_0802f654);
      if (cVar3 == '\x01') {
        *pbVar10 = *pbVar10 & 0xfe | *(byte *)(param_1 + 10) >> 4 & 1;
        *psVar8 = 0;
        *(undefined1 *)(param_1 + 0xd) = 4;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
      else if (cVar3 == '\x02') {
        FUN_08038988(param_1);
      }
      FUN_0802cd44(param_1);
    }
  }
  local_34 = param_1 + 0xb4;
  if ((*(char *)(param_1 + 0xd) != '\x01') && (*(char *)(param_1 + 0xd) != '\x04')) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x58);
  *(ushort *)(param_1 + 0x16c) =
       CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
  *(undefined1 *)(param_1 + 0x16e) = *(undefined1 *)(param_1 + 0x71);
  *(undefined1 *)(param_1 + DAT_0802f79c) = *(undefined1 *)(param_1 + 0x72);
  *(byte *)(param_1 + 0x175) = *local_24;
  *local_24 = 0;
  if ((*(uint *)(param_1 + 0xc) & DAT_0802f7a0) != 0x400) {
    *(undefined1 *)(param_1 + 0x1b9) = 0;
  }
  local_28 = (char *)(param_1 + 0x170);
  *local_28 = '\0';
  iVar9 = DAT_0802f7a8;
  iVar17 = DAT_0802f7a4;
  if (((((*local_38 & 0x200) == 0) && (psVar8 = (short *)(param_1 + 0xa4), *psVar8 != 0)) &&
      (1 < (byte)(*(char *)(param_1 + 0xd) - 7U))) &&
     ((*(char *)(param_1 + 0xd) != '\n' &&
      ((*(int *)(param_1 + 0x184) <
        (*(int *)(param_1 + 0x58) - (int)*(short *)((uint)*local_24 * 8 + DAT_0802f7a4 + 6)) +
        DAT_0802f7a8 ||
       ((cVar3 = FUN_08007098(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58)),
        cVar3 != '\0' &&
        (cVar3 = FUN_08007098(*(undefined4 *)(param_1 + 0x54),
                              (*(int *)(param_1 + 0x58) -
                              (int)*(short *)((uint)*local_24 * 8 + iVar17 + 6)) + iVar9),
        cVar3 != '\0')))))))) {
    uVar11 = FUN_08007d28(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_0802f7ac);
    if ((uVar11 & 0x400) == 0) {
      cVar3 = FUN_08038a48(param_1);
      if (cVar3 == '\0') {
        *pbVar10 = *pbVar10 & 0xfe | *(byte *)(param_1 + 10) >> 4 & 1;
        *psVar8 = 0;
        *(undefined1 *)(param_1 + 0xd) = 4;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 6;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
    }
    else {
      *pbVar10 = *pbVar10 & 0xfe | *(byte *)(param_1 + 10) >> 4 & 1;
      *psVar8 = 0;
      *(undefined1 *)(param_1 + 0xd) = 4;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  uVar2 = *(ushort *)(param_1 + 0x15a);
  if (uVar2 != 0) {
    uVar6 = uVar2 & 0x8000;
    if ((uVar2 & 0x8000) != 0) {
      uVar6 = uVar2 ^ 0x8000;
    }
    *(ushort *)(param_1 + 0x15a) = uVar6;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0802f920));
  if ((*pbVar10 & 0x10) != 0) {
    if ((*(int *)(local_34 + 0x70) < *(int *)(param_1 + 0x58)) &&
       (((uVar11 = FUN_08007d28(*(undefined4 *)(param_1 + 0x54)), (uVar11 & 0x8000) == 0 ||
         (uVar11 = FUN_08007d28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
         (uVar11 & 0xf) == 0)) ||
        (uVar11 = FUN_08007d28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
        0xe < (uVar11 & 0xf))))) {
      *pbVar10 = *pbVar10 & 0xef;
    }
    if (*(int *)(param_1 + 0x58) < *(int *)(local_34 + 0x70) + DAT_0802f924) {
      *pbVar10 = *pbVar10 & 0xef;
    }
  }
  if (*(char *)(param_1 + 0xd) != '\x05') {
    *(undefined1 *)(param_1 + DAT_0802f928) = 0;
    *(undefined1 *)(param_1 + 0x172) = 0;
  }
  if ((*(char *)(param_1 + 0xd) != '\x04') &&
     (((*local_38 & 0x200) != 0 || (*(short *)(param_1 + 0xa4) == 0)))) {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0802f92c));
  *(undefined1 *)(param_1 + 0x14e) = 0xff;
  *(undefined1 *)(param_1 + DAT_0802f930) = 0xff;
  *(undefined1 *)(param_1 + 0x150) = 0xff;
  bVar5 = 0;
  pbVar15 = (byte *)(param_1 + DAT_0802f934);
  pcVar18 = (char *)(param_1 + DAT_0802f938);
  if ((*pbVar15 & 8) != 0) {
    if (*(char *)(param_1 + 0xd) == *local_30) {
      if ((*(char *)(param_1 + 0xd) != '\0') || (*(char *)(param_1 + 0xe) == *local_2c))
      goto LAB_0802f95c;
      cVar3 = *pcVar18;
    }
    else {
      cVar3 = *pcVar18;
    }
    if (cVar3 == '\0') {
      *(undefined1 *)(param_1 + 0x100) = 0;
    }
    else {
      bVar5 = 1;
    }
  }
LAB_0802f95c:
  *pbVar15 = *pbVar15 & 0xf1;
  *pcVar18 = '\0';
  *pbVar15 = *pbVar15 & 0xfe | bVar5;
  *(undefined1 *)(param_1 + DAT_0802f9b8) = 0;
  if (*(byte *)(param_1 + 0xd) < 4) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0802f9bc));
    cVar3 = *(char *)(param_1 + DAT_0802f9c0);
    if ((cVar3 != '\0') &&
       (cVar3 = cVar3 + -1, *(char *)(param_1 + DAT_0802f9c0) = cVar3, cVar3 == '\0')) {
      FUN_08109320(param_1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  *pbVar15 = *pbVar15 & 0xcf;
  cVar3 = FUN_08038a78(param_1);
  if (cVar3 == '\0') {
    cVar3 = FUN_08038aac(param_1);
    if (cVar3 == '\0') {
      FUN_08005784(param_1 + 0x74,(uint)*local_24 * 0x18 + DAT_0802faf8);
    }
    else {
      FUN_080057fc(param_1 + 0x74,(uint)*local_24 * 0x18 + DAT_0802fa30,0x20);
    }
  }
  else {
    FUN_080057fc(param_1 + 0x74,(uint)*local_24 * 0x18 + DAT_0802fa04,0x80);
  }
  uVar4 = FUN_0803891c(param_1);
  FUN_0802b53c(param_1,uVar4);
  if (((1 < (byte)(*(char *)(param_1 + 0xd) - 7U)) && (*(char *)(param_1 + 0xd) != '\n')) &&
     (cVar3 = FUN_0802cc18(param_1,(uint)*local_24 * 8 + DAT_0802fafc,1), cVar3 != '\0')) {
    *pbVar10 = *pbVar10 & 0xfe | *(byte *)(param_1 + 10) >> 4 & 1;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(int *)(param_1 + 0x54) = local_40;
    *(int *)(param_1 + 0x58) = local_3c;
  }
  iVar17 = DAT_0802fb00;
  if ((*pbVar10 & 4) == 0) {
    iVar9 = *(int *)(param_1 + 0x58);
    iVar19 = iVar9 - ((int)((uint)*(ushort *)((uint)*local_24 * 8 + DAT_0802fafc + 6) << 0x10) >>
                     0x11);
    if ((*(ushort *)(DAT_0802fb00 + 0x1d0) & 0x7f) == 2) {
      iVar9 = FUN_08007b84(param_1 + 0x54);
      if (iVar9 < iVar19) {
LAB_0802fb0e:
        sVar7 = *(short *)((uint)*local_24 * 8 + DAT_0802fb44 + 6);
        iVar17 = *(int *)(param_1 + 0x58);
        if ((*(ushort *)(DAT_0802fb48 + 0x1d0) & 0x7f) == 2) {
          iVar9 = FUN_08007b84(param_1 + 0x54);
        }
        else {
          iVar9 = *(int *)(DAT_0802fb48 + DAT_0802fb60);
        }
        if (iVar17 - sVar7 < iVar9) {
          FUN_080d3b40(param_1,1);
        }
        goto LAB_0802fb94;
      }
      iVar9 = *(int *)(param_1 + 0x58);
    }
    else if (*(int *)(DAT_0802fb40 + DAT_0802fb00) < iVar19) goto LAB_0802fb0e;
    if ((*(ushort *)(iVar17 + 0x1d0) & 0x7f) == 2) {
      iVar17 = FUN_08007b84(param_1 + 0x54);
    }
    else {
      iVar17 = *(int *)(DAT_0802fbf0 + iVar17);
    }
    if (iVar17 < iVar9) {
      FUN_080d3b40(param_1,0);
    }
  }
LAB_0802fb94:
  *pbVar10 = *pbVar10 & 0xf7;
  puVar16 = (ushort *)(param_1 + DAT_0802fbf4);
  if ((*puVar16 & 0x8000) == 0) {
    if (*(char *)(param_1 + DAT_0802fbf8) == '\0') {
      if (((*local_38 & DAT_0802fbf8 + 0x31U) == 0) && (*(short *)(param_1 + 0xa4) != 0)) {
        iVar17 = local_40 - *(int *)(param_1 + 0x54);
        if (iVar17 < 0) {
          iVar17 = *(int *)(param_1 + 0x54) - local_40;
        }
        if (0x1000 < iVar17) {
          *pbVar10 = *pbVar10 & 0xfe | *(byte *)(param_1 + 10) >> 4 & 1;
          *(short *)(param_1 + 0xa4) = 0;
          *(undefined1 *)(param_1 + 0xd) = 4;
          *(undefined1 *)(param_1 + 0xe) = 0;
          *(int *)(param_1 + 0x54) = local_40;
          *(int *)(param_1 + 0x58) = local_3c;
        }
      }
      if (((*(char *)(param_1 + DAT_0802fc6c) != '\0') && ((*local_38 & DAT_0802fc6c + 0x45U) == 0))
         && (*(short *)(param_1 + 0xa4) != 0)) {
        iVar17 = local_3c - *(int *)(param_1 + 0x58);
        if (iVar17 < 0) {
          iVar17 = *(int *)(param_1 + 0x58) - local_3c;
        }
        if (0x1000 < iVar17) {
          *pbVar10 = *pbVar10 & 0xfe | *(byte *)(param_1 + 10) >> 4 & 1;
          *(short *)(param_1 + 0xa4) = 0;
          *(undefined1 *)(param_1 + 0xd) = 4;
          *(undefined1 *)(param_1 + 0xe) = 0;
          *(int *)(param_1 + 0x54) = local_40;
          *(int *)(param_1 + 0x58) = local_3c;
        }
      }
    }
    iVar17 = DAT_0802fd38;
    if (((*puVar16 & 0x8000) == 0) && (*(char *)(param_1 + 0xd) != '\b')) {
      if ((((*local_38 & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) ||
         ((*(short *)(DAT_0802fd38 + 0x1d0) != 7 && (*(short *)(DAT_0802fd38 + 0x1d0) != 0x10))))
      goto LAB_0802fe74;
      piVar12 = (int *)((uint)*local_24 * 8 + DAT_0802fd3c);
      iVar9 = *piVar12;
      iVar19 = piVar12[1];
      puVar14 = (ushort *)(param_1 + DAT_0802fd40);
      uVar2 = *puVar14;
      local_4c = *(int *)(param_1 + 0x58) + (iVar9 >> 0x10);
      sVar7 = (short)iVar9;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_50 = *(int *)(param_1 + 0x54) + (int)sVar7;
        iVar9 = (iVar19 << 0x10) >> 0x11;
        local_48 = local_50 - iVar9;
        local_50 = local_50 + iVar9;
      }
      else {
        local_50 = *(int *)(param_1 + 0x54) - (int)sVar7;
        iVar9 = (iVar19 << 0x10) >> 0x11;
        local_48 = local_50 + iVar9;
        local_50 = local_50 - iVar9;
      }
      local_44 = local_4c;
      if (*(short *)(DAT_0802fd38 + 0x1d0) == 7) {
        cVar3 = FUN_08012948(&local_48);
        if ((cVar3 == '\0') && (cVar3 = FUN_08012948(&local_50), cVar3 == '\0')) goto LAB_0802fdca;
        uVar6 = *puVar14 + (ushort)*(byte *)(DAT_0802fd98 + iVar17);
        *puVar14 = uVar6;
joined_r0x0802fdc6:
        uVar13 = 1000;
        if (1000 < (short)uVar6) goto LAB_0802fdd6;
      }
      else {
        cVar3 = FUN_0801c574(&local_48);
        if ((cVar3 != '\0') || (cVar3 = FUN_0801c574(&local_50), cVar3 != '\0')) {
          uVar6 = *puVar14 + 6;
          *puVar14 = uVar6;
          goto joined_r0x0802fdc6;
        }
LAB_0802fdca:
        uVar13 = 0;
        uVar6 = *puVar14;
        *puVar14 = (ushort)(uVar6 - 0x21);
        if ((int)((uVar6 - 0x21) * 0x10000) < 0) {
LAB_0802fdd6:
          *puVar14 = uVar13;
        }
      }
      if (((int)(uint)uVar2 < (int)(short)*puVar14) || ((short)*puVar14 == 1000)) {
        cVar3 = *(char *)(param_1 + DAT_0802fe3c);
        *(char *)(param_1 + DAT_0802fe3c) = cVar3 + '\x01';
        cVar3 = FUN_08129198(cVar3,*(undefined1 *)
                                    ((*(byte *)(DAT_0802fe44 + DAT_0802fe48) - 1) + DAT_0802fe40));
        if (cVar3 == '\0') {
          iVar17 = (int)(short)*puVar14;
          if (iVar17 < 0x12d) {
            if (iVar17 != 1000) goto LAB_0802fe74;
          }
          else if (iVar17 <= DAT_0802fe4c) {
            sVar7 = FUN_08128fb8((int)(short)*puVar14,100);
            FUN_08002b10(sVar7 + 0xa8);
            goto LAB_0802fe74;
          }
          FUN_08002b10(0xb2);
        }
      }
      goto LAB_0802fe74;
    }
  }
  puVar14 = (ushort *)(param_1 + DAT_0802fe88);
  uVar2 = *puVar14;
  *puVar14 = (ushort)(uVar2 - 0x21);
  if ((int)((uVar2 - 0x21) * 0x10000) < 0) {
    *puVar14 = 0;
  }
LAB_0802fe74:
  iVar17 = *(int *)(local_34 + 0x38);
  if (iVar17 != 0) {
    if (iVar17 < 1) {
      *(int *)(local_34 + 0x38) = iVar17 + 1;
    }
    else {
      *(int *)(local_34 + 0x38) = iVar17 + -1;
    }
  }
  cVar3 = *(char *)(param_1 + DAT_0802ff14);
  if (cVar3 != '\0') {
    *(char *)(param_1 + DAT_0802ff14) = cVar3 + -1;
  }
  cVar3 = *(char *)(param_1 + 0x166);
  if (cVar3 != '\0') {
    *(char *)(param_1 + 0x166) = cVar3 + -1;
  }
  cVar3 = *(char *)(param_1 + DAT_0802ff18);
  if (cVar3 != '\0') {
    *(char *)(param_1 + DAT_0802ff18) = cVar3 + -1;
  }
  if ((((*puVar16 & 0x8000) == 0) && ((*local_38 & 0x200) == 0)) &&
     (*(short *)(param_1 + 0xa4) != 0)) {
    if (*(char *)(local_34 + 0x10) == '\a') {
      if (((*(byte *)(local_34 + 0xc) < 3) && (*(byte *)(local_34 + 0xd) < 3)) ||
         (pbVar10 = (byte *)(param_1 + 0xe6), *pbVar10 == 0xff)) {
        *(undefined2 *)(param_1 + 0x158) = 0;
      }
      else {
        if (*(byte *)(local_34 + 0xc) < 3) {
          uVar4 = *(undefined1 *)(local_34 + 0xd);
          uVar1 = *(undefined1 *)(local_34 + 0xf);
        }
        else {
          uVar4 = *(undefined1 *)(local_34 + 0xc);
          uVar1 = *(undefined1 *)(local_34 + 0xf);
        }
        bVar5 = FUN_0803a608(param_1,uVar4,uVar1);
        if (*pbVar10 < bVar5) {
          if (600 < *(ushort *)(param_1 + 0x158)) {
            FUN_08002b10(0x1c);
            *pbVar10 = bVar5;
            *(ushort *)(param_1 + 0x158) = 0;
          }
        }
        else {
          *(undefined2 *)(param_1 + 0x158) = 0;
        }
      }
      *(short *)(param_1 + 0x158) = *(short *)(param_1 + 0x158) + 1;
    }
    else {
      *(undefined2 *)(param_1 + 0x158) = 0;
    }
  }
  if (*local_28 == '\0') {
    FUN_0801cff0(param_1);
  }
  FUN_08038430(param_1);
  *(undefined1 *)(param_1 + 0x176) = 0;
  *(int *)(local_34 + 0x6c) = *(int *)(param_1 + 0x54) - local_40;
  return in_lr;
}


