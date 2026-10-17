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
  (*(ushort *)0x02000a00) = (ushort)0x0000c1ff & (*(ushort *)0x02000a00);
  uVar5 = (uint)(*(ushort *)(0x02000ab0 + 0x000007d4) >> 8);
  if ((uVar5 != 0xff) && (uVar2 = *(ushort *)(0x02000ab0 + 0x000007d4) & 0xff, uVar2 != 0xff)) {
    piVar6 = (int *)(uVar5 * 4 + 0x08df2000);
    iVar4 = uVar2 * 0x14;
    FUN_08001d30((int)piVar6 + iVar4 + *piVar6,0x4000);
    FUN_08002208((int)piVar6 + iVar4 + *piVar6 + 0xc,0);
  }
  uVar5 = (uint)(*(ushort *)(0x02000ab0 + 0x000007d6) >> 8);
  if ((uVar5 != 0xff) && (uVar2 = *(ushort *)(0x02000ab0 + 0x000007d6) & 0xff, uVar2 != 0xff)) {
    piVar6 = (int *)(uVar5 * 4 + 0x08df2000);
    iVar4 = uVar2 * 0x14;
    FUN_08001d30((int)piVar6 + iVar4 + *piVar6,0x4000);
    FUN_08002208((int)piVar6 + iVar4 + *piVar6 + 0xc,0);
  }
  iVar4 = 0x02000ab0;
  puVar1 = 0x02000a00;
  piVar6 = (int *)(0x02000ab0 + 0x5c);
  iVar3 = 2;
  do {
    *piVar6 = *piVar6 + 0x2000;
    piVar6[1] = piVar6[1] + 0x2000;
    piVar6[6] = piVar6[6] + 0x2000;
    piVar6[7] = piVar6[7] + 0x2000;
    piVar6 = piVar6 + 0x22;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *puVar1 = (ushort)0x0000f0ff & *puVar1 | *(short *)(iVar4 + 0x7d8) << 8;
  iVar3 = 0x000007da;
  puVar1[3] = *(ushort *)(iVar4 + 0x000007da);
  puVar1[4] = *(ushort *)(iVar4 + 0x7dc);
  puVar1[5] = *(ushort *)(iVar4 + iVar3 + 4);
  *(undefined2 *)(iVar4 + 0x0002c002) = 1;
  return;
}


