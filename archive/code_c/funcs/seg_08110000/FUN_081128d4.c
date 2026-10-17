// undefined FUN_081128d4(void)
// entry 0x81128d4


undefined4 FUN_081128d4(void)

{
  ushort *puVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 in_lr;
  
  pbVar2 = DAT_081129ac;
  uVar13 = 0;
  *DAT_081129ac = *DAT_081129ac + 1;
  iVar5 = DAT_081129b8;
  iVar3 = DAT_081129b4;
  iVar12 = *(short *)((uint)*pbVar2 * 2 + DAT_081129b0) * 0x10 + 0x1400 >> 1;
  uVar8 = 0;
  do {
    *(undefined2 *)((short)uVar8 * 2 + iVar3) = *(undefined2 *)((uVar13 >> 0xc) * 2 + iVar5);
    iVar6 = DAT_081129b8;
    iVar4 = DAT_081129b4;
    uVar13 = uVar13 + iVar12;
    uVar9 = (int)(short)uVar8 + 1;
    uVar8 = uVar9 & 0xffff;
    iVar10 = uVar9 * 0x10000;
    iVar11 = iVar10 >> 0x10;
  } while (iVar11 < 0x20);
  puVar1 = DAT_081129bc;
  while (DAT_081129bc = puVar1, iVar11 < 0x40) {
    *(undefined2 *)((iVar10 >> 0x10) * 2 + iVar4) = *(undefined2 *)((uVar13 >> 0xc) * 2 + iVar6);
    uVar13 = uVar13 + (iVar12 * -0x20 + 0x40000U >> 5);
    iVar10 = ((iVar10 >> 0x10) + 1) * 0x10000;
    puVar1 = DAT_081129bc;
    iVar11 = iVar10 >> 0x10;
  }
  uVar13 = 4;
  do {
    uVar8 = (uint)(short)uVar13;
    if (((int)(uint)*puVar1 >> (uVar8 & 0xff) & 1U) != 0) {
      FUN_081129d4(uVar8 * 0x20 + DAT_081129c0,0x10,DAT_081129c4,DAT_081129b4);
    }
    uVar7 = DAT_081129c4;
    iVar3 = DAT_081129b4;
    uVar13 = uVar8 + 1 & 0xffff;
  } while ((int)((uVar8 + 1) * 0x10000) >> 0x10 < 10);
  FUN_081129d4(DAT_081129c8,0x10,DAT_081129c4,DAT_081129b4);
  FUN_081129d4(DAT_081129cc,0x10,uVar7,iVar3);
  FUN_081129d4(DAT_081129d0,0xe0,uVar7,iVar3);
  return in_lr;
}


