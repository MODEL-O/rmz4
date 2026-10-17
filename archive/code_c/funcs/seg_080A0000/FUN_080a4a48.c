// undefined FUN_080a4a48(void)
// entry 0x80a4a48


undefined4 FUN_080a4a48(int param_1)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  puVar7 = (uint *)(param_1 + 0x8c);
  if ((*puVar7 & 0x200) != 0) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a4a80);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_080a5188(param_1);
    return in_lr;
  }
  uVar4 = FUN_0801fb14(DAT_080a4ab0,param_1 + 0x54);
  if (0x7800 < uVar4) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar7 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    goto LAB_080a4d68;
  }
  FUN_0801cff0(param_1);
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  sVar2 = FUN_08007c7c(iVar5,*(undefined4 *)(param_1 + 0x58));
  if (sVar2 == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    uVar4 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
    uVar4 = uVar4 & 0xffff;
    if (uVar4 == 0) {
      iVar5 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar5;
      if (0x700 < iVar5) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      bVar1 = *(char *)(param_1 + 0x12) + 1;
      *(byte *)(param_1 + 0x12) = bVar1;
      if ((bVar1 & 3) == 0) {
        local_20 = *(int *)(param_1 + 0x54);
        local_1c = *(undefined4 *)(param_1 + 0x58);
        local_18 = uVar4;
        local_14 = uVar4;
        FUN_080d9b9c(&local_20,&local_18,0,0);
      }
      if ((*puVar7 & 0x800) == 0) {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      FUN_08128f80(param_1,*(undefined4 *)(DAT_080a4dec + 4));
      return in_lr;
    }
    local_20 = *(int *)(param_1 + 0x54);
    if (*(int *)(param_1 + 0x60) < 0) {
      local_1c = FUN_08008748(local_20,*(undefined4 *)(param_1 + 0x58));
      sVar2 = FUN_08007c7c(local_20 + DAT_080a4c54,local_1c + -1);
      if (sVar2 == 0) {
        local_20 = FUN_08008868(local_20 + DAT_080a4c54,local_1c + -1);
        local_20 = local_20 + 0x1000;
      }
      else {
        sVar2 = FUN_08007c7c(local_20 + 0x1000,local_1c + -1);
        if (sVar2 == 0) {
          local_20 = FUN_08008988(local_20 + 0x1000,local_1c + -1);
          local_20 = local_20 + DAT_080a4c88;
        }
      }
      uVar6 = 3;
    }
    else {
      local_1c = FUN_08008534(local_20,*(undefined4 *)(param_1 + 0x58));
      sVar2 = FUN_08007c7c(local_20 + DAT_080a4cc0,local_1c + 1);
      if (sVar2 == 0) {
        local_20 = FUN_08008868(local_20 + DAT_080a4cc0,local_1c + 1);
        local_20 = local_20 + 0x1000;
      }
      else {
        sVar2 = FUN_08007c7c(local_20 + 0x1000,local_1c + 1);
        if (sVar2 == 0) {
          local_20 = FUN_08008988(local_20 + 0x1000,local_1c + 1);
          local_20 = local_20 + DAT_080a4d18;
        }
      }
      uVar6 = 2;
    }
    sVar2 = FUN_08007c7c(local_20 + DAT_080a4d18,local_1c);
    if (sVar2 == 0) {
      sVar2 = FUN_08007c7c(local_20 + 0x1000,local_1c);
      if (sVar2 != 0) {
        local_20 = FUN_08008868(local_20 + 0x1000,local_1c);
        local_20 = local_20 + DAT_080a4d84;
      }
    }
    else {
      local_20 = FUN_08008988(local_20 + DAT_080a4d18,local_1c);
      local_20 = local_20 + 0x1000;
    }
  }
  else {
    local_1c = *(int *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x5c) < 0) {
      local_20 = FUN_08008988(*(undefined4 *)(param_1 + 0x54));
      sVar2 = FUN_08007c7c(local_20 + -1,local_1c + DAT_080a4b08);
      if (sVar2 == 0) {
        local_1c = FUN_08008534(local_20 + -1,local_1c + DAT_080a4b08);
        iVar5 = 0x1000;
LAB_080a4b34:
        local_1c = local_1c + iVar5;
      }
      else {
        sVar2 = FUN_08007c7c(local_20 + -1,local_1c + 0x1000);
        if (sVar2 == 0) {
          local_1c = FUN_08008748(local_20 + -1,local_1c + 0x1000);
          iVar5 = DAT_080a4b3c;
          goto LAB_080a4b34;
        }
      }
      uVar6 = 1;
    }
    else {
      local_20 = FUN_08008868(*(undefined4 *)(param_1 + 0x54));
      sVar2 = FUN_08007c7c(local_20 + 1,local_1c + DAT_080a4b70);
      if (sVar2 == 0) {
        local_1c = FUN_08008534(local_20 + 1,local_1c + DAT_080a4b70);
        iVar5 = 0x1000;
LAB_080a4b9c:
        local_1c = local_1c + iVar5;
      }
      else {
        sVar2 = FUN_08007c7c(local_20 + 1,local_1c + 0x1000);
        if (sVar2 == 0) {
          local_1c = FUN_08008748(local_20 + 1,local_1c + 0x1000);
          iVar5 = DAT_080a4bc8;
          goto LAB_080a4b9c;
        }
      }
      uVar6 = 0;
    }
    sVar2 = FUN_08007c7c(local_20,local_1c + DAT_080a4bc8);
    if (sVar2 == 0) {
      sVar2 = FUN_08007c7c(local_20,local_1c + 0x1000);
      if (sVar2 == 0) goto LAB_080a4d44;
      local_1c = FUN_08008534(local_20,local_1c + 0x1000);
      iVar5 = DAT_080a4bf8;
    }
    else {
      local_1c = FUN_08008748(local_20,local_1c + DAT_080a4bc8);
      iVar5 = 0x1000;
    }
    local_1c = local_1c + iVar5;
  }
LAB_080a4d44:
  FUN_080a4810(&local_20,uVar6);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
LAB_080a4d68:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a4d88);
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  return in_lr;
}


