// undefined FUN_0800edf8(void)
// entry 0x800edf8


undefined4 FUN_0800edf8(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  int iVar6;
  int *piVar7;
  char cVar8;
  byte *pbVar9;
  uint uVar10;
  char *pcVar11;
  undefined1 *puVar12;
  undefined4 in_lr;
  
  uVar4 = DAT_0800eea0;
  iVar3 = DAT_0800ee24;
  pbVar9 = (byte *)(DAT_0800ee28 + DAT_0800ee24);
  bVar1 = *pbVar9;
  if (bVar1 == 0) goto LAB_0800ef6a;
  bVar2 = *pbVar9;
  if (bVar2 == 2) {
LAB_0800ee74:
    pbVar9 = (byte *)(DAT_0800eeb0 + iVar3);
    bVar1 = *pbVar9;
    *pbVar9 = bVar1 + 1;
    if ((bVar1 + 1 & 1) == 0) {
      DAT_0800eea4[5] = ((ushort)*pbVar9 * -8 + 0xa0) * 0x100 | 0xa0;
    }
    else {
      *(ushort *)(DAT_0800ef1c + 10) = ((ushort)*pbVar9 * -8 + 0xa8) * 0x100 | 0xa0;
    }
    iVar3 = DAT_0800ef20;
    pcVar11 = (char *)(DAT_0800ef20 + DAT_0800ef24);
    if (*pcVar11 == '\n') {
      *(undefined2 *)(*(int *)(DAT_0800ef28 + DAT_0800ef2c) + 0xa4) = 0;
    }
    iVar6 = DAT_0800ef30;
    if (*pcVar11 != '\x14') goto LAB_0800ef6a;
    FUN_080275f0(DAT_0800ef30,*(undefined4 *)(*(int *)(DAT_0800ef34 + 0x40) + 0x78));
    *(ushort *)(iVar6 + -8) = (ushort)DAT_0800ef38 & *(ushort *)(iVar6 + -8) | 8;
    *pcVar11 = 'x';
    *(byte *)(DAT_0800ef3c + 1) = *(byte *)(DAT_0800ef3c + 1) | 2;
    pbVar9 = (byte *)(iVar3 + DAT_0800ef40);
    bVar1 = *pbVar9;
  }
  else {
    if (bVar2 < 3) {
      if (bVar2 != 1) goto LAB_0800ef6a;
      *(ushort *)(DAT_0800ee98 + 8) = (ushort)DAT_0800ee9c & *(ushort *)(DAT_0800ee98 + 8) | 8;
      puVar5 = DAT_0800eea4;
      *DAT_0800eea4 = *DAT_0800eea4 | 0x4000;
      *(undefined1 *)((int)puVar5 + 0xd) = 1;
      puVar5[3] = 0xf0;
      puVar5[5] = (ushort)DAT_0800eea8;
      *DAT_0800eeac = (short)uVar4;
      *(undefined1 *)(iVar3 + DAT_0800eeb0) = 0;
      *pbVar9 = bVar1 + 1;
      goto LAB_0800ee74;
    }
    if ((bVar2 != 3) ||
       (cVar8 = *(char *)(DAT_0800ee24 + DAT_0800efd4) + -1,
       *(char *)(DAT_0800ee24 + DAT_0800efd4) = cVar8, cVar8 != '\0')) goto LAB_0800ef6a;
    *(undefined1 *)(DAT_0800efd8 + 1) = 0;
    *DAT_0800efdc = (ushort)DAT_0800efe0 & *DAT_0800efdc;
  }
  *pbVar9 = bVar1 + 1;
LAB_0800ef6a:
  piVar7 = DAT_0800efec;
  if ((*(ushort *)(DAT_0800efe4 + DAT_0800efe8) >> 8 == 4) &&
     ((*(ushort *)(DAT_0800efe4 + DAT_0800efe8) & 0xff) == 1)) {
    puVar12 = (undefined1 *)(DAT_0800efe4 + DAT_0800eff0);
    uVar10 = FUN_08129120(*puVar12,6);
    iVar3 = DAT_0800eff4;
    FUN_08001ea4(*piVar7 + (uVar10 & 0xff) * 0x14 + DAT_0800eff4,0x4000);
    uVar10 = FUN_08129120(*puVar12,6);
    FUN_08002208(*piVar7 + (uVar10 & 0xff) * 0x14 + iVar3 + 0xc,0);
  }
  return in_lr;
}


