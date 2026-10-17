// undefined FUN_0810df98(void)
// entry 0x810df98


undefined4 FUN_0810df98(int *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  undefined4 in_lr;
  
  iVar14 = *param_1;
  iVar12 = param_1[2];
  if (iVar12 == 0) {
    return in_lr;
  }
  *DAT_0810dffc = *DAT_0810dffc | 0x100;
  sVar4 = *(short *)(iVar12 + 0xa4);
  uVar8 = FUN_0802b62c(iVar12);
  uVar8 = uVar8 & 0xff;
  iVar12 = param_1[2];
  bVar1 = *(byte *)(iVar12 + 0xc0);
  bVar2 = *(byte *)(iVar12 + 0xc1);
  uVar13 = (uint)*(byte *)(iVar12 + 0xe6);
  bVar3 = *(byte *)(DAT_0810e000 + 4);
  if ((bVar3 & 4) == 0) {
    if ((bVar3 & 1) == 0) {
      if ((bVar3 & 2) == 0) {
        *(undefined4 *)(iVar14 + 0x280) = DAT_0810e08c;
        uVar9 = DAT_0810e090;
      }
      else {
        *(undefined4 *)(iVar14 + 0x280) = DAT_0810e04c;
        uVar9 = DAT_0810e050;
      }
    }
    else {
      *(undefined4 *)(iVar14 + 0x280) = DAT_0810e028;
      uVar9 = DAT_0810e02c;
    }
  }
  else {
    *(undefined4 *)(iVar14 + 0x280) = DAT_0810e004;
    uVar9 = DAT_0810e008;
  }
  *(undefined4 *)(iVar14 + 0x2c0) = uVar9;
  if (bVar1 < 3) {
    iVar10 = (uint)bVar1 * 0x20002;
    *(int *)(iVar14 + 0x300) = iVar10 + DAT_0810e094;
    iVar12 = DAT_0810e098;
LAB_0810e0d6:
    iVar12 = iVar10 + iVar12;
  }
  else {
    if (uVar13 != 0xff) {
      iVar10 = uVar13 * 0x20002;
      *(int *)(iVar14 + 0x300) = iVar10 + DAT_0810e0fc;
      iVar12 = DAT_0810e100;
      goto LAB_0810e0d6;
    }
    *(undefined4 *)(iVar14 + 0x300) = DAT_0810e0b4;
    iVar12 = DAT_0810e0b8;
  }
  *(int *)(iVar14 + 0x340) = iVar12;
  if (bVar2 < 3) {
    iVar10 = (uint)bVar2 * 0x20002;
    *(int *)(iVar14 + 0x380) = iVar10 + DAT_0810e104;
    iVar12 = DAT_0810e108;
  }
  else {
    if (uVar13 == 0xff) {
      *(undefined4 *)(iVar14 + 0x380) = DAT_0810e124;
      iVar12 = DAT_0810e128;
      goto LAB_0810e148;
    }
    iVar10 = uVar13 * 0x20002;
    *(int *)(iVar14 + 0x380) = iVar10 + DAT_0810e188;
    iVar12 = DAT_0810e18c;
  }
  iVar12 = iVar10 + iVar12;
LAB_0810e148:
  *(int *)(iVar14 + 0x3c0) = iVar12;
  iVar7 = DAT_0810e1f0;
  iVar6 = DAT_0810e1ec;
  piVar5 = DAT_0810e1e8;
  iVar10 = DAT_0810e198;
  iVar12 = DAT_0810e194;
  piVar16 = DAT_0810e190;
  piVar15 = (int *)(iVar14 + 0x240);
  uVar13 = (uint)sVar4;
  if ((int)uVar8 < (int)uVar13) {
    uVar13 = 0;
    piVar16 = piVar5;
    if (uVar8 != 0) {
      uVar11 = (uint)(short)(sVar4 - (short)uVar8);
      iVar12 = DAT_0810e1ec + (uVar11 & 3) * -0x200020;
      do {
        if ((int)uVar11 < (int)(uVar13 + 4)) {
          if ((int)uVar11 < (int)uVar13) {
            *piVar15 = iVar6;
          }
          else {
            *piVar15 = iVar12;
          }
        }
        else {
          *piVar15 = iVar7;
        }
        uVar13 = uVar13 + 4 & 0xffff;
        piVar15 = piVar15 + -0x10;
      } while (uVar13 < uVar8);
    }
  }
  else {
    uVar11 = 0;
    if (uVar8 != 0) {
      iVar14 = DAT_0810e194 + (uVar13 & 3) * -0x200020;
      do {
        if ((int)uVar13 < (int)(uVar11 + 4)) {
          if ((int)uVar13 < (int)uVar11) {
            *piVar15 = iVar12;
          }
          else {
            *piVar15 = iVar14;
          }
        }
        else {
          *piVar15 = iVar10;
        }
        uVar11 = uVar11 + 4 & 0xffff;
        piVar15 = piVar15 + -0x10;
      } while (uVar11 < uVar8);
    }
  }
  *piVar15 = DAT_0810e238;
  *(short *)(piVar15 + 1) = (short)DAT_0810e23c;
  *(ushort *)(piVar15 + 0x11) = (short)DAT_0810e240 + (ushort)*(byte *)(*piVar16 + 1);
  *(short *)(piVar15 + 0x21) = (short)DAT_0810e244;
  return in_lr;
}


