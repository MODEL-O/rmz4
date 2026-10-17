// undefined FUN_080e88dc(void)
// entry 0x80e88dc


undefined4 FUN_080e88dc(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  undefined4 in_lr;
  
  iVar7 = DAT_080e8a28;
  iVar6 = DAT_080e8a24;
  puVar5 = DAT_080e8a20;
  iVar4 = DAT_080e8994;
  iVar3 = DAT_080e8990;
  puVar2 = DAT_080e898c;
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  if (param_2 != 0xff) {
    if (param_2 == 8) {
      param_3 = param_3 + 1 & 1;
    }
    uVar8 = (uint)*(byte *)(param_3 + param_2 * 2 + DAT_080e8988);
    if (param_3 == 0) {
      uVar12 = 0;
      do {
        bVar1 = *(byte *)(uVar12 + DAT_080e8a2c);
        uVar9 = *puVar5 * iVar6 + iVar7;
        puVar11 = (ushort *)(uVar12 * 2 + (param_4 & 0xff) * 0x18 + DAT_080e8a30);
        uVar10 = (uVar9 & 0x7fffffff) * iVar6 + iVar7;
        *puVar5 = uVar10 & 0x7fffffff;
        FUN_080e8840(param_1,(uVar8 - bVar1) - (((uVar9 & 0x7fffffff) >> 0x10 & 0xf) - 8) & 0xff,
                     ((uVar10 & 0x7fffffff) >> 0x10 & 0xff) + (uint)*puVar11 & 0xffff);
        uVar12 = uVar12 + 1 & 0xff;
      } while (uVar12 < 8);
    }
    else {
      uVar12 = 0;
      do {
        bVar1 = *(byte *)(uVar12 + DAT_080e8998);
        uVar9 = *puVar2 * iVar3 + iVar4;
        puVar11 = (ushort *)(uVar12 * 2 + (param_4 & 0xff) * 0x18 + DAT_080e899c);
        uVar10 = (uVar9 & 0x7fffffff) * iVar3 + iVar4;
        *puVar2 = uVar10 & 0x7fffffff;
        FUN_080e8840(param_1,(uVar8 + bVar1) - (((uVar9 & 0x7fffffff) >> 0x10 & 0xf) - 8) & 0xff,
                     ((uVar10 & 0x1ffffff) >> 0x10) + (uint)*puVar11 & 0xffff);
        uVar12 = uVar12 + 1 & 0xff;
      } while (uVar12 < 8);
    }
  }
  return in_lr;
}


