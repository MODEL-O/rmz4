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
  uVar7 = *(ushort *)(0x02000ab0 + 0x1d0) & 0x7f;
  iVar3 = *(int *)((uint)(*(byte *)(0x02000ab0 + 0x0002c010) >> 4) * 4 + uVar7 * 8 +
                  0x0882c5d4);
  uVar5 = (uint)*(byte *)((*param_1 >> 0xc) + 0x0882b9d4);
  uVar2 = (uint)*(byte *)((param_1[1] >> 0xc) + 0x0882b1d4);
  psVar4 = *(sbyte **)(iVar3 + 0x6c);
  if (((byte)psVar4[2] <= uVar5) || ((byte)psVar4[3] <= uVar2)) goto LAB_0800796c;
  bVar1 = psVar4[(uVar2 << *psVar4) + uVar5 + 4];
  if (*(ushort *)(0x02000ab0 + 0x000007d4) >> 8 == uVar7) {
    if ((ushort)(bVar1 >> 4) != (*(ushort *)(0x02000ab0 + 0x000007d4) & 0xff)) {
LAB_080078c4:
      piVar8 = (int *)(uVar7 * 4 + 0x08df2000);
      iVar6 = (uint)(bVar1 >> 4) * 0x14;
      FUN_08001ea4((int)piVar8 + iVar6 + *piVar8,0x4000);
      FUN_08002208((int)piVar8 + iVar6 + *piVar8 + 0xc,0);
      *(ushort *)(0x02000ab0 + 0x000007d4) = (ushort)(bVar1 >> 4) | (ushort)(uVar7 << 8);
    }
  }
  else if (bVar1 >> 4 != 0xff) goto LAB_080078c4;
  uVar2 = bVar1 & 0xf;
  if (*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == uVar7) {
    if (uVar2 == (*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff)) goto LAB_0800796c;
  }
  else if (uVar2 == 0xff) goto LAB_0800796c;
  piVar8 = (int *)(uVar7 * 4 + 0x08df2000);
  uVar2 = bVar1 & 0xf;
  iVar6 = uVar2 * 0x14;
  FUN_08001ea4((int)piVar8 + iVar6 + *piVar8,0x4000);
  FUN_08002208((int)piVar8 + iVar6 + *piVar8 + 0xc,0);
  *(ushort *)(0x02000ab0 + 0x000007d6) = (ushort)uVar2 | (ushort)(uVar7 << 8);
LAB_0800796c:
  return iVar3;
}


