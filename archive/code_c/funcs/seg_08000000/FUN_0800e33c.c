// undefined FUN_0800e33c(void)
// entry 0x800e33c


undefined4 FUN_0800e33c(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  uint local_30;
  uint local_2c;
  int local_28 [2];
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (*(short *)(DAT_0800e374 + DAT_0800e378) != 0) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x70);
    if (uVar6 == 1) {
      puVar4 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + DAT_0800e470);
      FUN_08128be0(*DAT_0800e468 + DAT_0800e46c,(*puVar4 & 0x1f00) * 8 + DAT_0800e474,0xa0);
      uVar7 = DAT_0800e47c;
      local_2c = 0;
      FUN_08128be0(&local_2c,(*puVar4 & 0x1f00) * 8 + DAT_0800e478,DAT_0800e47c);
      FUN_08128be0(*DAT_0800e480 + DAT_0800e484,(*puVar4 & 0x1f00) * 8 + 0x6000000,0xa0);
      iVar3 = (*puVar4 & 0x1f00) * 8 + DAT_0800e488;
LAB_0800e4f8:
      local_2c = 0;
      FUN_08128be0(&local_2c,iVar3,uVar7);
    }
    else if (uVar6 < 2) {
      if (uVar6 == 0) {
        puVar4 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + DAT_0800e3e0);
        local_30 = uVar6;
        FUN_08128be0(&local_30,(*puVar4 & 0x1f00) * 8 + 0x6000000,DAT_0800e3e4);
        FUN_08128be0(*DAT_0800e3e8 + DAT_0800e3ec,(*puVar4 & 0x1f00) * 8 + DAT_0800e3f0,0xa0);
        local_2c = uVar6;
        FUN_08128be0(&local_2c,(*puVar4 & 0x1f00) * 8 + DAT_0800e3f4,DAT_0800e3f8);
      }
    }
    else {
      if (uVar6 == 2) {
        puVar4 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + DAT_0800e510);
        FUN_08128be0(*DAT_0800e508 + DAT_0800e50c,(*puVar4 & 0x1f00) * 8 + 0x6000000,0xa0);
        uVar7 = DAT_0800e518;
        local_2c = 0;
        FUN_08128be0(&local_2c,(*puVar4 & 0x1f00) * 8 + DAT_0800e514,DAT_0800e518);
        FUN_08128be0(*DAT_0800e51c + DAT_0800e520,(*puVar4 & 0x1f00) * 8 + DAT_0800e524,0xa0);
        iVar3 = (*puVar4 & 0x1f00) * 8 + DAT_0800e528;
        goto LAB_0800e4f8;
      }
      if (uVar6 == 3) {
        puVar4 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + DAT_0800e5b4);
        FUN_08128be0(*DAT_0800e5ac + DAT_0800e5b0,(*puVar4 & 0x1f00) * 8 + DAT_0800e5b8,0xa0);
        local_2c = 0;
        FUN_08128be0(&local_2c,(*puVar4 & 0x1f00) * 8 + DAT_0800e5bc,DAT_0800e5c0);
        local_2c = 0;
        FUN_08128be0(&local_2c,(*puVar4 & 0x1f00) * 8 + 0x6000000,DAT_0800e5c4);
      }
    }
  }
  if ((DAT_0800e5c8 < *(int *)(param_1 + 0x38)) || (*(ushort *)(param_1 + 0x68) == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = (uint)(*(ushort *)(param_1 + 0x68) >> 4) -
            (*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x34));
  }
  puVar4 = (ushort *)(param_1 + 0x70);
  uVar2 = (uVar2 & 0xffff) >> 4;
  if ((int)((*puVar4 + 1) * 0x100 + 0x10) <= iVar3) {
    local_28[0] = *(int *)(param_1 + 0x34) * 0x100 + 0x16000;
    local_28[1] = 0x2f800;
    uVar1 = *puVar4 + 1;
    *puVar4 = uVar1;
    if (uVar1 == 1) {
      FUN_080f20c4(local_28,0);
      puVar4 = (ushort *)(uVar2 * 2 + DAT_0800e654);
      FUN_08128be0(*DAT_0800e64c + DAT_0800e650,(*puVar4 & 0x1f00) * 8 + 0x6000000,0xa0);
      iVar5 = (*puVar4 & 0x1f00) * 8 + DAT_0800e658;
    }
    else {
      if (uVar1 != 2) {
        if (uVar1 == 3) {
          local_2c = 0;
          FUN_08128be0(&local_2c,(*(ushort *)(uVar2 * 2 + DAT_0800e70c) & 0x1f00) * 8 + 0x6000000,
                       DAT_0800e710);
        }
        goto LAB_0800e6e6;
      }
      FUN_080f20c4(local_28,0);
      puVar4 = (ushort *)(uVar2 * 2 + DAT_0800e6b0);
      FUN_08128be0(*DAT_0800e6a8 + DAT_0800e6ac,(*puVar4 & 0x1f00) * 8 + DAT_0800e6b4,0xa0);
      iVar5 = (*puVar4 & 0x1f00) * 8 + DAT_0800e6b8;
    }
    local_2c = 0;
    FUN_08128be0(&local_2c,iVar5,DAT_0800e6bc);
  }
LAB_0800e6e6:
  iVar5 = DAT_0800e714;
  *(short *)(uVar2 * 4 + DAT_0800e714) = (short)iVar3;
  *(short *)(uVar2 * 4 + iVar5 + 2) = (short)*(undefined4 *)(param_1 + 0x38) + (short)DAT_0800e718;
  return in_lr;
}


