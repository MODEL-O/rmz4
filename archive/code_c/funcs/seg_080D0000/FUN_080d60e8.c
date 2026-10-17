// undefined FUN_080d60e8(void)
// entry 0x80d60e8


undefined4 FUN_080d60e8(int param_1,uint *param_2,uint *param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  
  param_4 = param_4 & 0xff;
  uVar1 = 0xff00;
  if (param_4 != 0) {
    uVar1 = 0xff;
  }
  uVar3 = *param_3;
  uVar7 = *param_2;
  if ((int)uVar7 < (int)uVar3) {
    iVar9 = uVar3 - uVar7;
    iVar10 = 1;
  }
  else {
    iVar9 = uVar7 - uVar3;
    iVar10 = -1;
  }
  uVar4 = param_3[1];
  uVar2 = param_2[1];
  iVar5 = uVar4 - uVar2;
  if (iVar9 < iVar5) {
    puVar8 = (ushort *)(uVar2 * 2 + param_1);
    iVar6 = iVar5;
    while( true ) {
      if (-1 < (int)uVar2) {
        if (0x9f < (int)uVar2) {
          return in_lr;
        }
        if ((int)uVar7 < 0) {
          uVar3 = 0;
        }
        else if ((int)uVar7 < 0xf1) {
          uVar3 = uVar7 & 0xff;
        }
        else {
          uVar3 = 0xf0;
        }
        *puVar8 = *puVar8 & uVar1 | (ushort)(uVar3 << param_4);
      }
      iVar6 = iVar6 - iVar9;
      if (iVar6 < 1) {
        uVar7 = uVar7 + iVar10;
        iVar6 = iVar6 + iVar5;
      }
      if (uVar2 == uVar4) break;
      puVar8 = puVar8 + 1;
      uVar2 = uVar2 + 1;
    }
    return in_lr;
  }
  puVar8 = (ushort *)(uVar2 * 2 + param_1);
  iVar6 = iVar9;
  while( true ) {
    if (-1 < (int)uVar2) {
      if (0x9f < (int)uVar2) {
        return in_lr;
      }
      if ((int)uVar7 < 0) {
        uVar4 = 0;
      }
      else if ((int)uVar7 < 0xf1) {
        uVar4 = uVar7 & 0xff;
      }
      else {
        uVar4 = 0xf0;
      }
      *puVar8 = *puVar8 & uVar1 | (ushort)(uVar4 << param_4);
    }
    iVar6 = iVar6 - iVar5;
    if (iVar6 < 1) {
      puVar8 = puVar8 + 1;
      uVar2 = uVar2 + 1;
      iVar6 = iVar6 + iVar9;
    }
    if (uVar7 == uVar3) break;
    uVar7 = uVar7 + iVar10;
  }
  return in_lr;
}


