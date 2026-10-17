// undefined FUN_08065b08(void)
// entry 0x8065b08


undefined4 FUN_08065b08(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
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
  int iVar10;
  
  FUN_08129258(local_70,DAT_08065bc0,3);
  uVar3 = DAT_08065bc4;
  local_28 = local_70 + 4;
  FUN_08129258(local_28,DAT_08065bc4,3);
  uVar4 = DAT_08065bc8;
  local_24 = auStack_68;
  FUN_08129258(local_24,DAT_08065bc8,3);
  FUN_08129258(auStack_64,DAT_08065bcc,3);
  FUN_08129258(auStack_60,DAT_08065bd0,3);
  FUN_08129258(auStack_5c,uVar3,3);
  FUN_08129258(auStack_58,uVar4,3);
  local_48 = local_28;
  local_44 = local_24;
  local_40 = auStack_64;
  FUN_08129258(apbStack_54,&local_48,0xc);
  local_3c = auStack_60;
  local_38 = auStack_5c;
  local_34 = auStack_58;
  FUN_08129258(&local_48,&local_3c,0xc);
  if ((*(ushort *)(DAT_08065bd4 + 8) & 8) == 0) {
    bVar1 = DAT_08065c30 <
            (uint)((*(int *)(*DAT_08065c28 + 0x54) - *(int *)(param_1 + 0x54)) + DAT_08065c2c);
    local_30[0] = apbStack_54;
    local_30[1] = &local_48;
    iVar6 = FUN_08066160(param_1);
    pbVar7 = (byte *)(param_1 + 0xcd);
    if (2 < *pbVar7) {
      iVar10 = 0;
      if (local_70[0] == *(byte *)(param_1 + 0xcc)) {
        *local_30[iVar6] = (byte *)0x0;
      }
      else {
        do {
          iVar9 = iVar10 + 1;
          if (1 < iVar9) goto LAB_08065c52;
          iVar2 = iVar10 + 1;
          iVar10 = iVar9;
        } while (local_70[iVar2] != *(byte *)(param_1 + 0xcc));
        local_30[iVar6][iVar9] = (byte *)0x0;
      }
    }
LAB_08065c52:
    iVar6 = FUN_0806635c(local_30[bVar1][iVar6],3);
    bVar5 = local_70[iVar6];
    uVar8 = (uint)bVar5;
    if (uVar8 == 0xff) {
      FUN_08065d1c(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(uVar8 + DAT_08065c94);
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      if (uVar8 == *(byte *)(param_1 + 0xcc)) {
        bVar5 = *pbVar7 + 1;
      }
      else {
        *(byte *)(param_1 + 0xcc) = bVar5;
        bVar5 = 1;
      }
      *pbVar7 = bVar5;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


