// undefined FUN_08050404(void)
// entry 0x8050404


undefined4 FUN_08050404(int param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 in_lr;
  
  FUN_08001d30(DAT_08050620,
               ((uint)*DAT_08050624 - (uint)(*(ushort *)(DAT_08050620 + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_08050628,((uint)*DAT_0805062c - (uint)*(byte *)(DAT_08050628 + 7)) * 0x20 + 0x200
              );
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801ceec(param_1);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  FUN_080503cc(param_1,DAT_08050630,0x40);
  *(undefined4 *)(param_1 + 0x98) = DAT_08050634;
  iVar3 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar3 = iVar3 + DAT_08050638;
  *(int *)(param_1 + 0x54) = iVar3;
  uVar4 = FUN_08008534(iVar3,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  iVar3 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar5 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar6 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xc4) = iVar3 + (iVar5 - iVar6 >> 1);
  iVar3 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar5 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar6 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 200) = iVar3 + (iVar5 - iVar6 >> 1);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0;
  *(undefined2 *)(param_1 + 0xd2) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar8 = 0;
  do {
    *(undefined1 *)(param_1 + 0xda + uVar8) = 0;
    puVar1 = DAT_08050624;
    iVar3 = DAT_08050620;
    uVar8 = uVar8 + 1 & 0xff;
  } while (uVar8 < 8);
  FUN_08001d30(DAT_08050620 + 0x4b0,
               ((uint)DAT_08050624[0x3c] - (uint)(*(ushort *)(DAT_08050620 + 0x4b6) >> 6)) * 0x20 +
               0x10000);
  puVar2 = DAT_0805062c;
  FUN_08002208(DAT_08050628 + 0x4b0,
               ((uint)DAT_0805062c[0x3c] - (uint)*(byte *)(DAT_08050628 + 0x4b7)) * 0x20 + 0x200);
  iVar5 = DAT_0805063c;
  FUN_08001d30(DAT_0805063c + iVar3,
               ((uint)puVar1[0x3d] - (uint)(*(ushort *)(DAT_0805063c + iVar3 + 6) >> 6)) * 0x20 +
               0x10000);
  FUN_08002208(iVar5 + DAT_08050628,
               ((uint)puVar2[0x3d] - (uint)*(byte *)(iVar5 + DAT_08050628 + 7)) * 0x20 + 0x200);
  FUN_08001d30(iVar3 + 0x4d8,
               ((uint)puVar1[0x3e] - (uint)(*(ushort *)(iVar3 + 0x4de) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_08050628 + 0x4d8,
               ((uint)puVar2[0x3e] - (uint)*(byte *)(DAT_08050628 + 0x4df)) * 0x20 + 0x200);
  iVar5 = DAT_08050640;
  FUN_08001d30(DAT_08050640 + iVar3,
               ((uint)puVar1[0x3f] - (uint)(*(ushort *)(DAT_08050640 + iVar3 + 6) >> 6)) * 0x20 +
               0x10000);
  FUN_08002208(iVar5 + DAT_08050628,
               ((uint)puVar2[0x3f] - (uint)*(byte *)(iVar5 + DAT_08050628 + 7)) * 0x20 + 0x200);
  piVar7 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08050644);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar7 + 4);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  FUN_08050660(param_1);
  return in_lr;
}


