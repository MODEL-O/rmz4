// undefined FUN_080f9e74(void)
// entry 0x80f9e74


undefined4 FUN_080f9e74(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined4 in_lr;
  short local_48 [4];
  short local_40 [4];
  short local_38 [2];
  int local_34 [4];
  int local_24;
  
  psVar7 = local_48;
  FUN_08129258(local_48,DAT_080f9ecc,6);
  psVar8 = local_40;
  FUN_08129258(psVar8,DAT_080f9ed0,6);
  psVar9 = local_38;
  FUN_08129258(psVar9,DAT_080f9ed4,4);
  local_34[0] = *DAT_080f9ed8;
  local_34[1] = DAT_080f9ed8[1];
  local_34[2] = DAT_080f9ed8[2];
  uVar3 = (uint)*(byte *)(param_1 + 0xb4);
  uVar6 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (uVar3 == 1) {
    local_24 = *(int *)(param_1 + 0x58) + DAT_080f9f60;
    uVar3 = 0;
    iVar4 = 4;
    do {
      local_34[3] = *(int *)(param_1 + 0x54) + (uVar6 * 2 + -1) * (int)*psVar8;
      FUN_080a1098(param_1,local_34 + 3,1,uVar3 & 0xff);
      psVar8 = psVar8 + 1;
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 3);
  }
  else {
    if (uVar3 < 2) {
      if (uVar3 == 0) {
        local_24 = *(int *)(param_1 + 0x58) + DAT_080f9f20;
        uVar3 = 0;
        iVar4 = 0;
        do {
          local_34[3] = *(int *)(param_1 + 0x54) + (uVar6 * 2 + -1) * (int)*psVar7;
          FUN_0809fd14(param_1,local_34 + 3,1,uVar3 & 0xff);
          psVar7 = psVar7 + 1;
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 3);
        goto LAB_080f9f9c;
      }
    }
    else if (uVar3 == 2) {
      local_24 = *(int *)(param_1 + 0x58) + DAT_080fa00c;
      uVar3 = 0;
      iVar4 = 8;
      do {
        local_34[3] = *(int *)(param_1 + 0x54) + (uVar6 * 2 + -1) * (int)*psVar9;
        FUN_080a23f8(param_1,local_34 + 3,1,uVar3 & 0xff);
        psVar9 = psVar9 + 1;
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 2);
      goto LAB_080f9f9c;
    }
    iVar4 = uVar3 << 2;
  }
LAB_080f9f9c:
  iVar2 = DAT_080fa014;
  sVar1 = *(short *)(DAT_080fa014 + 0x102);
  iVar5 = (*(int *)((int)local_34 + iVar4) << 8) >> 0x10;
  iVar4 = iVar5 * 2;
  puVar11 = (ushort *)(iVar4 + DAT_080fa010);
  *puVar11 = *(short *)(DAT_080fa010 + 0x102) + 0x7f;
  puVar10 = (ushort *)(iVar4 + iVar2);
  *puVar10 = sVar1 + 1;
  iVar5 = iVar5 * 0x14;
  iVar4 = iVar5 + DAT_080fa018;
  FUN_08001d30(iVar4,((uint)*puVar11 - (uint)(*(ushort *)(iVar4 + 6) >> 6)) * 0x20 + 0x10000);
  iVar5 = iVar5 + DAT_080fa01c;
  FUN_08002208(iVar5,((uint)*puVar10 - (uint)*(byte *)(iVar5 + 7)) * 0x20 + 0x200);
  return in_lr;
}


