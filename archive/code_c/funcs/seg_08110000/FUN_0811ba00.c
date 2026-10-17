// undefined FUN_0811ba00(void)
// entry 0x811ba00


undefined4 FUN_0811ba00(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  short sVar9;
  undefined2 *puVar10;
  byte *pbVar11;
  short *psVar12;
  short *psVar13;
  ushort *puVar14;
  uint uVar15;
  int iVar16;
  undefined4 in_lr;
  
  iVar4 = DAT_0811bcac;
  uVar2 = DAT_0811bca8;
  iVar1 = DAT_0811bca4;
  iVar16 = *(int *)(param_1 + DAT_0811bca0);
  uVar15 = 0;
  pbVar11 = (byte *)(iVar16 + 0xde);
  do {
    puVar14 = (ushort *)(uVar15 * 2 + param_2 + 0x54);
    *puVar14 = (ushort)uVar2 & *puVar14 | (ushort)*(byte *)((uint)*pbVar11 * 3 + iVar4) << 0xc;
    iVar5 = DAT_0811bcb8;
    uVar3 = DAT_0811bca8;
    uVar15 = uVar15 + 1 & 0xff;
  } while (uVar15 < 5);
  uVar15 = 0;
  pbVar8 = (byte *)(iVar16 + 0xdf);
  psVar12 = (short *)(iVar16 + 0x260);
  puVar10 = (undefined2 *)(iVar16 + DAT_0811bcb0);
  psVar13 = (short *)(iVar16 + DAT_0811bcb4);
  do {
    puVar14 = (ushort *)(uVar15 * 2 + param_2 + 0x60);
    *puVar14 = (ushort)uVar3 & *puVar14 | (ushort)*(byte *)((uint)*pbVar11 * 3 + iVar5) << 0xc;
    iVar4 = DAT_0811bcbc;
    uVar2 = DAT_0811bca8;
    uVar15 = uVar15 + 1 & 0xff;
  } while (uVar15 < 5);
  uVar15 = 0;
  do {
    puVar14 = (ushort *)(uVar15 * 2 + param_2 + 0x6c);
    *puVar14 = (ushort)uVar2 & *puVar14 | (ushort)*(byte *)((uint)*pbVar11 * 3 + iVar4) << 0xc;
    iVar5 = DAT_0811bcac;
    uVar3 = DAT_0811bca8;
    uVar15 = uVar15 + 1 & 0xff;
  } while (uVar15 < 4);
  uVar15 = 0;
  do {
    puVar14 = (ushort *)(uVar15 * 2 + param_2 + 0x294);
    *puVar14 = (ushort)uVar3 & *puVar14 | (ushort)*(byte *)((uint)*pbVar8 * 3 + iVar5) << 0xc;
    iVar4 = DAT_0811bcb8;
    uVar2 = DAT_0811bca8;
    uVar15 = uVar15 + 1 & 0xff;
  } while (uVar15 < 5);
  uVar15 = 0;
  do {
    puVar14 = (ushort *)(uVar15 * 2 + param_2 + 0x2a0);
    *puVar14 = (ushort)uVar2 & *puVar14 | (ushort)*(byte *)((uint)*pbVar8 * 3 + iVar4) << 0xc;
    iVar5 = DAT_0811bcbc;
    uVar3 = DAT_0811bca8;
    uVar15 = uVar15 + 1 & 0xff;
  } while (uVar15 < 5);
  uVar15 = 0;
  do {
    puVar14 = (ushort *)(uVar15 * 2 + param_2 + 0x2ac);
    *puVar14 = (ushort)uVar3 & *puVar14 | (ushort)*(byte *)((uint)*pbVar8 * 3 + iVar5) << 0xc;
    iVar6 = DAT_0811bcc4;
    iVar4 = DAT_0811bcc0;
    uVar2 = DAT_0811bca8;
    uVar15 = uVar15 + 1 & 0xff;
  } while (uVar15 < 5);
  uVar15 = 0;
  do {
    puVar14 = (ushort *)(uVar15 * 2 + param_2 + iVar4);
    *puVar14 = (ushort)uVar2 & *puVar14 |
               (ushort)*(byte *)((uint)*(byte *)(iVar16 + 0xe1) * 2 + iVar6) << 0xc;
    iVar7 = DAT_0811bccc;
    iVar5 = DAT_0811bcc8;
    uVar3 = DAT_0811bca8;
    uVar15 = uVar15 + 1 & 0xff;
  } while (uVar15 < 2);
  uVar15 = 0;
  do {
    puVar14 = (ushort *)(uVar15 * 2 + param_2 + iVar5);
    *puVar14 = (ushort)uVar3 & *puVar14 |
               (ushort)*(byte *)((uint)*(byte *)(iVar16 + 0xe1) * 2 + iVar7) << 0xc;
    uVar15 = uVar15 + 1 & 0xff;
  } while (uVar15 < 2);
  pbVar11 = (byte *)(param_1 + 0xde0);
  FUN_0811b904(param_2,*psVar12,0x73,*(undefined1 *)((uint)*pbVar11 * 5 + iVar1));
  FUN_0811b904(param_2,*(undefined2 *)(iVar16 + 0x25c),0x93,
               *(undefined1 *)((uint)*pbVar11 * 5 + iVar1 + 1));
  FUN_0811b904(param_2,*puVar10,0xb3,*(undefined1 *)((uint)*pbVar11 * 5 + iVar1 + 2));
  FUN_0811b904(param_2,*psVar13,0xd3,*(undefined1 *)((uint)*pbVar11 * 5 + iVar1 + 3));
  FUN_0811b904(param_2,*(undefined2 *)(iVar16 + 0x264),0xf3,
               *(undefined1 *)((uint)*pbVar11 * 5 + iVar1 + 4));
  if (*pbVar8 == 0) {
    FUN_0811b904(param_2,*psVar12,DAT_0811bcd0,6);
    if (*psVar12 == 4) {
      FUN_0811b904(param_2,*psVar13,0x1a6,6);
      *(short *)(param_2 + DAT_0811bcd4) = (short)DAT_0811bcd8;
      sVar9 = *psVar12;
    }
    else {
      FUN_0811b904(param_2,*psVar13,DAT_0811bcf8,6);
      *(short *)(param_2 + 0x354) = (short)DAT_0811bcfc;
      sVar9 = *psVar12;
    }
  }
  else {
    if (*pbVar8 != 1) {
      FUN_0811b904(param_2,*psVar12,DAT_0811bdc4,6);
      FUN_0811b904(param_2,*psVar13,DAT_0811bdc8,6);
      sVar9 = (short)DAT_0811bdcc;
      *(short *)(param_2 + 0x364) = sVar9;
      *(short *)(param_2 + DAT_0811bdd0) = sVar9 + 1;
      *(short *)(param_2 + 0x368) = sVar9 + 2;
      *(short *)(param_2 + DAT_0811bdd4) = sVar9 + 0x2c;
      *(short *)(param_2 + 0x36c) = sVar9 + 0x2d;
      *(short *)(param_2 + DAT_0811bdd8) = sVar9 + 0x2e;
      *(short *)(param_2 + 0x370) = sVar9 + 0x30;
      *(short *)(param_2 + DAT_0811bddc) = sVar9 + 0x31;
      *(short *)(param_2 + 0x374) = sVar9 + 0x32;
      *(short *)(param_2 + DAT_0811bde0) = sVar9 + 0x33;
      return in_lr;
    }
    FUN_0811b904(param_2,*psVar12,DAT_0811bd20,6);
    sVar9 = *psVar13;
  }
  FUN_0811b904(param_2,sVar9,DAT_0811bd24,6);
  return in_lr;
}


