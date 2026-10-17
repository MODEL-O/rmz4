// undefined FUN_08006d80(void)
// entry 0x8006d80


void FUN_08006d80(void)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  *(int *)DAT_08006e70 = (ushort)DAT_08006e74 & *(int *)DAT_08006e70;
  uVar5 = (uint)(*(ushort *)(DAT_08006e78 + DAT_08006e7c) >> 8);
  if ((uVar5 != 0xff) && (uVar2 = *(ushort *)(DAT_08006e78 + DAT_08006e7c) & 0xff, uVar2 != 0xff)) {
    piVar6 = (int *)(uVar5 * 4 + DAT_08006e80);
    iVar4 = uVar2 * 0x14;
    FUN_08001d30((int)piVar6 + iVar4 + *piVar6,0x4000);
    FUN_08002208((int)piVar6 + iVar4 + *piVar6 + 0xc,0);
  }
  uVar5 = (uint)(*(ushort *)(DAT_08006e78 + DAT_08006e84) >> 8);
  if ((uVar5 != 0xff) && (uVar2 = *(ushort *)(DAT_08006e78 + DAT_08006e84) & 0xff, uVar2 != 0xff)) {
    piVar6 = (int *)(uVar5 * 4 + DAT_08006e80);
    iVar4 = uVar2 * 0x14;
    FUN_08001d30((int)piVar6 + iVar4 + *piVar6,0x4000);
    FUN_08002208((int)piVar6 + iVar4 + *piVar6 + 0xc,0);
  }
  iVar4 = DAT_08006e78;
  puVar1 = DAT_08006e70;
  piVar6 = (int *)(DAT_08006e78 + 0x5c);
  iVar3 = 2;
  do {
    *piVar6 = *piVar6 + 0x2000;
    piVar6[1] = piVar6[1] + 0x2000;
    piVar6[6] = piVar6[6] + 0x2000;
    piVar6[7] = piVar6[7] + 0x2000;
    piVar6 = piVar6 + 0x22;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *puVar1 = (ushort)DAT_08006e88 & *puVar1 | *(short *)(iVar4 + 0x7d8) << 8;
  iVar3 = DAT_08006e8c;
  puVar1[3] = *(ushort *)(iVar4 + DAT_08006e8c);
  puVar1[4] = *(ushort *)(iVar4 + 0x7dc);
  puVar1[5] = *(ushort *)(iVar4 + iVar3 + 4);
  *(undefined2 *)(iVar4 + DAT_08006e90) = 1;
  return;
}


