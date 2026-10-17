// undefined FUN_08065fe0(void)
// entry 0x8065fe0


undefined4 FUN_08065fe0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar10;
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
  int iVar9;
  
  FUN_08129258(local_70,DAT_080660d4,2);
  uVar3 = DAT_080660d8;
  local_28 = local_70 + 4;
  FUN_08129258(local_28,DAT_080660d8,2);
  uVar4 = DAT_080660dc;
  local_24 = auStack_68;
  FUN_08129258(local_24,DAT_080660dc,2);
  FUN_08129258(auStack_64,DAT_080660e0,2);
  FUN_08129258(auStack_60,DAT_080660e4,2);
  FUN_08129258(auStack_5c,uVar3,2);
  FUN_08129258(auStack_58,uVar4,2);
  local_48 = local_28;
  local_44 = local_24;
  local_40 = auStack_64;
  FUN_08129258(apbStack_54,&local_48,0xc);
  local_3c = auStack_60;
  local_38 = auStack_5c;
  local_34 = auStack_58;
  FUN_08129258(&local_48,&local_3c,0xc);
  bVar1 = DAT_080660f0 <
          (uint)((*(int *)(*DAT_080660e8 + 0x54) - *(int *)(param_1 + 0x54)) + DAT_080660ec);
  local_30[0] = apbStack_54;
  local_30[1] = &local_48;
  iVar6 = FUN_08066160(param_1);
  pbVar7 = (byte *)(param_1 + 0xcd);
  pbVar10 = (byte *)(param_1 + 0xcc);
  if (2 < *pbVar7) {
    iVar9 = 0;
    if (local_70[0] == *pbVar10) {
      *local_30[iVar6] = (byte *)0x0;
    }
    else {
      do {
        iVar8 = iVar9 + 1;
        if (1 < iVar8) goto LAB_08066112;
        iVar2 = iVar9 + 1;
        iVar9 = iVar8;
      } while (local_70[iVar2] != *pbVar10);
      local_30[iVar6][iVar8] = (byte *)0x0;
    }
  }
LAB_08066112:
  iVar6 = FUN_0806635c(local_30[bVar1][iVar6],2);
  bVar5 = local_70[iVar6];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)((uint)bVar5 + DAT_08066144);
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  if ((uint)bVar5 == (uint)*pbVar10) {
    bVar5 = *pbVar7 + 1;
  }
  else {
    *pbVar10 = bVar5;
    bVar5 = 1;
  }
  *pbVar7 = bVar5;
  return in_lr;
}


