// undefined FUN_0802f1cc(void)
// entry 0x802f1cc


undefined4 FUN_0802f1cc(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ushort *puVar11;
  uint uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  undefined4 in_lr;
  
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0802f2f4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar3 = FUN_0802b7d8(param_1);
  FUN_0801cf00(param_1,uVar3);
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar5 = FUN_0800864c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0802f2f8,param_1 + 0x54,0x10);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0802f2fc;
  FUN_08038b38(param_1);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xfd) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0x101) = 0;
  *(undefined1 *)(param_1 + 0x105) = 0;
  *(undefined1 *)(param_1 + 0x102) = 0;
  *(undefined1 *)(param_1 + 0x106) = 0;
  *(undefined1 *)(param_1 + 0x103) = 0;
  *(undefined1 *)(param_1 + 0x107) = 0;
  *(short *)(param_1 + 0x10e) = (short)DAT_0802f300;
  if ((*(byte *)(param_1 + 199) < 4) && (*DAT_0802f304 == 0x11)) {
    if (2 < *(byte *)(param_1 + 0xc0)) {
      *(undefined1 *)(param_1 + 0xc0) = 2;
    }
    if (2 < *(byte *)(param_1 + 0xc1)) {
      *(undefined1 *)(param_1 + 0xc1) = 2;
    }
    *(undefined1 *)(param_1 + 0xc3) = 0;
    *(undefined1 *)(param_1 + 0xe6) = 0;
  }
  puVar6 = (undefined1 *)(param_1 + 0xfa);
  *puVar6 = 2;
  if (*(byte *)(param_1 + 0xc0) < 3) {
    *(byte *)(param_1 + 0xf8) = *(byte *)(param_1 + 0xc0);
  }
  else {
    *(undefined1 *)(param_1 + 0xf8) = 2;
    *puVar6 = *(undefined1 *)(param_1 + 0xc0);
  }
  if (*(byte *)(param_1 + 0xc1) < 3) {
    *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xc1);
  }
  else {
    *(undefined1 *)(param_1 + 0xf9) = 2;
    *puVar6 = *(undefined1 *)(param_1 + 0xc1);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  pbVar13 = (byte *)(param_1 + 0x142);
  *pbVar13 = *pbVar13 & 0xef;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + DAT_0802f490) = 0;
  *pbVar13 = *pbVar13 & 0xf1;
  *(undefined1 *)(param_1 + 0x13e) = 0;
  *pbVar13 = *pbVar13 & 0xbf;
  *(undefined2 *)(param_1 + 0x140) = 0;
  FUN_08039f84(param_1);
  uVar5 = DAT_0802f4a8;
  uVar12 = 0;
  puVar14 = (undefined1 *)(param_1 + DAT_0802f494);
  iVar7 = DAT_0802f494 + 0x13;
  puVar9 = (undefined1 *)(DAT_0802f498 + param_1);
  puVar6 = (undefined1 *)(DAT_0802f49c + param_1);
  puVar8 = (undefined2 *)(param_1 + DAT_0802f4a0);
  puVar10 = (undefined1 *)(param_1 + DAT_0802f4a4);
  pbVar13 = (byte *)(param_1 + 0xe8);
  puVar11 = (ushort *)(param_1 + 0x198);
  do {
    *puVar11 = *puVar11 | (ushort)uVar5;
    puVar11 = puVar11 + 1;
    uVar12 = uVar12 + 1;
  } while (uVar12 < 0x10);
  *puVar14 = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined1 *)(iVar7 + param_1) = 0;
  *puVar9 = 0;
  *puVar6 = 0;
  *(undefined1 *)(param_1 + 0x278) = 0;
  *puVar8 = 0;
  *puVar10 = 0;
  *(undefined1 *)(param_1 + 0x176) = 0;
  if (*pbVar13 != 0) {
    bVar1 = FUN_0802b61c(param_1);
    if (*pbVar13 <= bVar1) goto LAB_0802f41c;
  }
  bVar1 = FUN_0802b61c(param_1);
  *pbVar13 = bVar1;
LAB_0802f41c:
  *(ushort *)(param_1 + 0xa4) = (ushort)*pbVar13;
  uVar5 = FUN_080d1558(param_1,0,0);
  FUN_080d1558(param_1,uVar5,1);
  if ((*(short *)(DAT_0802f4ac + 0x1d0) == 9) || (*(short *)(DAT_0802f4ac + 0x1d0) == 0x10)) {
    FUN_080dec30(param_1);
  }
  FUN_08109320(param_1);
  if (*(byte *)(param_1 + 199) < 4) {
    FUN_08006984(0x5a);
  }
  uVar2 = FUN_0803891c(param_1);
  FUN_0802b53c(param_1,uVar2);
  FUN_0802ad9c(*(undefined1 *)(param_1 + 0xc2));
  FUN_0802f4b0(param_1);
  return in_lr;
}


