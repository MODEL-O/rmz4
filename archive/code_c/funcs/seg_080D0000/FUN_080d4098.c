// undefined FUN_080d4098(void)
// entry 0x80d4098


undefined4 FUN_080d4098(int param_1)

{
  byte bVar1;
  ushort *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  undefined4 in_lr;
  byte local_3c [28];
  undefined4 local_20;
  uint local_1c;
  
  iVar5 = DAT_080d4120;
  iVar4 = *(int *)(param_1 + 8);
  FUN_08129258(local_3c,DAT_080d4124,0x1a);
  puVar2 = DAT_080d4128;
  if (1 < *(byte *)(iVar4 + 0xc)) {
    return in_lr;
  }
  if (*(char *)(iVar4 + 0xf) == '\0') {
    *DAT_080d4128 = *DAT_080d4128 | 0x100;
    local_20 = DAT_080d412c;
    FUN_08128be0(&local_20,(puVar2[2] & 0x1f00) * 8 + DAT_080d4130,DAT_080d4134);
    *(char *)(iVar4 + 0xf) = *(char *)(iVar4 + 0xf) + '\x01';
    FUN_08001d30((uint)*(byte *)(iVar4 + 0x10) * 0x14 + DAT_080d4138,(puVar2[2] & 0xc) << 0xc);
    FUN_08002208((uint)*(byte *)(iVar4 + 0x10) * 0x14 + DAT_080d413c,0);
  }
  else {
    FUN_08128be0((uint)*(byte *)(iVar4 + 0x10) * 0x100 + DAT_080d416c,iVar5 + 0x200,0x40);
  }
  uVar9 = (uint)*(byte *)(iVar4 + 0xe);
  if (uVar9 != 1) {
    if (uVar9 < 2) {
      if ((uVar9 != 0) || (iVar5 = FUN_08000a70(0x140), iVar5 == 0)) goto LAB_080d42a0;
      local_1c = uVar9;
      FUN_08128be0(&local_1c,iVar5,DAT_080d41b0);
      iVar11 = 0;
      puVar6 = (undefined2 *)(iVar5 + 0x80);
      do {
        if (*(byte *)(iVar4 + 0x12) < local_3c[iVar11]) {
          uVar7 = 0xff;
        }
        else {
          bVar1 = local_3c[iVar11];
          uVar9 = ((uint)*(byte *)(iVar4 + 0x12) - (uint)bVar1) * -0x18 + 0xff;
          uVar10 = uVar9 & 0xffff;
          if ((int)(uVar9 * 0x10000) < 0) {
            uVar10 = 0;
          }
          uVar7 = (undefined2)uVar10;
          if ((bVar1 & 1) == 0) {
            uVar7 = (undefined2)(uVar10 * -0x10000 >> 0x10);
          }
        }
        *puVar6 = uVar7;
        puVar6 = puVar6 + 1;
        iVar11 = iVar11 + 1;
      } while (iVar11 < 0x1a);
    }
    else if (uVar9 == 2) {
      iVar5 = FUN_08000a70(0x140);
      if (iVar5 == 0) goto LAB_080d42a0;
      local_1c = 0;
      FUN_08128be0(&local_1c,iVar5,DAT_080d4224);
      iVar4 = 0;
      psVar12 = (short *)(iVar5 + 0x80);
      do {
        sVar3 = FUN_08128fb8(iVar4,3);
        *psVar12 = sVar3 + -4;
        psVar12 = psVar12 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x1a);
    }
    else {
      if ((uVar9 != 3) || (iVar5 = FUN_08000a70(0x140), iVar5 == 0)) goto LAB_080d42a0;
      local_1c = 0;
      FUN_08128be0(&local_1c,iVar5,DAT_080d42b4);
      uVar9 = 0;
      psVar12 = (short *)(iVar5 + 0x80);
      do {
        uVar8 = (ushort)*(byte *)(iVar4 + 0x12) * 0xc;
        if (0xff < uVar8) {
          uVar8 = 0xff;
        }
        if ((uVar9 & 1) == 0) {
          uVar8 = -uVar8;
        }
        sVar3 = FUN_08128fb8(uVar9,3);
        *psVar12 = uVar8 + sVar3 + -4;
        psVar12 = psVar12 + 1;
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 0x1a);
    }
    iVar4 = DAT_080d42b8;
    *(int *)(DAT_080d42b8 + 0x1b4) = iVar5;
    *(undefined4 *)(iVar4 + 0x1b8) = DAT_080d42bc;
    *(undefined4 *)(iVar4 + 0x1bc) = DAT_080d42c0;
  }
LAB_080d42a0:
  puVar6 = DAT_080d42c4;
  *DAT_080d42c4 = 0;
  puVar6[1] = 0;
  return in_lr;
}


