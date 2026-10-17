// undefined FUN_081273fc(void)
// entry 0x81273fc


undefined8 FUN_081273fc(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 unaff_r9;
  undefined4 in_lr;
  bool bVar18;
  
  iVar6 = *DAT_081275f4;
  param_3[4] = *(byte *)(param_1 + DAT_081275f8);
  pbVar8 = *(byte **)(param_3 + 0x40);
  if (*pbVar8 < 0x80) {
    param_3[5] = *pbVar8;
    pbVar9 = pbVar8 + 1;
    if (*pbVar9 < 0x80) {
      param_3[6] = *pbVar9;
      pbVar9 = pbVar8 + 2;
      if (*pbVar9 < 0x80) {
        param_3[4] = param_3[4] + *pbVar9;
        pbVar9 = pbVar8 + 3;
      }
    }
    *(byte **)(param_3 + 0x40) = pbVar9;
  }
  bVar5 = 0;
  pbVar8 = param_3 + 0x24;
  bVar1 = *pbVar8;
  if ((bVar1 & 0xc0) == 0) {
    bVar7 = param_3[5];
  }
  else {
    bVar7 = param_3[5];
    uVar10 = (uint)bVar7;
    if ((bVar1 & 0x40) != 0) {
      uVar10 = (uint)*(byte *)(*(int *)(param_3 + 0x2c) + uVar10);
    }
    pbVar8 = (byte *)(uVar10 * 0xc + *(int *)(param_3 + 0x28));
    if ((*pbVar8 & 0xc0) != 0) goto LAB_081275e2;
    if ((bVar1 & 0x80) != 0) {
      if ((pbVar8[3] & 0x80) != 0) {
        bVar5 = (pbVar8[3] + 0x40) * '\x02';
      }
      bVar7 = pbVar8[1];
    }
  }
  uVar10 = (uint)param_3[0x1d] + (uint)*(byte *)(param_2 + 9);
  if (0xff < uVar10) {
    uVar10 = 0xff;
  }
  bVar1 = *pbVar8;
  if ((bVar1 & 7) == 0) {
    bVar3 = false;
    pbVar15 = (byte *)(iVar6 + 0x50);
    uVar11 = (uint)*(byte *)(iVar6 + 6);
    uVar16 = uVar10;
    pbVar9 = param_3;
    pbVar4 = (byte *)0x0;
    do {
      pbVar14 = pbVar15;
      if ((*pbVar15 & 199) == 0) goto LAB_0812753c;
      pbVar14 = pbVar4;
      if ((*pbVar15 & 0x40) == 0) {
        if (!bVar3) goto LAB_08127514;
        goto LAB_08127530;
      }
      if (bVar3) {
LAB_08127514:
        uVar12 = (uint)pbVar15[0x13];
        if (uVar12 < uVar16) {
          uVar16 = uVar12;
          pbVar4 = *(byte **)(pbVar15 + 0x2c);
          goto LAB_0812752e;
        }
        if (uVar12 <= uVar16) {
          pbVar4 = *(byte **)(pbVar15 + 0x2c);
          bVar18 = pbVar9 <= pbVar4;
          if ((pbVar9 < pbVar4) || (pbVar4 = pbVar9, bVar18)) goto LAB_0812752e;
        }
      }
      else {
        bVar3 = true;
        uVar16 = (uint)pbVar15[0x13];
        pbVar4 = *(byte **)(pbVar15 + 0x2c);
LAB_0812752e:
        pbVar9 = pbVar4;
        pbVar14 = pbVar15;
      }
LAB_08127530:
      pbVar15 = pbVar15 + 0x40;
      uVar12 = uVar11 - 1;
      bVar18 = 0 < (int)uVar11;
      uVar11 = uVar12;
      pbVar4 = pbVar14;
    } while (uVar12 != 0 && bVar18);
    if (pbVar14 == (byte *)0x0) goto LAB_081275e2;
  }
  else {
    if (*(int *)(iVar6 + 0x1c) == 0) goto LAB_081275e2;
    pbVar14 = (byte *)(*(int *)(iVar6 + 0x1c) + ((bVar1 & 7) - 1) * 0x40);
    if (((((*pbVar14 & 199) != 0) && ((*pbVar14 & 0x40) == 0)) && (uVar10 <= pbVar14[0x13])) &&
       ((pbVar14[0x13] != uVar10 || (*(byte **)(pbVar14 + 0x2c) < param_3)))) goto LAB_081275e2;
  }
LAB_0812753c:
  FUN_08127b08(pbVar14);
  pbVar14[0x30] = 0;
  pbVar14[0x31] = 0;
  pbVar14[0x32] = 0;
  pbVar14[0x33] = 0;
  iVar13 = *(int *)(param_3 + 0x20);
  *(int *)(pbVar14 + 0x34) = iVar13;
  if (iVar13 != 0) {
    *(byte **)(iVar13 + 0x30) = pbVar14;
  }
  *(byte **)(param_3 + 0x20) = pbVar14;
  *(byte **)(pbVar14 + 0x2c) = param_3;
  bVar2 = param_3[0x1b];
  param_3[0x1c] = bVar2;
  if (bVar2 != 0) {
    FUN_0812763c(bVar2,param_3);
  }
  FUN_0812808c(param_2,param_3);
  *(undefined4 *)(pbVar14 + 0x10) = *(undefined4 *)(param_3 + 4);
  pbVar14[0x13] = (byte)uVar10;
  pbVar14[8] = bVar7;
  pbVar14[0x14] = bVar5;
  pbVar14[1] = *pbVar8;
  uVar17 = *(undefined4 *)(pbVar8 + 4);
  *(undefined4 *)(pbVar14 + 0x24) = uVar17;
  *(undefined4 *)(pbVar14 + 4) = *(undefined4 *)(pbVar8 + 8);
  *(undefined2 *)(pbVar14 + 0xc) = *(undefined2 *)(param_3 + 0x1e);
  FUN_081273cc();
  iVar13 = (uint)pbVar14[8] + (int)(char)param_3[8];
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  if ((bVar1 & 7) == 0) {
    uVar17 = FUN_0812768c(uVar17,iVar13,param_3[9]);
  }
  else {
    pbVar14[0x1e] = pbVar8[2];
    bVar5 = pbVar8[3];
    if (((bVar5 & 0x80) != 0) || ((bVar5 & 0x70) == 0)) {
      bVar5 = 8;
    }
    pbVar14[0x1f] = bVar5;
    uVar17 = FUN_08127378(bVar1 & 7,iVar13,param_3[9],*(undefined4 *)(iVar6 + 0x30));
  }
  *(undefined4 *)(pbVar14 + 0x20) = uVar17;
  *pbVar14 = 0x80;
  *param_3 = *param_3 & 0xf0;
LAB_081275e2:
  return CONCAT44(unaff_r9,in_lr);
}


