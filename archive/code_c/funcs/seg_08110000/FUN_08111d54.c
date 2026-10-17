// undefined FUN_08111d54(void)
// entry 0x8111d54


undefined4 FUN_08111d54(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  ushort *puVar3;
  undefined2 *puVar4;
  int iVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 in_lr;
  char cVar15;
  
  puVar3 = DAT_08111ee0;
  uVar14 = 0;
  uVar13 = 0;
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
LAB_08111e66:
    iVar5 = DAT_08111f10;
    pcVar11 = (char *)(param_1 + 0x244);
    cVar15 = *pcVar11;
    if ((*(ushort *)(DAT_08111f10 + 6) & 0x80) != 0) {
      *pcVar11 = cVar15 + '\x01';
    }
    if ((*(ushort *)(iVar5 + 6) & 0x40) != 0) {
      *pcVar11 = *pcVar11 + -1 + *(char *)(param_1 + DAT_08111f0c);
    }
    cVar6 = FUN_08129198(*pcVar11,*(undefined1 *)(param_1 + DAT_08111f0c));
    *pcVar11 = cVar6;
    if (cVar15 != cVar6) {
      FUN_08002b10(1);
    }
    if (*(short *)(param_1 + 8) < 0x10) {
      uVar9 = *(short *)(param_1 + 8) + 1;
      *(ushort *)(param_1 + 8) = uVar9;
      DAT_08111efc[1] = uVar9 & 0x1f | (0x10 - uVar9) * 0x100;
    }
    if (0x1f < *(short *)(param_1 + 10)) {
      uVar9 = *(ushort *)(iVar5 + 4);
      if ((uVar9 & 9) == 0) {
        if ((uVar9 & 2) != 0) {
          FUN_08002b10(3);
          FUN_08002624(0x33);
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        }
      }
      else {
        FUN_08002b10(2);
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x02';
      }
      goto LAB_08111fc4;
    }
    sVar7 = *(short *)(param_1 + 10) + 1;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_08111fc4;
      *DAT_08111ee0 = (ushort)DAT_08111ee4 & *DAT_08111ee0 & (ushort)DAT_08111ee8 | 0x3900;
      puVar3[5] = (ushort)DAT_08111eec;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      FUN_08001d30(DAT_08111ef0,(puVar3[4] & 0xc) << 0xc);
      FUN_08002208(DAT_08111ef4,0);
      FUN_08002734(0x38,DAT_08111ef8,0x27,0,0);
      FUN_0800249c(0x33,0);
      puVar4 = DAT_08111efc;
      *DAT_08111efc = (short)DAT_08111f00;
      puVar4[1] = 0x10;
      FUN_0810d4a8();
      FUN_0810d5b8();
      cVar15 = *(char *)(DAT_08111f04 + 0x12) == *(char *)(DAT_08111f08 + 0x14);
      if ((ushort)*(byte *)(DAT_08111f04 + 0x13) == (*(ushort *)(DAT_08111f08 + 0x16) & 0xff)) {
        cVar15 = cVar15 + '\x01';
      }
      if ((ushort)*(byte *)(DAT_08111f04 + 0x14) == (*(ushort *)(DAT_08111f08 + 0x18) & 0xff)) {
        cVar15 = cVar15 + '\x01';
      }
      if ((ushort)*(byte *)(DAT_08111f04 + 0x15) == (*(ushort *)(DAT_08111f08 + 0x1a) & 0xff)) {
        cVar15 = cVar15 + '\x01';
      }
      if ((ushort)*(byte *)(DAT_08111f04 + 0x16) == (*(ushort *)(DAT_08111f08 + 0x1c) & 0xff)) {
        cVar15 = cVar15 + '\x01';
      }
      if ((ushort)*(byte *)(DAT_08111f04 + 0x17) == (*(ushort *)(DAT_08111f08 + 0x1e) & 0xff)) {
        cVar15 = cVar15 + '\x01';
      }
      if ((ushort)*(byte *)(DAT_08111f04 + 0x18) == (*(ushort *)(DAT_08111f08 + 0x20) & 0xff)) {
        cVar15 = cVar15 + '\x01';
      }
      *(char *)(param_1 + DAT_08111f0c) = cVar15;
      *(undefined2 *)(param_1 + 8) = 0x10;
      *(undefined2 *)(param_1 + 10) = 0;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      goto LAB_08111e66;
    }
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        if (*(short *)(param_1 + 8) == 0) {
          *(undefined1 *)(param_1 + 6) = 0;
          *(undefined1 *)(param_1 + 5) = 2;
        }
        else {
          uVar9 = *(short *)(param_1 + 8) - 1;
          *(ushort *)(param_1 + 8) = uVar9;
          *(ushort *)(DAT_08111fb8 + 2) = uVar9 & 0x1f | (0x10 - uVar9) * 0x100;
        }
      }
      goto LAB_08111fc4;
    }
    if (*(short *)(param_1 + 10) == 0) {
      FUN_08002624(0x33);
      FUN_08002b5c(0x95);
      FUN_0810f6f8(param_1,4);
      goto LAB_08111fc4;
    }
    sVar7 = *(short *)(param_1 + 10) + -1;
  }
  *(short *)(param_1 + 10) = sVar7;
  iVar5 = DAT_08111f74;
  uVar2 = (undefined1)sVar7;
  *(undefined1 *)(DAT_08111f74 + DAT_08111f78) = uVar2;
  *(undefined1 *)(iVar5 + DAT_08111f7c) = uVar2;
  *(undefined1 *)(iVar5 + 0x400) = uVar2;
LAB_08111fc4:
  FUN_080025d8(0x33);
  iVar5 = DAT_0811203c;
  iVar10 = 0;
  if (*(char *)(param_1 + DAT_08112038) != '\0') {
    iVar8 = 0;
    do {
      iVar12 = iVar8 >> 0x10;
      if (*(char *)((*(byte *)(iVar12 + DAT_08112040) - 0xf0) + iVar5) ==
          *(char *)((*(byte *)(iVar12 + DAT_08112040) + 0x18 & 0xff) * 2 + DAT_08112044)) {
        if ((uint)*(byte *)(param_1 + 0x244) == iVar10 >> 0x10) {
          *(char *)(param_1 + DAT_08112048) = (char)uVar13;
        }
        uVar13 = (uint)*(ushort *)(iVar12 * 2 + DAT_08112050);
        if ((uint)*(byte *)(param_1 + 0x244) == iVar10 >> 0x10) {
          iVar10 = uVar13 << 1;
        }
        else {
          iVar10 = (uVar13 + 1) * 2;
        }
        FUN_0810d85c((uint)*(ushort *)(DAT_0811204c + iVar10) + DAT_081120bc,
                     *(undefined1 *)(iVar12 + DAT_081120c0),
                     ((short)uVar14 * 2 + 10) - (uint)*(byte *)(param_1 + DAT_081120c4));
        uVar14 = (int)(short)uVar14 + 1U & 0xffff;
      }
      uVar13 = iVar8 + 0x10000U >> 0x10;
      iVar10 = uVar14 << 0x10;
    } while ((iVar10 >> 0x10 < (int)(uint)*(byte *)(param_1 + DAT_081120c4)) &&
            (iVar8 = uVar13 * 0x10000, iVar8 >> 0x10 < 7));
  }
  return in_lr;
}


