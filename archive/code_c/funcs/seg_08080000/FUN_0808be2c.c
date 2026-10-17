// undefined FUN_0808be2c(void)
// entry 0x808be2c


undefined4 FUN_0808be2c(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  byte local_5c [4];
  int aiStack_58 [4];
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [2];
  
  FUN_08129258(local_5c,DAT_0808bfb0,3);
  uVar1 = FUN_08128bf4(0xa0000);
  iVar2 = -(uVar1 & 0xffff);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x1f;
  }
  local_48 = FUN_08128fb8(0x3000,-(iVar2 >> 5));
  uVar1 = FUN_08128bf4(0xa0000);
  local_44 = -(uVar1 & 0xffff);
  uVar1 = FUN_08128bf4(0x140000);
  iVar2 = -(uVar1 & 0xffff);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x1f;
  }
  local_40 = FUN_08128fb8(0x6000,-(iVar2 >> 5));
  uVar1 = FUN_08128bf4(0x140000);
  local_3c = -(uVar1 & 0xffff);
  FUN_08129258(aiStack_58,aiStack_58 + 4,0x10);
  local_28[0] = *DAT_0808bfb4;
  local_28[1] = DAT_0808bfb4[1];
  uVar1 = (uint)((*(byte *)(DAT_0808bfb8 + DAT_0808bfbc) & 0xf) == 2);
  piVar3 = aiStack_58 + uVar1 * 2;
  iVar5 = (*(byte *)(param_1 + 10) >> 4 & 1) * 2 + -1;
  local_38 = *(int *)(param_1 + 0x54) + iVar5 * (0x1000 - *piVar3);
  local_34 = *(int *)(param_1 + 0x58) - (aiStack_58[uVar1 * 2 + 1] + 0x2400);
  local_30 = iVar5 * *piVar3;
  local_2c = aiStack_58[uVar1 * 2 + 1];
  FUN_080a47a4(&local_38,&local_30);
  iVar2 = DAT_0808bfc4;
  local_38 = *(int *)(param_1 + 0x54) + iVar5 * 0x600;
  local_34 = *(int *)(param_1 + 0x58) + DAT_0808bfc0;
  iVar6 = 0;
  do {
    iVar4 = (int)*(short *)((local_5c[iVar6] + 0x40 & 0xff) * 2 + iVar2) * local_28[uVar1];
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    local_2c = (int)*(short *)((uint)local_5c[iVar6] * 2 + iVar2) * local_28[uVar1];
    if (local_2c < 0) {
      local_2c = local_2c + 0xff;
    }
    local_2c = local_2c >> 8;
    local_30 = iVar5 * (iVar4 >> 8);
    FUN_080d9b9c(&local_38,&local_30,0,0);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  return in_lr;
}


