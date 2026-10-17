// undefined FUN_080c79b8(void)
// entry 0x80c79b8


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_080c79b8(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 in_lr;
  byte abStack_74 [4];
  undefined1 auStack_70 [16];
  short asStack_60 [16];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int *local_24;
  
  FUN_08129258(abStack_74,DAT_080c7ac8,4);
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xb4);
  uVar5 = (uint)bVar1;
  local_30 = *(byte *)(param_1 + 10) >> 4 & 1;
  FUN_0801cff0(param_1);
  local_40 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  local_3c = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar13 = (local_30 * 2 + -1) * 0x400;
  iVar12 = (int)*(short *)((uVar5 + 0x40 & 0xff) * 2 + DAT_080c7acc);
  iVar6 = iVar12 * 0xa00;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar9 = uVar5 * 2;
  iVar7 = iVar13 * *(short *)(iVar9 + DAT_080c7acc);
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  local_38 = ((iVar6 >> 8) - (iVar7 >> 8)) + local_40;
  iVar6 = *(short *)(iVar9 + DAT_080c7acc) * 0xa00;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar13 = iVar13 * iVar12;
  if (iVar13 < 0) {
    iVar13 = iVar13 + 0xff;
  }
  local_34 = (iVar6 >> 8) + (iVar13 >> 8) + local_3c;
  sVar3 = FUN_08007c7c(local_38);
  if (sVar3 != 0) {
    FUN_08129258(auStack_70,DAT_080c7ad0,0x10);
    if ((local_34 < *(int *)(iVar4 + 0xd4) + DAT_080c7ad4) &&
       (sVar3 = FUN_08007c7c(local_38), sVar3 != 0)) {
      piVar8 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c7ad8);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar8 + 8);
      FUN_080c7d40(param_1);
      return in_lr;
    }
    iVar4 = DAT_080c7c70;
    iVar13 = local_30 * 2;
    uVar5 = abStack_74[iVar13] + uVar5 & 0xff;
    iVar6 = (iVar13 + -1) * 0x400;
    iVar13 = iVar13 + (uint)(bVar1 >> 6) * 4;
    local_40 = FUN_080c7d88(&local_40,auStack_70[iVar13]);
    local_3c = FUN_080c7d88(&local_40,auStack_70[iVar13 + 1]);
    iVar9 = uVar5 * 2;
    iVar13 = (int)*(short *)(iVar9 + DAT_080c7c74);
    iVar12 = iVar6 * iVar13;
    if (iVar12 < 0) {
      iVar12 = iVar12 + 0xff;
    }
    iVar7 = (int)*(short *)((uVar5 + 0x40 & 0xff) * 2 + DAT_080c7c74);
    iVar10 = iVar4 * iVar7;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    local_40 = local_40 + ((iVar12 >> 8) - (iVar10 >> 8));
    iVar4 = iVar4 * iVar13;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar6 = iVar6 * iVar7;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    local_3c = local_3c - ((iVar4 >> 8) + (iVar6 >> 8));
    iVar7 = iVar7 * *(int *)(param_1 + 0xb8);
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar7 >> 8;
    iVar13 = iVar13 * *(int *)(param_1 + 0xb8);
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar13 >> 8;
  }
  local_2c = local_30 * 2;
  local_28 = (local_2c + -1) * 0x400;
  iVar4 = (local_2c + -1) * 0x401;
  iVar6 = iVar4 * *(short *)(iVar9 + DAT_080c7c74);
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  local_38 = local_40 - (iVar6 >> 8);
  local_24 = &local_40;
  iVar4 = iVar4 * *(short *)((uVar5 + 0x40 & 0xff) * 2 + DAT_080c7c74);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  local_34 = local_3c + (iVar4 >> 8);
  sVar3 = FUN_08007c7c(local_38);
  if (sVar3 == 0) {
    FUN_08129258(asStack_60,DAT_080c7c78,0x20);
    FUN_08129258(auStack_70,DAT_080c7c7c,4);
    iVar4 = local_28;
    uVar11 = uVar5 >> 6;
    uVar5 = uVar5 - abStack_74[local_2c] & 0xff;
    if (asStack_60[uVar11 * 4 + local_30 * 2] == 0xff) {
      local_40 = FUN_080c7d88(&local_38,auStack_70[uVar11]);
      local_24[1] = local_34;
      iVar6 = uVar5 * 2;
      iVar4 = iVar4 * *(short *)(iVar6 + DAT_080c7c74);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      local_40 = local_40 + (iVar4 >> 8);
    }
    else {
      local_40 = local_38;
      local_3c = FUN_080c7d88(&local_38,auStack_70[uVar11]);
      local_24[1] = local_3c;
      iVar4 = iVar4 * *(short *)((uVar5 + 0x40 & 0xff) * 2 + DAT_080c7d20);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      local_3c = local_3c - (iVar4 >> 8);
      iVar6 = uVar5 << 1;
    }
    iVar4 = DAT_080c7d20;
    iVar13 = (int)*(short *)((uVar5 + 0x40 & 0xff) * 2 + DAT_080c7d20) * *(int *)(param_1 + 0xb8);
    if (iVar13 < 0) {
      iVar13 = iVar13 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar13 >> 8;
    iVar4 = (int)*(short *)(iVar6 + iVar4) * *(int *)(param_1 + 0xb8);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar4 >> 8;
  }
  *(int *)(param_1 + 0x54) = local_40;
  *(int *)(param_1 + 0x58) = local_3c;
  cVar2 = (char)uVar5;
  *(char *)(param_1 + 0xb4) = cVar2;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    cVar2 = -0x80 - cVar2;
  }
  *(char *)(param_1 + 0x24) = cVar2 + -0x80;
  return in_lr;
}


