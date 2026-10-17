// undefined FUN_080c7890(void)
// entry 0x80c7890


undefined4 FUN_080c7890(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  bVar1 = *(byte *)(param_1 + 0xb4);
  bVar2 = *(byte *)(param_1 + 10);
  FUN_0801cff0(param_1);
  local_20 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  local_1c = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar5 = FUN_08007c7c();
  if (sVar5 != 0) {
    uVar6 = FUN_08007c7c(local_20,*(undefined4 *)(param_1 + 0x58));
    uVar7 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),local_1c);
    if (((int)-(uVar7 & 0xffff) >> 0x1f) - ((int)-(uVar6 & 0xffff) >> 0x1f) == 1) {
      iVar9 = (int)((bVar1 - 0x40) * 0x1000000) >> 0x1f;
      local_20 = FUN_080c7d88(&local_20,-iVar9);
      local_20 = local_20 + (iVar9 * -2 + -1) * -0x400;
      iVar9 = 0xc0;
    }
    else {
      iVar9 = (int)((bVar1 + 0x80) * 0x1000000) >> 0x1f;
      local_1c = FUN_080c7d88(&local_20,2 - iVar9);
      local_1c = local_1c + (iVar9 * -2 + -1) * -0x400;
      iVar9 = ((bVar2 >> 4 & 1) + 1 & 1) << 7;
    }
    cVar4 = (char)iVar9;
    *(char *)(param_1 + 0xb4) = cVar4;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      cVar4 = -0x80 - cVar4;
    }
    *(char *)(param_1 + 0x24) = cVar4 + -0x80;
    iVar3 = DAT_080c79b4;
    iVar8 = (int)*(short *)((iVar9 + 0x40U & 0xff) * 2 + DAT_080c79b4) * *(int *)(param_1 + 0xb8);
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar8 >> 8;
    iVar9 = (int)*(short *)(iVar9 * 2 + iVar3) * *(int *)(param_1 + 0xb8);
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar9 >> 8;
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  *(int *)(param_1 + 0x54) = local_20;
  *(int *)(param_1 + 0x58) = local_1c;
  return in_lr;
}


