// undefined FUN_080e694c(void)
// entry 0x80e694c


undefined4 FUN_080e694c(int param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  int local_4c [4];
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30 [4];
  undefined2 local_20 [4];
  
  local_4c[0] = DAT_080e6a50[1];
  local_4c[1] = DAT_080e6a50[2];
  local_4c[2] = DAT_080e6a50[3];
  local_4c[3] = DAT_080e6a50[4];
  uStack_3c = DAT_080e6a50[5];
  local_38 = DAT_080e6a50[6];
  uStack_34 = DAT_080e6a50[7];
  local_30[0] = *DAT_080e6a54;
  local_30[1] = DAT_080e6a54[1];
  local_30[2] = DAT_080e6a54[2];
  local_30[3] = DAT_080e6a54[3];
  FUN_08129258(local_20,DAT_080e6a58,8,local_30[1],*DAT_080e6a50);
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined1 *)(param_1 + 0x11) = 1;
    iVar7 = param_1 + 0x54;
    FUN_080e67ac(iVar7,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e67ac(iVar7,DAT_080e6a5c,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e67ac(iVar7,0x104,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  iVar3 = DAT_080e6a68;
  iVar7 = DAT_080e6a64;
  puVar2 = DAT_080e6a60;
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar4 = *DAT_080e6a60 * DAT_080e6a64 + DAT_080e6a68;
  uVar6 = uVar4 & 0x7fffffff;
  *DAT_080e6a60 = uVar6;
  iVar5 = local_30[bVar1 - 1] * (((uVar4 & 0x7fffffff) >> 0x10 & 0xff) + 0x100);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar5 >> 8;
  uVar4 = uVar6 * iVar7 + iVar3;
  *puVar2 = uVar4 & 0x7fffffff;
  iVar7 = (((uVar4 & 0x7fffffff) >> 0x10 & 0xff) + 0x180) * -0x100;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar7 >> 8;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_4c[(bVar1 - 1) * 2] * 0x100;
  FUN_0801cf00(param_1,local_20[*(byte *)(param_1 + 0x11) - 1]);
  *(undefined1 *)(param_1 + 0xd) = 1;
  return in_lr;
}


