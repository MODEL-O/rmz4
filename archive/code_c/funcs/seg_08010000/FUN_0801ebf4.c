// undefined FUN_0801ebf4(void)
// entry 0x801ebf4


undefined4 FUN_0801ebf4(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  short sVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined4 in_lr;
  byte local_30 [4];
  byte local_2c [4];
  int local_28;
  byte *local_24;
  
  iVar11 = *DAT_0801ec14;
  cVar1 = *(char *)(iVar11 + 1);
  bVar2 = *(byte *)((int)DAT_0801ec14 + 0x15);
  if (0x13 < bVar2) {
    uVar7 = 4;
    goto LAB_0801ec86;
  }
  if (0x11 < bVar2) {
    uVar7 = 3;
    goto LAB_0801ecc6;
  }
  if (bVar2 == 0) {
    uVar7 = 5;
    goto LAB_0801ecd2;
  }
  if (*(char *)(DAT_0801ec5c + 0x16) == '\x0f') {
    iVar12 = *(int *)((uint)*(byte *)(DAT_0801ec5c + 4) * 4 + DAT_0801ec60);
    uVar8 = FUN_08128fb8(*(undefined2 *)(DAT_0801ec5c + 0xc),*(ushort *)(DAT_0801ec5c + 0x12) + 1);
    iVar12 = FUN_08128fb8(iVar12 * 10,uVar8);
    if (iVar12 < 6) {
      uVar7 = 6;
      goto LAB_0801ecc6;
    }
  }
  if (*(byte *)(DAT_0801ec70 + 0x17) < 0x13) {
    if (*(byte *)(DAT_0801ec70 + 0x17) < 6) {
      uVar7 = 8;
      goto LAB_0801ecc6;
    }
    if (*(char *)(DAT_0801ec8c + 0x18) != '\x0f') {
      if (*(char *)(DAT_0801eca0 + 0x1a) == '\0') {
        if (*(char *)(DAT_0801ecb0 + 0x14) == '\x14') {
          uVar7 = 1;
LAB_0801ecc6:
          *(undefined1 *)(iVar11 + 4) = uVar7;
          goto LAB_0801ecd6;
        }
        if (*(char *)(DAT_0801ecb0 + 0x14) == '\0') {
          uVar7 = 2;
        }
        else {
          if (*(char *)(DAT_0801eccc + 0x19) != '\0') {
            uVar7 = 0xb;
            goto LAB_0801ecc6;
          }
          uVar7 = 0xc;
        }
      }
      else {
        uVar7 = 10;
      }
LAB_0801ecd2:
      *(undefined1 *)(iVar11 + 4) = uVar7;
      goto LAB_0801ecd6;
    }
    uVar7 = 9;
  }
  else {
    uVar7 = 7;
  }
LAB_0801ec86:
  *(undefined1 *)(iVar11 + 4) = uVar7;
LAB_0801ecd6:
  if (cVar1 == '\x06') {
    sVar17 = 0;
    *(undefined1 *)(iVar11 + 4) = 0;
  }
  else {
    uVar4 = *(ushort *)(DAT_0801ed00 + 0x1c);
    uVar5 = *(ushort *)(DAT_0801ed00 + 0x1e);
    uVar6 = *(ushort *)(DAT_0801ed00 + 0x20);
    iVar12 = FUN_08128fb8(((uint)uVar5 + (uint)uVar4 + (uint)uVar6) * 7,10);
    if (iVar12 < (int)(uint)uVar4) {
      sVar17 = 1;
    }
    else if (iVar12 < (int)(uint)uVar5) {
      sVar17 = 2;
    }
    else {
      sVar17 = 4;
      if (iVar12 < (int)(uint)uVar6) {
        sVar17 = 3;
      }
    }
  }
  *(undefined1 *)(iVar11 + 3) = *(undefined1 *)(iVar11 + 2);
  uVar16 = 0;
  iVar12 = iVar11 + 0x2a;
  local_28 = iVar11 + 0x16;
  iVar14 = iVar11 + 0x32;
  local_24 = local_2c;
  do {
    iVar15 = (int)(uVar16 * 0x10000) >> 0x10;
    if (iVar15 == sVar17) {
      bVar2 = *(byte *)(iVar12 + iVar15);
      if (bVar2 < 7) {
        *(byte *)(iVar12 + iVar15) = bVar2 + 1;
      }
    }
    else {
      *(undefined1 *)(iVar12 + iVar15) = 0;
    }
    uVar9 = uVar16 * 0x10000 + 0x10000;
    uVar16 = uVar9 >> 0x10;
  } while ((int)uVar9 >> 0x10 < 6);
  *(undefined1 *)(iVar11 + 2) =
       *(undefined1 *)(sVar17 * 8 + (uint)*(byte *)(iVar12 + sVar17) + DAT_0801eea0);
  pcVar13 = (char *)(local_28 + (uint)*(byte *)(iVar11 + 2));
  *pcVar13 = *pcVar13 + '\x01';
  pcVar13 = (char *)((uint)*(byte *)(iVar11 + 4) + iVar14);
  *pcVar13 = *pcVar13 + '\x01';
  *(undefined1 *)(iVar11 + 7) = 0;
  uVar16 = 0;
  do {
    if (*(byte *)(iVar14 + (uint)*(byte *)(iVar11 + 7)) < *(byte *)(iVar14 + (short)uVar16)) {
      *(char *)(iVar11 + 7) = (char)uVar16;
    }
    uVar9 = (int)(short)uVar16 + 1;
    uVar16 = uVar9 & 0xffff;
  } while ((int)(uVar9 * 0x10000) >> 0x10 < 10);
  local_30[0] = *(char *)(iVar11 + 0x19) + *(char *)(iVar11 + 0x18) + *(char *)(iVar11 + 0x17) +
                *(char *)(iVar11 + 0x1a);
  local_30[1] = *(char *)(iVar11 + 0x1d) + *(char *)(iVar11 + 0x1c) + *(char *)(iVar11 + 0x1b);
  local_30[2] = *(char *)(iVar11 + 0x20) + *(char *)(iVar11 + 0x1f) + *(char *)(iVar11 + 0x1e);
  local_30[3] = *(undefined1 *)(iVar11 + 0x16);
  uVar16 = 0;
  do {
    local_2c[(short)uVar16] = (byte)uVar16;
    uVar9 = (int)(short)uVar16 + 1;
    uVar16 = uVar9 & 0xffff;
  } while ((int)(uVar9 * 0x10000) >> 0x10 < 4);
  uVar16 = 0;
  do {
    uVar9 = 3;
    iVar12 = (int)(uVar16 * 0x10000) >> 0x10;
    if (iVar12 < 3) {
      pbVar19 = local_2c + iVar12;
      do {
        bVar2 = *pbVar19;
        pbVar18 = local_2c + (short)uVar9;
        bVar3 = *pbVar18;
        if (local_30[bVar2] < local_30[bVar3]) {
          *pbVar19 = bVar3;
          *pbVar18 = bVar2;
        }
        uVar10 = (int)(short)uVar9 - 1;
        uVar9 = uVar10 & 0xffff;
      } while (iVar12 < (int)(uVar10 * 0x10000) >> 0x10);
    }
    uVar9 = uVar16 * 0x10000 + 0x10000;
    uVar16 = uVar9 >> 0x10;
  } while ((int)uVar9 >> 0x10 < 3);
  if (local_2c[0] == 0) {
    *(undefined1 *)(iVar11 + 7) = 0;
    *(undefined1 *)(iVar11 + 6) = 1;
    iVar12 = DAT_0801eea0;
    uVar16 = 0;
    do {
      bVar2 = *(byte *)((short)uVar16 + iVar12);
      if (*(char *)(local_28 + (uint)bVar2) != '\0') {
        *(byte *)(iVar11 + 6) = bVar2;
      }
      uVar9 = (int)(short)uVar16 + 1;
      uVar16 = uVar9 & 0xffff;
    } while ((int)(uVar9 * 0x10000) >> 0x10 < 8);
  }
  else {
    *(undefined1 *)(iVar11 + 6) = *(undefined1 *)((uint)local_2c[0] * 8 + DAT_0801eec8);
    iVar12 = DAT_0801ef10;
    if (*(short *)(*DAT_0801eecc + 0xe) == 0) {
      uVar16 = 0;
      do {
        bVar2 = *(byte *)((int)(short)uVar16 + (uint)local_2c[0] * 8 + iVar12);
        if (*(char *)(local_28 + (uint)bVar2) != '\0') {
          *(byte *)(iVar11 + 6) = bVar2;
        }
        uVar9 = (int)(short)uVar16 + 1;
        uVar16 = uVar9 & 0xffff;
      } while ((int)(uVar9 * 0x10000) >> 0x10 < 8);
    }
    else {
      *(undefined1 *)(iVar11 + 6) = 0xe;
      *(undefined1 *)(iVar11 + 7) = 0;
    }
  }
  return in_lr;
}


