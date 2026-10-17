// undefined FUN_081266fc(void)
// entry 0x81266fc


undefined4 FUN_081266fc(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 in_lr;
  undefined4 local_2c;
  int local_28;
  int local_24;
  
  uVar3 = *(uint *)(param_1 + DAT_08126774 + 0x24);
  if (uVar3 < 7) {
    local_2c = *(undefined4 *)(DAT_08126778 + param_1);
    local_28 = ((undefined4 *)(DAT_08126778 + param_1))[1] - (uVar3 * 0x800 + 0x6400);
    iVar4 = DAT_08126774 + param_1;
    iVar5 = DAT_08126774;
    do {
      iVar5 = param_1 + iVar5;
      uVar3 = *(uint *)(iVar5 + 0x34) >> 8 & 0xff;
      uVar7 = *(uint *)(iVar5 + 0x34) & 0xff;
      uVar9 = *(undefined4 *)(iVar5 + 0x2c);
      iVar2 = FUN_081078d0(&local_2c,*(undefined1 *)(uVar7 + uVar3 * 4 + DAT_0812677c),param_1);
      *(int *)(iVar5 + 0x2c) = iVar2;
      *(undefined4 *)(iVar2 + 0x28) = uVar9;
      iVar1 = DAT_081267d4;
      iVar2 = DAT_081267d0;
      local_28 = local_28 + DAT_08126780;
      if (uVar7 < 3) {
        *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + 1;
      }
      else {
        puVar8 = (uint *)(DAT_081267c8 + DAT_081267cc);
        uVar6 = DAT_081267d0 * *puVar8 + DAT_081267d4;
        *puVar8 = uVar6;
        local_24 = iVar2;
        uVar7 = FUN_08129198(uVar6 >> 0x10,5);
        uVar7 = uVar7 & 0xff;
        uVar3 = (uint)*(byte *)(uVar3 + DAT_081267d8);
        if (uVar7 == uVar3) {
          if (uVar7 == 0) {
            uVar3 = local_24 * uVar6 + iVar1;
            *puVar8 = uVar3;
            uVar7 = (uVar3 >> 0x10 & 3) + 1;
          }
          else {
            uVar7 = uVar7 & ~uVar3;
          }
        }
        *(uint *)(iVar4 + 0x34) = uVar7 << 8;
      }
      uVar3 = *(int *)(iVar4 + 0x24) + 1;
      *(uint *)(iVar4 + 0x24) = uVar3;
      iVar5 = DAT_08126864;
    } while (uVar3 < 7);
  }
  uVar3 = *(uint *)(param_1 + DAT_08126864 + 0x28);
  if (uVar3 < 7) {
    local_2c = *(undefined4 *)(DAT_08126868 + param_1);
    local_28 = ((undefined4 *)(DAT_08126868 + param_1))[1] - (uVar3 * 0x800 + 0x6400);
    iVar4 = DAT_08126864 + param_1;
    iVar5 = DAT_08126864;
    do {
      iVar5 = param_1 + iVar5;
      uVar3 = *(uint *)(iVar5 + 0x38) >> 8 & 0xff;
      uVar7 = *(uint *)(iVar5 + 0x38) & 0xff;
      uVar9 = *(undefined4 *)(iVar5 + 0x30);
      iVar2 = FUN_081078d0(&local_2c,*(byte *)(uVar7 + uVar3 * 4 + DAT_0812686c) | 0x100,param_1);
      *(int *)(iVar5 + 0x30) = iVar2;
      *(undefined4 *)(iVar2 + 0x28) = uVar9;
      iVar1 = DAT_081268c4;
      iVar2 = DAT_081268c0;
      local_28 = local_28 + DAT_08126870;
      if (uVar7 < 3) {
        *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + 1;
      }
      else {
        puVar8 = (uint *)(DAT_081268b8 + DAT_081268bc);
        uVar6 = DAT_081268c0 * *puVar8 + DAT_081268c4;
        *puVar8 = uVar6;
        local_24 = iVar2;
        uVar7 = FUN_08129198(uVar6 >> 0x10,5);
        uVar7 = uVar7 & 0xff;
        uVar3 = (uint)*(byte *)(uVar3 + DAT_081268c8);
        if (uVar7 == uVar3) {
          if (uVar7 == 0) {
            uVar3 = local_24 * uVar6 + iVar1;
            *puVar8 = uVar3;
            uVar7 = (uVar3 >> 0x10 & 3) + 1;
          }
          else {
            uVar7 = uVar7 & ~uVar3;
          }
        }
        *(uint *)(iVar4 + 0x38) = uVar7 << 8;
      }
      uVar3 = *(int *)(iVar4 + 0x28) + 1;
      *(uint *)(iVar4 + 0x28) = uVar3;
      iVar5 = DAT_081268f4;
    } while (uVar3 < 7);
  }
  return in_lr;
}


