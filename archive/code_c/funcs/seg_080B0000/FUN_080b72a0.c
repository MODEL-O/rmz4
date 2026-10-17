// undefined FUN_080b72a0(void)
// entry 0x80b72a0


undefined4 FUN_080b72a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  int local_44 [4];
  int iStack_34;
  int iStack_30;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  local_44[0] = *DAT_080b7348;
  local_44[1] = DAT_080b7348[1];
  local_44[2] = DAT_080b7348[2];
  local_44[3] = DAT_080b7348[3];
  iStack_34 = DAT_080b7348[4];
  iStack_30 = DAT_080b7348[5];
  local_2c = DAT_080b7348[6];
  iStack_28 = DAT_080b7348[7];
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x28);
  uVar4 = *(uint *)(param_1 + 0xb8) + 1;
  *(uint *)(param_1 + 0xb8) = uVar4;
  iVar1 = DAT_080b7358;
  if ((uVar4 & 0x1f) != 0) {
    uVar5 = (int)uVar4 >> 5 & 3;
    uVar4 = DAT_080b7350 * *DAT_080b734c + DAT_080b7354;
    iStack_24 = *(int *)(param_1 + 0x54) + local_44[uVar5 * 2] +
                ((uVar4 & 0x7fffffff) >> 0x10 & 7) * 0x100 + DAT_080b7358;
    iVar6 = *(int *)(param_1 + 0x58);
    iVar3 = local_44[uVar5 * 2 + 1];
    uVar4 = DAT_080b7350 * (uVar4 & 0x7fffffff) + DAT_080b7354;
    *DAT_080b734c = uVar4 & 0x7fffffff;
    iStack_20 = iVar6 + iVar3 + ((uVar4 & 0x7fffffff) >> 0x10 & 7) * 0x100 + iVar1;
    FUN_080e83c8(uVar2,&iStack_24,1,0);
  }
  return in_lr;
}


