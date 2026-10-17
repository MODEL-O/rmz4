// undefined FUN_08065d1c(void)
// entry 0x8065d1c


undefined4 FUN_08065d1c(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_lr;
  byte local_70 [8];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  byte *apbStack_54 [3];
  byte *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  byte **local_30 [2];
  byte *local_28;
  undefined1 *local_24;
  
  FUN_08129258(local_70,DAT_08065e0c,4);
  local_28 = local_70 + 4;
  FUN_08129258(local_28,DAT_08065e10,4);
  uVar3 = DAT_08065e14;
  local_24 = auStack_68;
  FUN_08129258(local_24,DAT_08065e14,4);
  uVar4 = DAT_08065e18;
  FUN_08129258(auStack_64,DAT_08065e18,4);
  FUN_08129258(auStack_60,DAT_08065e1c,4);
  FUN_08129258(auStack_5c,uVar3,4);
  FUN_08129258(auStack_58,uVar4,4);
  local_48 = local_28;
  local_44 = local_24;
  local_40 = auStack_64;
  FUN_08129258(apbStack_54,&local_48,0xc);
  local_3c = auStack_60;
  local_38 = auStack_5c;
  local_34 = auStack_58;
  FUN_08129258(&local_48,&local_3c,0xc);
  bVar1 = DAT_08065e28 <
          (uint)((*(int *)(*DAT_08065e20 + 0x54) - *(int *)(param_1 + 0x54)) + DAT_08065e24);
  local_30[0] = apbStack_54;
  local_30[1] = &local_48;
  iVar5 = FUN_08066160(param_1);
  pbVar6 = (byte *)(param_1 + 0xcd);
  if (2 < *pbVar6) {
    iVar8 = 0;
    if (local_70[0] == *(byte *)(param_1 + 0xcc)) {
      *local_30[bVar1][iVar5] = 0;
    }
    else {
      do {
        iVar10 = iVar8 + 1;
        if (1 < iVar10) goto LAB_08065e4e;
        iVar2 = iVar8 + 1;
        iVar8 = iVar10;
      } while (local_70[iVar2] != *(byte *)(param_1 + 0xcc));
      local_30[bVar1][iVar5][iVar10] = 0;
    }
  }
LAB_08065e4e:
  if (((*(byte *)(DAT_08065ec0 + DAT_08065ec4) & 0x10) == 0) ||
     (iVar8 = iVar5 << 2, (*(byte *)(DAT_08065ec8 + 4) & 4) != 0)) {
    iVar8 = iVar5 * 4;
    local_30[bVar1][iVar5][2] = 0;
  }
  if (0x13 < 0x18 - *(short *)(*DAT_08065ecc + 10)) {
    puVar7 = *(undefined1 **)(iVar8 + (int)local_30[bVar1]);
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  iVar5 = FUN_0806635c(*(undefined4 *)(iVar8 + (int)local_30[bVar1]),4);
  if (iVar5 == -1) {
    FUN_08065fe0(param_1);
  }
  else {
    uVar9 = (uint)local_70[iVar5];
    if ((uVar9 == 0) && (1 < *(byte *)(param_1 + 0xb7))) {
      uVar9 = 1;
    }
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(uVar9 + DAT_08065f08);
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    if (uVar9 == *(byte *)(param_1 + 0xcc)) {
      *pbVar6 = *pbVar6 + 1;
    }
    else {
      *(byte *)(param_1 + 0xcc) = (byte)uVar9;
      *pbVar6 = 1;
    }
  }
  return in_lr;
}


