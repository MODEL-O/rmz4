// undefined FUN_0806a028(void)
// entry 0x806a028


undefined4 FUN_0806a028(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 in_lr;
  undefined1 auStack_74 [4];
  char acStack_70 [4];
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int *local_28;
  int local_24;
  
  FUN_08129258(auStack_74,PTR_DAT_0806a1b8,4);
  FUN_08129258(acStack_70,PTR_DAT_0806a1bc,4);
  local_54 = *(int *)(param_1 + 0xb4);
  local_50 = *(int *)(param_1 + 0xb8);
  local_4c = *(int *)(param_1 + 0xbc);
  local_48 = *(int *)(param_1 + 0xc0);
  local_44 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_34 = (uint)*(byte *)(param_1 + 0xc4);
  local_6c = *(int *)(param_1 + 0x54);
  local_68 = *(int *)(param_1 + 0x58);
  iVar2 = FUN_08069f00(param_1,&local_6c,param_2,local_34);
  if (iVar2 != 0) {
    local_34 = local_34 + (local_44 * 2 + -1) * -0x40 & 0xff;
  }
  local_30 = local_34 + 0x40;
  local_64 = local_6c + *(short *)(PTR_DAT_0806a1c0 + (local_30 & 0xff) * 2) * 0x14;
  iVar3 = local_34 * 2;
  local_60 = local_68 + *(short *)(PTR_DAT_0806a1c0 + iVar3) * 0x14;
  local_38 = local_34;
  iVar4 = FUN_0806a7c8(param_1,1);
  iVar5 = FUN_0806a7c8(param_1,0);
  iVar2 = DAT_0806a1c8;
  iVar9 = (*(int *)(param_1 + 0xd8) - (local_64 + DAT_0806a1c4)) + DAT_0806a1c8;
  iVar6 = FUN_0806a7c8(param_1,1);
  iVar7 = FUN_0806a7c8(param_1,0);
  local_2c = local_30;
  local_24 = iVar3;
  local_28 = (int *)(param_1 + 0xd8);
  if ((uint)((((iVar6 - iVar7) + 1) / 2 + iVar2) * 2) < (uint)(iVar9 + ((iVar4 - iVar5) + 1) / 2)) {
    iVar3 = local_44 * 2 + -1;
    uVar10 = local_38 >> 6 & 3;
    local_64 = FUN_0806a7c8(param_1,auStack_74[uVar10]);
    local_64 = local_64 + acStack_70[uVar10] * -0x1800;
    uVar8 = local_38 + iVar3 * -0x40;
    iVar2 = local_6c - local_64;
    uVar10 = FUN_08128bf4(0x1900000 - iVar2 * iVar2);
    local_60 = local_68 + (uVar10 & 0xffff) * (int)acStack_70[(uVar8 & 0xff) >> 6];
LAB_0806a284:
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar2 = FUN_08128fb8((0x1400 - iVar2) * -0x40);
    local_38 = local_38 + iVar3 * iVar2 & 0xff;
  }
  else {
    iVar2 = FUN_0806a7c8(param_1,3);
    iVar3 = FUN_0806a7c8(param_1,2);
    iVar6 = *(int *)(param_1 + 0xdc) - local_60;
    iVar4 = FUN_0806a7c8(param_1,3);
    iVar5 = FUN_0806a7c8(param_1,2);
    if ((uint)((((iVar4 - iVar5) + 1) / 2 + DAT_0806a3b8) * 2) <
        (uint)(iVar6 + 0x2800 + ((iVar2 - iVar3) + 1) / 2)) {
      iVar3 = local_44 * 2 + -1;
      uVar10 = local_38 >> 6 & 3;
      local_60 = FUN_0806a7c8(param_1,auStack_74[uVar10]);
      local_60 = local_60 + acStack_70[uVar10] * -0x1800;
      uVar8 = local_38 + iVar3 * -0x40;
      iVar2 = local_68 - local_60;
      uVar10 = FUN_08128bf4(0x1900000 - iVar2 * iVar2);
      local_64 = local_6c + (uVar10 & 0xffff) * (int)acStack_70[(uVar8 & 0xff) >> 6];
      goto LAB_0806a284;
    }
  }
  uVar10 = local_34;
  iVar2 = *(short *)((local_2c & 0xff) * 2 + DAT_0806a3bc) * -0x1400;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  local_5c = local_6c + (iVar2 >> 8);
  iVar2 = *(short *)(local_24 + DAT_0806a3bc) * -0x1400;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  local_58 = local_68 + (iVar2 >> 8);
  iVar3 = FUN_0806a7c8(param_1,1);
  iVar4 = FUN_0806a7c8(param_1,0);
  iVar2 = DAT_0806a3b8;
  iVar7 = (*local_28 - (local_5c + DAT_0806a3c0)) + DAT_0806a3b8;
  iVar5 = FUN_0806a7c8(param_1,1);
  iVar6 = FUN_0806a7c8(param_1,0);
  if ((uint)((((iVar5 - iVar6) + 1) / 2 + iVar2) * 2) < (uint)(iVar7 + ((iVar3 - iVar4) + 1) / 2)) {
    iVar3 = local_44 * 2 + -1;
    uVar8 = (uVar10 + 0x80 & 0xff) >> 6;
    local_5c = FUN_0806a7c8(param_1,auStack_74[uVar8]);
    local_5c = local_5c + acStack_70[uVar8] * -0x1800;
    iVar2 = local_6c - local_5c;
    uVar8 = FUN_08128bf4(0x1900000 - iVar2 * iVar2);
    local_58 = local_68 + -(uVar8 & 0xffff) * (int)acStack_70[(iVar3 * 0x40 + uVar10 & 0xff) >> 6];
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
  }
  else {
    iVar2 = FUN_0806a7c8(param_1,3);
    iVar3 = FUN_0806a7c8(param_1,2);
    iVar6 = *(int *)(param_1 + 0xdc) - local_58;
    iVar4 = FUN_0806a7c8(param_1,3);
    iVar5 = FUN_0806a7c8(param_1,2);
    if ((uint)(iVar6 + 0x2800 + ((iVar2 - iVar3) + 1) / 2) <=
        (uint)((((iVar4 - iVar5) + 1) / 2 + DAT_0806a5c0) * 2)) goto LAB_0806a49c;
    iVar3 = local_44 * 2 + -1;
    uVar8 = (uVar10 + 0x80 & 0xff) >> 6;
    local_58 = FUN_0806a7c8(param_1,auStack_74[uVar8]);
    local_58 = local_58 + acStack_70[uVar8] * -0x1800;
    iVar2 = local_68 - local_58;
    uVar8 = FUN_08128bf4(0x1900000 - iVar2 * iVar2);
    local_5c = local_6c + -(uVar8 & 0xffff) * (int)acStack_70[(iVar3 * 0x40 + uVar10 & 0xff) >> 6];
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
  }
  iVar2 = FUN_08128fb8(0x1400 - iVar2,0x50);
  uVar10 = iVar3 * iVar2 + uVar10 & 0xff;
LAB_0806a49c:
  local_40 = local_64 + *(short *)((local_38 + 0xc0 & 0xff) * 2 + DAT_0806a5c4) * 0xc;
  local_40 = local_40 +
             ((local_5c + *(short *)((uVar10 + 0x40 & 0xff) * 2 + DAT_0806a5c4) * 0xc) - local_40) /
             2;
  local_3c = local_60 + *(short *)((local_38 + 0x80 & 0xff) * 2 + DAT_0806a5c4) * 0xc;
  local_3c = local_3c + ((local_58 + *(short *)(uVar10 * 2 + DAT_0806a5c4) * 0xc) - local_3c) / 2;
  uVar1 = FUN_0810d398();
  *(undefined1 *)(param_1 + 0xc4) = (undefined1)local_34;
  *(int *)(param_1 + 0x54) = local_6c;
  *(int *)(param_1 + 0x58) = local_68;
  *(int *)(local_54 + 0x54) = local_40;
  *(int *)(local_54 + 0x58) = local_3c;
  *(int *)(local_50 + 0x54) = local_64;
  *(int *)(local_50 + 0x58) = local_60;
  *(int *)(local_48 + 0x54) = local_5c;
  *(int *)(local_48 + 0x58) = local_58;
  *(int *)(local_4c + 0x54) = local_5c;
  *(int *)(local_4c + 0x58) = local_58;
  *(undefined1 *)(local_54 + 0xb4) = uVar1;
  *(undefined1 *)(local_50 + 0xb4) = (undefined1)local_38;
  *(char *)(local_48 + 0xb4) = (char)uVar10;
  *(char *)(local_4c + 0xb4) = (char)uVar10;
  FUN_0806a7fc(param_1,local_34,local_44,0);
  FUN_0806aaf8(local_54,uVar1,local_44,0);
  FUN_0806a8c4(local_50,local_38,local_44,0);
  FUN_0806a8c4(local_4c,uVar10,local_44,0);
  FUN_0806a8c4(local_48,uVar10,local_44,0);
  return in_lr;
}


