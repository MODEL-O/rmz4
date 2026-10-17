// undefined FUN_080ac124(void)
// entry 0x80ac124


undefined4 FUN_080ac124(int param_1)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 in_lr;
  int local_bc;
  undefined1 auStack_b8 [124];
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  undefined1 *local_28;
  int local_24;
  
  puVar2 = DAT_080ac28c;
  piVar9 = &local_bc;
  iVar10 = *(int *)(param_1 + 8);
  DAT_080ac28c[5] = 0xa0;
  local_3c = (*(int *)(iVar10 + 0x54) + 0x7800) - *(int *)(DAT_080ac290 + 0x38);
  local_38 = (*(int *)(iVar10 + 0x58) + 0x5000) - *(int *)(DAT_080ac290 + 0x3c);
  bVar1 = *(byte *)(iVar10 + 0xbd);
  local_34 = (uint)*(ushort *)(iVar10 + 0xc0);
  local_30 = (uint)*(ushort *)(iVar10 + 0xc2);
  *puVar2 = *puVar2 | 0x4000;
  *(undefined1 *)((int)puVar2 + 0xd) = 0xfd;
  *(undefined1 *)(puVar2 + 7) = 0xff;
  iVar10 = DAT_080ac294;
  iVar12 = 0;
  local_28 = auStack_b8;
  local_2c = (bVar1 + 0x40 & 0xff) << 1;
  piVar13 = DAT_080ac298;
  do {
    local_24 = iVar12 << 3;
    iVar3 = local_34 * *piVar13;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar4 = local_30 * piVar13[1];
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar11 = (int)*(short *)(local_2c + iVar10);
    iVar5 = iVar11 * (iVar3 >> 8);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar8 = (int)*(short *)((uint)bVar1 * 2 + iVar10);
    iVar6 = iVar8 * (iVar4 >> 8);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *piVar9 = local_3c + ((iVar5 >> 8) - (iVar6 >> 8));
    piVar7 = (int *)(local_28 + local_24);
    iVar8 = iVar8 * (iVar3 >> 8);
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar11 = iVar11 * (iVar4 >> 8);
    if (iVar11 < 0) {
      iVar11 = iVar11 + 0xff;
    }
    *piVar7 = local_38 + (iVar8 >> 8) + (iVar11 >> 8);
    *piVar9 = *piVar9 >> 8;
    *piVar7 = *piVar7 >> 8;
    piVar9 = piVar9 + 2;
    piVar13 = piVar13 + 2;
    iVar12 = iVar12 + 1;
  } while (iVar12 < 6);
  iVar10 = FUN_08000a70(0x140);
  if (iVar10 != 0) {
    FUN_08000ab4(0,iVar10,0x140);
    FUN_080ac340(iVar10,&local_bc,6,0);
    iVar12 = DAT_080ac29c;
    *(int *)(DAT_080ac29c + 0x174) = iVar10;
    *(undefined4 *)(iVar12 + 0x178) = DAT_080ac2a0;
    *(undefined4 *)(iVar12 + 0x17c) = DAT_080ac2a4;
  }
  return in_lr;
}


