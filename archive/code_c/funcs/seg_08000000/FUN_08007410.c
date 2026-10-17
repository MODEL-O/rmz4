// undefined FUN_08007410(void)
// entry 0x8007410


undefined4 FUN_08007410(int param_1,int param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  undefined4 in_lr;
  
  uVar3 = (uint)param_3[1];
  puVar6 = param_3 + 2;
  uVar4 = (uint)*(byte *)(*(int *)(*(int *)((uint)(*(byte *)(DAT_080074b0 + DAT_080074b8) >> 4) * 4
                                            + (*(byte *)(DAT_080074b0 + 0x1d0) & 0x7f) * 8 +
                                           DAT_080074b4) + 0xc) + 2);
  iVar7 = (uVar4 * 0xf * param_2 + param_1) * 2 + DAT_080074b0 + DAT_080074bc;
  uVar5 = 0;
  if (uVar3 != 0 && -1 < (int)(uVar3 * 0x10000)) {
    iVar1 = (int)((uint)*param_3 << 0x11) >> 0x10;
    do {
      FUN_08000b30(puVar6,iVar7,iVar1);
      puVar6 = (ushort *)((int)puVar6 + iVar1);
      iVar7 = iVar7 + uVar4 * 0x1e;
      uVar2 = uVar5 * 0x10000 + 0x10000;
      uVar5 = uVar2 >> 0x10;
    } while ((int)uVar2 < (int)(uVar3 * 0x10000));
  }
  *(undefined2 *)(DAT_080074b0 + 0x2c000) = 1;
  return in_lr;
}


