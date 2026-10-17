// undefined FUN_08081c94(void)
// entry 0x8081c94


undefined8 FUN_08081c94(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_lr;
  byte bVar11;
  int local_5c [4];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  byte local_3c [8];
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  
  local_30 = *(int *)(*DAT_08082014 + 0x54);
  iVar7 = DAT_08082018 + *(int *)(*DAT_08082014 + 0x58);
  if (((local_30 - *(int *)(param_1 + 0xb8)) + 0x8000U < 0x10001) &&
     (local_24 = (int *)(param_1 + 0xbc), (iVar7 - *local_24) + 0x3000U < 0x6001)) {
    local_3c[3] = 0;
    local_3c[2] = 0;
    local_3c[1] = 0;
    local_3c[0] = 0;
    iVar10 = local_30 + DAT_0808201c;
    iVar2 = *(int *)(param_1 + 0xb8) + DAT_08082024;
    iVar8 = local_30 + DAT_08082020;
    if (local_30 + DAT_08082020 < iVar2) {
      iVar8 = iVar2;
    }
    iVar8 = iVar10 - iVar8;
    local_34 = param_1;
    local_2c = iVar7;
    if (0 < iVar8) {
      uVar3 = *DAT_08082028 * DAT_0808202c + DAT_08082030;
      *DAT_08082028 = uVar3 & 0x7fffffff;
      iVar8 = FUN_08129198((uVar3 & 0x7fffffff) >> 0x10,iVar8);
      iVar10 = iVar10 - iVar8;
      iVar7 = FUN_08008534(iVar10,iVar7);
      if ((iVar7 - *local_24) + 0x3000U < 0x6001) {
        iVar8 = DAT_08082018 + iVar10;
        local_5c[0] = iVar10;
        local_5c[1] = iVar7;
        sVar1 = FUN_08007c7c(iVar8,iVar7 + 0x800);
        bVar11 = sVar1 == 0;
        if ((bool)bVar11) {
          local_5c[0] = FUN_08008868(iVar8,iVar7 + 0x800);
          local_5c[0] = local_5c[0] + 0x1000;
        }
        iVar7 = local_5c[1] + DAT_08082034;
        sVar1 = FUN_08007c7c(iVar8,iVar7);
        if (sVar1 != 0) {
          local_5c[0] = FUN_08008988(iVar8,iVar7);
          local_5c[0] = local_5c[0] + 0x1000;
          bVar11 = bVar11 + 1;
        }
        iVar7 = local_5c[0] + 0x1000;
        iVar8 = local_5c[1] + 0x800;
        sVar1 = FUN_08007c7c(iVar7,iVar8);
        if (sVar1 == 0) {
          local_5c[0] = FUN_08008988(iVar7,iVar8);
          local_5c[0] = local_5c[0] + DAT_08082018;
          bVar11 = bVar11 + 1;
        }
        iVar8 = local_5c[1] + DAT_08082034;
        sVar1 = FUN_08007c7c(iVar7,iVar8);
        if (sVar1 != 0) {
          local_5c[0] = FUN_08008868(iVar7,iVar8);
          local_5c[0] = local_5c[0] + DAT_08082018;
          bVar11 = bVar11 + 1;
        }
        if (bVar11 < 2) {
          local_3c[0] = 1;
        }
      }
    }
    iVar8 = local_30 + 0x2000;
    local_28 = (int *)(local_34 + 0xb8);
    iVar7 = local_30 + 0x4000;
    if (*local_28 + 0x8000 < local_30 + 0x4000) {
      iVar7 = *local_28 + 0x8000;
    }
    iVar7 = iVar7 - iVar8;
    if (0 < iVar7) {
      uVar3 = *DAT_08082028 * DAT_0808202c + DAT_08082030;
      *DAT_08082028 = uVar3 & 0x7fffffff;
      iVar7 = FUN_08129198((uVar3 & 0x7fffffff) >> 0x10,iVar7);
      iVar8 = iVar8 + iVar7;
      iVar7 = FUN_08008534(iVar8,local_2c);
      if ((iVar7 - *local_24) + 0x3000U < 0x6001) {
        iVar2 = DAT_08082018 + iVar8;
        local_5c[2] = iVar8;
        local_5c[3] = iVar7;
        sVar1 = FUN_08007c7c(iVar2,iVar7 + 0x800);
        bVar11 = sVar1 == 0;
        if ((bool)bVar11) {
          local_5c[2] = FUN_08008868(iVar2,iVar7 + 0x800);
          local_5c[2] = local_5c[2] + 0x1000;
        }
        iVar7 = local_5c[3] + DAT_08082034;
        sVar1 = FUN_08007c7c(iVar2,iVar7);
        if (sVar1 != 0) {
          local_5c[2] = FUN_08008988(iVar2,iVar7);
          local_5c[2] = local_5c[2] + 0x1000;
          bVar11 = bVar11 + 1;
        }
        iVar7 = local_5c[2] + 0x1000;
        iVar8 = local_5c[3] + 0x800;
        sVar1 = FUN_08007c7c(iVar7,iVar8);
        if (sVar1 == 0) {
          local_5c[2] = FUN_08008988(iVar7,iVar8);
          local_5c[2] = local_5c[2] + DAT_08082018;
          bVar11 = bVar11 + 1;
        }
        iVar8 = local_5c[3] + DAT_08082034;
        sVar1 = FUN_08007c7c(iVar7,iVar8);
        if (sVar1 != 0) {
          local_5c[2] = FUN_08008868(iVar7,iVar8);
          local_5c[2] = local_5c[2] + DAT_08082018;
          bVar11 = bVar11 + 1;
        }
        if (bVar11 < 2) {
          local_3c[1] = 1;
        }
      }
    }
    iVar8 = FUN_08008988(local_30,local_2c);
    iVar7 = local_2c;
    if (((((iVar8 - *local_28) + 0x8000U < 0x10001) && ((iVar8 - local_30) + 0x4000U < 0x8001)) &&
        (0x4000 < (iVar8 - local_30) + 0x2000U)) &&
       ((iVar8 < local_30 && (iVar2 = FUN_08082140(iVar8 + -1,local_2c), iVar2 != 0)))) {
      local_48 = iVar7;
      iVar2 = iVar8 + DAT_08082034;
      iVar7 = iVar7 + DAT_08082018;
      local_4c = iVar8;
      sVar1 = FUN_08007c7c(iVar2,iVar7);
      bVar11 = sVar1 == 0;
      if ((bool)bVar11) {
        local_48 = FUN_08008534(iVar2,iVar7);
        local_48 = local_48 + 0x1000;
      }
      iVar7 = local_48 + 0x1000;
      sVar1 = FUN_08007c7c(iVar2,iVar7);
      if (sVar1 == 0) {
        local_48 = FUN_08008748(iVar2,iVar7);
        local_48 = local_48 + DAT_08082018;
        bVar11 = bVar11 + 1;
      }
      if (bVar11 < 2) {
        local_3c[2] = 1;
      }
    }
    iVar8 = FUN_08008868(local_30,local_2c);
    iVar7 = local_2c;
    if ((((iVar8 - *local_28) + 0x8000U < 0x10001) && ((iVar8 - local_30) + 0x4000U < 0x8001)) &&
       ((0x4000 < (iVar8 - local_30) + 0x2000U &&
        ((local_30 < iVar8 && (iVar2 = FUN_08082140(iVar8 + 1,local_2c), iVar2 != 0)))))) {
      local_40 = iVar7;
      iVar2 = iVar8 + 0x800;
      iVar7 = iVar7 + DAT_080820b0;
      local_44 = iVar8;
      sVar1 = FUN_08007c7c(iVar2,iVar7);
      bVar11 = sVar1 == 0;
      if ((bool)bVar11) {
        local_40 = FUN_08008534(iVar2,iVar7);
        local_40 = local_40 + 0x1000;
      }
      iVar7 = local_40 + 0x1000;
      sVar1 = FUN_08007c7c(iVar2,iVar7);
      if (sVar1 == 0) {
        iVar7 = FUN_08008748(iVar2,iVar7);
        local_40 = iVar7 + DAT_080820b0;
        bVar11 = bVar11 + 1;
      }
      if (bVar11 < 2) {
        local_3c[3] = 1;
      }
    }
    iVar7 = (uint)local_3c[0] + (uint)local_3c[1] + (uint)local_3c[2] + (uint)local_3c[3];
    if (iVar7 != 0) {
      uVar3 = 0;
      uVar9 = 0;
      pbVar5 = (byte *)(local_34 + 0xb4);
      do {
        bVar11 = (byte)uVar9;
        if (local_3c[(char)bVar11] != 0) {
          local_3c[(char)uVar3 + 4] = bVar11;
          uVar3 = (int)(char)uVar3 + 1U & 0xff;
        }
        uVar6 = (int)(char)bVar11 + 1;
        uVar9 = uVar6 & 0xff;
      } while ((int)(uVar6 * 0x1000000) >> 0x18 < 4);
      uVar3 = *DAT_08082134 * DAT_08082138 + DAT_0808213c;
      *DAT_08082134 = uVar3 & 0x7fffffff;
      iVar7 = FUN_08129198((uVar3 & 0x7fffffff) >> 0x10,iVar7);
      bVar11 = local_3c[iVar7 + 4];
      iVar7 = local_5c[(uint)bVar11 * 2 + 1];
      *(int *)(local_34 + 0x54) = local_5c[(uint)bVar11 * 2];
      *(int *)(local_34 + 0x58) = iVar7;
      *pbVar5 = bVar11;
      uVar4 = 1;
      goto LAB_08082122;
    }
  }
  uVar4 = 0;
LAB_08082122:
  return CONCAT44(in_lr,uVar4);
}


