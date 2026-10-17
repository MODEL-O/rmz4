// undefined FUN_08007830(void)
// entry 0x8007830


undefined4 FUN_08007830(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  sbyte *psVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uVar7 = *(ushort *)(DAT_080078a8 + 0x1d0) & 0x7f;
  iVar3 = *(int *)((uint)(*(byte *)(DAT_080078a8 + DAT_080078b0) >> 4) * 4 + uVar7 * 8 +
                  DAT_080078ac);
  uVar5 = (uint)*(byte *)((*param_1 >> 0xc) + DAT_080078b4);
  uVar2 = (uint)*(byte *)((param_1[1] >> 0xc) + DAT_080078b8);
  psVar4 = *(sbyte **)(iVar3 + 0x6c);
  if (((byte)psVar4[2] <= uVar5) || ((byte)psVar4[3] <= uVar2)) goto LAB_0800796c;
  bVar1 = psVar4[(uVar2 << *psVar4) + uVar5 + 4];
  if (*(ushort *)(DAT_080078a8 + DAT_080078bc) >> 8 == uVar7) {
    if ((ushort)(bVar1 >> 4) != (*(ushort *)(DAT_080078a8 + DAT_080078bc) & 0xff)) {
LAB_080078c4:
      piVar8 = (int *)(uVar7 * 4 + DAT_0800791c);
      iVar6 = (uint)(bVar1 >> 4) * 0x14;
      FUN_08001ea4((int)piVar8 + iVar6 + *piVar8,0x4000);
      FUN_08002208((int)piVar8 + iVar6 + *piVar8 + 0xc,0);
      *(ushort *)(DAT_08007920 + DAT_08007924) = (ushort)(bVar1 >> 4) | (ushort)(uVar7 << 8);
    }
  }
  else if (bVar1 >> 4 != 0xff) goto LAB_080078c4;
  uVar2 = bVar1 & 0xf;
  if (*(ushort *)(DAT_08007920 + DAT_08007928) >> 8 == uVar7) {
    if (uVar2 == (*(ushort *)(DAT_08007920 + DAT_08007928) & 0xff)) goto LAB_0800796c;
  }
  else if (uVar2 == 0xff) goto LAB_0800796c;
  piVar8 = (int *)(uVar7 * 4 + DAT_0800797c);
  uVar2 = bVar1 & 0xf;
  iVar6 = uVar2 * 0x14;
  FUN_08001ea4((int)piVar8 + iVar6 + *piVar8,0x4000);
  FUN_08002208((int)piVar8 + iVar6 + *piVar8 + 0xc,0);
  *(ushort *)(DAT_08007980 + DAT_08007984) = (ushort)uVar2 | (ushort)(uVar7 << 8);
LAB_0800796c:
  return iVar3;
}


