// undefined FUN_080abebc(void)
// entry 0x80abebc


undefined4 FUN_080abebc(int param_1)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  undefined4 in_lr;
  int local_c0 [32];
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar2 = DAT_080abfe0;
  piVar11 = local_c0;
  piVar12 = local_c0;
  iVar10 = *(int *)(param_1 + 8);
  bVar1 = *(byte *)(iVar10 + 0xbe);
  DAT_080abfe0[5] = 0xa0;
  local_40 = (*(int *)(iVar10 + 0x54) + 0x7800) - *(int *)(DAT_080abfe4 + 0x38);
  local_3c = (*(int *)(iVar10 + 0x58) + 0x5000) - *(int *)(DAT_080abfe4 + 0x3c);
  uVar8 = (uint)*(byte *)(iVar10 + 0xbd);
  local_34 = (uint)*(ushort *)(iVar10 + 0xc0);
  local_30 = (uint)*(ushort *)(iVar10 + 0xc2);
  if ((bVar1 & 1) == 0) {
    *puVar2 = *puVar2 | 0x4000;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x30;
    *(undefined1 *)(puVar2 + 7) = 0xff;
    local_38 = 4;
    iVar10 = 0;
    local_28 = (uVar8 + 0x40 & 0xff) << 1;
    piVar11 = DAT_080ac110;
    do {
      iVar3 = local_34 * *piVar11;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      iVar4 = local_30 * piVar11[1];
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      local_24 = (int)*(short *)(local_28 + DAT_080ac114);
      iVar5 = (int)*(short *)(local_28 + DAT_080ac114) * (iVar3 >> 8);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      iVar9 = (int)*(short *)(DAT_080ac114 + uVar8 * 2);
      iVar6 = iVar9 * (iVar4 >> 8);
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xff;
      }
      *piVar12 = local_40 + ((iVar5 >> 8) - (iVar6 >> 8));
      piVar7 = local_c0 + iVar10 * 2 + 1;
      iVar9 = iVar9 * (iVar3 >> 8);
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0xff;
      }
      iVar3 = local_24 * (iVar4 >> 8);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *piVar7 = local_3c + (iVar9 >> 8) + (iVar3 >> 8);
      *piVar12 = *piVar12 >> 8;
      *piVar7 = *piVar7 >> 8;
      piVar12 = piVar12 + 2;
      piVar11 = piVar11 + 2;
      iVar10 = iVar10 + 1;
    } while (iVar10 < local_38);
  }
  else {
    *puVar2 = *puVar2 | 0x4000;
    *(undefined1 *)((int)puVar2 + 0xd) = 0xfd;
    *(undefined1 *)(puVar2 + 7) = 0xff;
    local_38 = 6;
    iVar10 = 0;
    local_2c = (uVar8 + 0x40 & 0xff) << 1;
    piVar12 = DAT_080abfe8;
    do {
      iVar3 = local_34 * *piVar12;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      iVar4 = local_30 * piVar12[1];
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      local_24 = (int)*(short *)(local_2c + DAT_080abfec);
      iVar5 = (int)*(short *)(local_2c + DAT_080abfec) * (iVar3 >> 8);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      iVar9 = (int)*(short *)(DAT_080abfec + uVar8 * 2);
      iVar6 = iVar9 * (iVar4 >> 8);
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xff;
      }
      *piVar11 = local_40 + ((iVar5 >> 8) - (iVar6 >> 8));
      piVar7 = local_c0 + iVar10 * 2 + 1;
      iVar9 = iVar9 * (iVar3 >> 8);
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0xff;
      }
      iVar3 = local_24 * (iVar4 >> 8);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *piVar7 = local_3c + (iVar9 >> 8) + (iVar3 >> 8);
      *piVar11 = *piVar11 >> 8;
      *piVar7 = *piVar7 >> 8;
      piVar11 = piVar11 + 2;
      piVar12 = piVar12 + 2;
      iVar10 = iVar10 + 1;
    } while (iVar10 < local_38);
  }
  iVar10 = FUN_08000a70(0x140);
  if (iVar10 != 0) {
    FUN_08000ab4(0,iVar10,0x140);
    FUN_080ac340(iVar10,local_c0,local_38,0);
    iVar3 = DAT_080ac118;
    *(int *)(DAT_080ac118 + 0x174) = iVar10;
    *(undefined4 *)(iVar3 + 0x178) = DAT_080ac11c;
    *(undefined4 *)(iVar3 + 0x17c) = DAT_080ac120;
  }
  return in_lr;
}


