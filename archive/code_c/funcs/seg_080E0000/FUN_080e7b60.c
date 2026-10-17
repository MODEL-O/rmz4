// undefined FUN_080e7b60(void)
// entry 0x80e7b60


undefined4 FUN_080e7b60(int param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  int local_5c [8];
  int local_3c [4];
  undefined2 local_2c [4];
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_081292b8(local_5c,0,0x20);
  local_3c[0] = *DAT_080e7c68;
  local_3c[1] = DAT_080e7c68[1];
  local_3c[2] = DAT_080e7c68[2];
  local_3c[3] = DAT_080e7c68[3];
  FUN_08129258(local_2c,DAT_080e7c6c,8);
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_24 = *(undefined4 *)(param_1 + 0x54);
    local_20 = *(undefined4 *)(param_1 + 0x58);
    FUN_080d0c88(2);
    *(undefined1 *)(param_1 + 0x11) = 1;
    iVar7 = param_1 + 0x54;
    FUN_080e7a4c(iVar7,2,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e7a4c(iVar7,3,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e7a4c(iVar7,4,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  iVar3 = DAT_080e7c78;
  iVar7 = DAT_080e7c74;
  puVar2 = DAT_080e7c70;
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar4 = *DAT_080e7c70 * DAT_080e7c74 + DAT_080e7c78;
  uVar6 = uVar4 & 0x7fffffff;
  *DAT_080e7c70 = uVar6;
  iVar5 = local_3c[bVar1 - 1] * (((uVar4 & 0x7fffffff) >> 0x10 & 0xff) + 0x100);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar5 >> 8;
  uVar6 = uVar6 * iVar7 + iVar3;
  *puVar2 = uVar6 & 0x7fffffff;
  iVar7 = (((uVar6 & 0x7fffffff) >> 0x10 & 0xff) + 0x280) * -0x100;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar7 >> 8;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + local_5c[(uVar4 - 1) * 2] * 0x100;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + local_5c[(uVar4 - 1) * 2] * -0x100;
    iVar7 = (iVar5 >> 8) * -0x100;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar7 >> 8;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_5c[(uVar4 - 1) * 2 + 1] * 0x100;
  FUN_0801cf00(param_1,local_2c[*(byte *)(param_1 + 0x11) - 1]);
  *(undefined1 *)(param_1 + 0xd) = 0;
  return in_lr;
}


