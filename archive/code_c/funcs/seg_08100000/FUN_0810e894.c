// undefined FUN_0810e894(void)
// entry 0x810e894


undefined4 FUN_0810e894(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short *psVar7;
  undefined2 *puVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  short *psVar12;
  undefined4 in_lr;
  uint local_30;
  uint local_2c;
  
  bVar1 = *(byte *)(param_1 + 5);
  uVar2 = (uint)bVar1;
  iVar11 = *(int *)(DAT_0810e8e0 + 4);
  if (*(char *)(param_1 + 4) == '\x01') {
    local_30 = (uint)(*(short *)((param_2 & 0xff) * 2 + DAT_0810e8e4) * 0x1c00) >> 0x10;
    if (*(char *)(param_1 + 6) == '\0') {
      local_2c = 1;
      iVar3 = local_30 << 0x10;
    }
    else {
      iVar3 = local_30 * 0x10000;
      local_2c = 0x1dU - (iVar3 >> 0x10) & 0xffff;
    }
    sVar9 = (short)local_2c;
    *(ushort *)(DAT_0810e9e0 + 4) =
         (sVar9 + (short)((uint)iVar3 >> 0x10)) * 8 + 3U & 0xff |
         sVar9 * 0x800 + (short)DAT_0810e9e4;
    psVar7 = (short *)(iVar11 + ((int)sVar9 + (uVar2 - 1) * 0x20) * 2 + -2);
    iVar4 = ((iVar3 >> 0x10) + 2) * 2;
    FUN_08000ab4(DAT_0810e9e8,psVar7,iVar4);
    FUN_08000ab4(DAT_0810e9ec,iVar11 + ((int)sVar9 + (uVar2 + 6) * 0x20) * 2 + -2,iVar4);
    sVar9 = (short)DAT_0810e9f0;
    *psVar7 = sVar9;
    psVar7[0x20] = (short)DAT_0810e9f4;
    sVar10 = (short)DAT_0810e9f8;
    psVar7[0x40] = sVar10;
    psVar7[0x60] = sVar10;
    psVar7[0x80] = sVar10;
    psVar7[0xa0] = sVar10;
    psVar7[0xc0] = sVar9 + 2;
    psVar7[0xe0] = sVar9 + 3;
    psVar7 = psVar7 + (iVar3 >> 0x10) + 1;
    sVar9 = (short)DAT_0810e9fc;
    *psVar7 = sVar9;
    psVar7[0x20] = sVar9 + 1;
    sVar9 = sVar9 + 6;
    psVar7[0x40] = sVar9;
    psVar7[0x60] = sVar9;
    psVar7[0x80] = sVar9;
    psVar7[0xa0] = sVar9;
    psVar7[0xc0] = (short)DAT_0810ea00;
    psVar7[0xe0] = 0x6d0;
  }
  else {
    local_30 = ((*(short *)((param_2 & 0xff) * 2 + DAT_0810ea30) * 0xb0 >> 8) + 0x37U & 0x7ffff) >>
               3;
    if (*(char *)(param_1 + 6) == '\0') {
      local_2c = 1;
      iVar3 = local_30 << 0x10;
    }
    else {
      iVar3 = local_30 * 0x10000;
      local_2c = 0x1dU - (iVar3 >> 0x10) & 0xffff;
    }
    sVar10 = (short)local_2c;
    iVar4 = iVar3 >> 0x10;
    *(ushort *)(DAT_0810eb84 + 4) =
         (sVar10 + (short)((uint)iVar3 >> 0x10)) * 8 + 3U & 0xff |
         sVar10 * 0x800 + (short)DAT_0810eb88;
    puVar8 = (undefined2 *)(iVar11 + ((int)sVar10 + (uVar2 - 1) * 0x20) * 2 + -2);
    iVar3 = (iVar4 + 2) * 2;
    FUN_08000ab4(DAT_0810eb8c,puVar8,iVar3);
    FUN_08000ab4(DAT_0810eb90,iVar11 + ((int)sVar10 + (uVar2 + 6) * 0x20) * 2 + -2,iVar3);
    if (*(char *)(param_1 + 6) == '\0') {
      *puVar8 = 0x2d4;
      sVar10 = (short)DAT_0810eb94;
      puVar8[0x20] = sVar10;
      puVar8[0x40] = 0x2d8;
      puVar8[0x60] = 0x2d8;
      puVar8[0x80] = 0x2d8;
      puVar8[0xa0] = 0x2d8;
      puVar8[0xc0] = sVar10 + 1;
      puVar8[0xe0] = 0x2d7;
      FUN_08000ab4(DAT_0810eb98,puVar8 + 1,0xc);
      FUN_08000ab4(DAT_0810eb9c,puVar8 + 0xe1,0xc);
      sVar10 = (short)DAT_0810eba0;
      puVar8[7] = sVar10;
      puVar8[0x27] = (short)DAT_0810eba4;
      sVar10 = sVar10 + 4;
      puVar8[0x47] = sVar10;
      puVar8[0x67] = sVar10;
      puVar8[0x87] = sVar10;
      puVar8[0xa7] = sVar10;
      sVar10 = (short)DAT_0810eba8;
      puVar8[199] = sVar10;
      puVar8[0xe7] = sVar10 + 1;
      psVar12 = puVar8 + iVar4 + 1;
      *psVar12 = (short)DAT_0810ebac;
      uVar6 = DAT_0810ebb0;
      psVar12[0x20] = (short)DAT_0810ebb0;
      uVar5 = DAT_0810ebb4;
      psVar12[0x40] = sVar9;
      psVar12[0x60] = sVar9;
      psVar12[0x80] = sVar9;
      sVar9 = (short)uVar5;
      psVar12[0xa0] = sVar9;
      psVar7 = psVar12 + 0xc0;
      uVar5 = DAT_0810ebb8;
    }
    else {
      psVar7 = puVar8 + iVar4 + -6;
      sVar10 = (short)DAT_0810ecdc;
      *psVar7 = sVar10;
      sVar9 = (short)DAT_0810ece0;
      psVar7[0x20] = sVar9;
      sVar10 = sVar10 + 4;
      psVar7[0x40] = sVar10;
      psVar7[0x60] = sVar10;
      psVar7[0x80] = sVar10;
      psVar7[0xa0] = sVar10;
      psVar7[0xc0] = sVar9 + 1;
      psVar7[0xe0] = sVar9 + 2;
      puVar8 = (undefined2 *)((int)psVar7 - (iVar4 * 2 + -0xc));
      *puVar8 = (short)DAT_0810ece4;
      sVar9 = (short)DAT_0810ece8;
      puVar8[0x20] = sVar9;
      sVar9 = sVar9 + 5;
      puVar8[0x40] = sVar9;
      puVar8[0x60] = sVar9;
      puVar8[0x80] = sVar9;
      puVar8[0xa0] = sVar9;
      sVar9 = (short)DAT_0810ecec;
      puVar8[0xc0] = sVar9;
      puVar8[0xe0] = sVar9 + 1;
      FUN_08000ab4(DAT_0810ecf0,puVar8 + iVar4 + -5,0xc);
      FUN_08000ab4(DAT_0810ecf4,puVar8 + iVar4 + 0xdb,0xc);
      psVar12 = puVar8 + iVar4 + 1;
      sVar9 = (short)DAT_0810ecf8;
      *psVar12 = sVar9;
      uVar6 = DAT_0810ecfc;
      puVar8[iVar4 + 0x21] = (short)DAT_0810ecfc;
      sVar9 = sVar9 + 4;
      puVar8[iVar4 + 0x41] = sVar9;
      puVar8[iVar4 + 0x61] = sVar9;
      puVar8[iVar4 + 0x81] = sVar9;
      puVar8[iVar4 + 0xa1] = sVar9;
      psVar7 = puVar8 + iVar4 + 0xc1;
      uVar5 = DAT_0810ed00;
    }
    *psVar7 = (short)uVar5;
    psVar12[0xe0] = (short)uVar6 + 2;
    FUN_0810e808(param_1);
  }
  iVar11 = DAT_0810ed04;
  *(undefined1 *)(DAT_0810ed04 + 0x598) = (undefined1)local_2c;
  *(undefined1 *)(iVar11 + DAT_0810ed08) = (undefined1)local_30;
  *(byte *)(iVar11 + DAT_0810ed0c) = bVar1;
  *(undefined1 *)(iVar11 + DAT_0810ed10) = 6;
  return in_lr;
}


