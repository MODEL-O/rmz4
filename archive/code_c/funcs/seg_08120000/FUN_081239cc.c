// undefined FUN_081239cc(void)
// entry 0x81239cc


undefined4 FUN_081239cc(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  iVar1 = DAT_08123a5c;
  iVar3 = DAT_08123a58;
  puVar9 = (uint *)(DAT_08123a50 + DAT_08123a54);
  uVar2 = *puVar9 * DAT_08123a58 + DAT_08123a5c;
  *puVar9 = uVar2;
  uVar2 = FUN_08129198(uVar2 >> 0x10,0xd);
  uVar8 = 1 << (uVar2 & 0xff);
  uVar4 = *(uint *)(param_1 + DAT_08123a60 + 0x28);
  uVar2 = uVar2 & 0xff;
joined_r0x08123a10:
  do {
    if ((uVar4 & uVar8) == 0) {
      local_28 = *(int *)(param_1 + DAT_08123ad0) +
                 *(int *)(uVar2 * 4 + DAT_08123ad4) * 0x100 + DAT_08123ad8;
      local_24 = ((int *)(param_1 + DAT_08123ad0))[1];
      uVar4 = *(uint *)(param_1 + DAT_08123adc + 0x24);
      if ((uVar4 == 0) || ((uVar4 & 7) != 0)) {
        FUN_080bc7a0(&local_28,uVar2,param_1);
      }
      else {
        if (*(int *)(param_1 + DAT_08123adc + 0x38) == 0) {
          FUN_080bc7a0(&local_28,uVar2 | 0x200,param_1);
        }
        else {
          FUN_080bc7a0(&local_28,uVar2 | 0x100,param_1);
        }
        *(uint *)(param_1 + DAT_08123b04 + 0x38) = *(uint *)(param_1 + DAT_08123b04 + 0x38) ^ 1;
      }
      piVar7 = (int *)(param_1 + DAT_08123b5c);
      piVar7[10] = piVar7[10] | uVar8;
      piVar7[0xd] = piVar7[0xd] + 1;
      iVar3 = piVar7[9] + 1;
      piVar7[9] = iVar3;
      if ((iVar3 != 0) && (iVar3 = FUN_08129198(iVar3,0x14), iVar3 == 0)) {
        local_24 = ((int *)(param_1 + DAT_08123b60))[1];
        local_28 = *(int *)(param_1 + DAT_08123b60);
        if (local_28 < *(int *)(*piVar7 + 0x54)) {
          local_28 = local_28 + 0x8c00;
          FUN_080bca78(&local_28,0,param_1);
        }
        else {
          local_28 = local_28 + DAT_08123b9c;
          FUN_080bca78(&local_28,1,param_1);
        }
        *(int *)(param_1 + DAT_08123ba0 + 0x24) = *(int *)(param_1 + DAT_08123ba0 + 0x24) + 1;
      }
      param_1 = param_1 + DAT_08123ba0;
      uVar2 = FUN_08129120(*(undefined4 *)(param_1 + 0x24),10);
      if ((uVar2 & 0xff) < 5) {
        uVar2 = (uint)*(byte *)((uVar2 & 0xff) + DAT_08123ba4);
      }
      else {
        uVar2 = 0x20;
      }
      *(uint *)(param_1 + 0x2c) = uVar2;
      return in_lr;
    }
    uVar6 = *puVar9 * iVar3 + iVar1;
    uVar5 = (uVar6 >> 0x10 & 3) + 1;
    uVar6 = uVar6 * iVar3 + iVar1;
    *puVar9 = uVar6;
    if ((uVar6 >> 0x10 & 1) == 0) goto LAB_08123a64;
    uVar8 = uVar8 << uVar5;
    uVar2 = uVar2 + uVar5 & 0xff;
  } while (uVar2 < 0xe);
  goto LAB_08123a78;
LAB_08123a64:
  uVar8 = uVar8 >> uVar5;
  uVar2 = uVar2 - uVar5 & 0xff;
  if (uVar8 == 0) {
    uVar5 = 0xd - uVar5 & 0xff;
LAB_08123a78:
    uVar8 = 1 << uVar5;
    uVar2 = uVar5;
  }
  goto joined_r0x08123a10;
}


