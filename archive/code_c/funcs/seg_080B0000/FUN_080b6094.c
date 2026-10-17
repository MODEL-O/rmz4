// undefined FUN_080b6094(void)
// entry 0x80b6094


undefined4 FUN_080b6094(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_lr;
  int local_38 [4];
  int local_28;
  int local_24;
  
  iVar3 = DAT_080b6158;
  iVar2 = DAT_080b6154;
  puVar1 = DAT_080b6150;
  local_38[0] = *DAT_080b614c;
  local_38[1] = DAT_080b614c[1];
  local_38[2] = DAT_080b614c[2];
  local_38[3] = DAT_080b614c[3];
  iVar10 = *(int *)(param_1 + 0x28);
  uVar5 = DAT_080b6154 * *DAT_080b6150 + DAT_080b6158;
  *DAT_080b6150 = uVar5 & 0x7fffffff;
  uVar5 = ((uVar5 & 0x7fffffff) >> 0x10 & 1) + 2;
  if (uVar5 != 0) {
    do {
      iVar8 = *(int *)(iVar10 + 0x54);
      iVar6 = local_38[(uVar5 & 1) * 2];
      uVar7 = *puVar1 * iVar2 + iVar3;
      uVar9 = uVar7 & 0x7fffffff;
      *puVar1 = uVar9;
      iVar4 = DAT_080b615c;
      local_28 = iVar8 + iVar6 + ((uVar7 & 0x7fffffff) >> 0x10 & 0x1f) * 0x100 + DAT_080b615c;
      iVar8 = *(int *)(iVar10 + 0x58);
      iVar6 = local_38[(uVar5 & 1) * 2 + 1];
      uVar7 = uVar9 * iVar2 + iVar3;
      *puVar1 = uVar7 & 0x7fffffff;
      local_24 = iVar8 + iVar6 + ((uVar7 & 0x7fffffff) >> 0x10 & 0x1f) * 0x100 + iVar4;
      FUN_080e83c8(iVar10,local_38 + 4,0,0);
      uVar5 = uVar5 - 1;
    } while (0 < (int)uVar5);
  }
  return in_lr;
}


