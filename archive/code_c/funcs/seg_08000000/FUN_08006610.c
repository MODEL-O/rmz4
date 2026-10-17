// undefined FUN_08006610(void)
// entry 0x8006610


undefined4 FUN_08006610(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar8 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_2 + 8);
  if ((*(uint *)(iVar8 + 0x18) & 0x100) != 0) {
    if (**(int **)(iVar8 + 8) + *(short *)(iVar8 + 0x34) * 0x100 <
        (int)(*(int *)(param_2 + 0xc) - (uint)*(ushort *)(param_2 + 0x14))) {
      return in_lr;
    }
    if ((int)(*(int *)(param_2 + 0xc) + (uint)*(ushort *)(param_2 + 0x14)) <
        **(int **)(iVar8 + 8) + *(short *)(iVar8 + 0x32) * 0x100) {
      return in_lr;
    }
  }
  *(undefined4 *)(iVar8 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar8 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_2 + 4);
  pbVar4 = (byte *)(iVar8 + 0x36);
  if ((*pbVar4 & 1) == 0) {
    *(undefined1 *)(iVar8 + 0x37) = *(undefined1 *)(*(int *)(param_1 + 4) + 3);
  }
  if ((*pbVar4 & 2) == 0) {
    *(undefined1 *)(iVar8 + 0x38) = *(undefined1 *)(*(int *)(param_1 + 4) + 5);
  }
  if ((*pbVar4 & 4) == 0) {
    *(undefined1 *)(iVar8 + 0x39) = *(undefined1 *)(*(int *)(param_1 + 4) + 6);
  }
  if ((*pbVar4 & 8) == 0) {
    *(undefined1 *)(iVar8 + 0x3a) = *(undefined1 *)(*(int *)(param_1 + 4) + 7);
  }
  if ((*pbVar4 & 6) == 0) {
    *(undefined4 *)(iVar8 + 0x3c) = *(undefined4 *)(*(int *)(param_1 + 4) + 0xc);
    goto LAB_0800672a;
  }
  iVar5 = *(int *)(param_1 + 4);
  if (*(byte *)(iVar5 + 4) < 4) {
    if ((*(byte *)(iVar8 + 0x39) & 1) == 0) {
      iVar5 = (uint)*(byte *)(iVar5 + 4) * 5;
      if ((*(byte *)(iVar8 + 0x39) & 2) == 0) {
        uVar3 = iVar5 + (uint)*(byte *)(iVar8 + 0x38);
      }
      else {
        uVar3 = iVar5 + *(byte *)(iVar8 + 0x38) + 1;
      }
      goto LAB_08006724;
    }
    iVar5 = -0x80000000;
  }
  else {
    uVar3 = *(byte *)(iVar5 + 4) + 0x10;
LAB_08006724:
    iVar5 = 1 << (uVar3 & 0xff);
  }
  *(int *)(iVar8 + 0x3c) = iVar5;
LAB_0800672a:
  FUN_08005bec(iVar8,iVar2);
  if (((*(int *)(iVar8 + 0x24) != 0) || (*(int *)(iVar2 + 0x24) != 0)) &&
     ((*(int *)(iVar8 + 0x14) != 0 || (*(int *)(iVar2 + 0x14) != 0)))) {
    iVar6 = *(int *)(param_2 + 0xc);
    local_30 = *(int *)(param_1 + 0xc) - iVar6;
    iVar7 = *(int *)(param_2 + 0x10);
    iVar5 = *(int *)(param_1 + 0x10) - iVar7;
    local_2c = iVar5;
    local_28 = FUN_08128fb8((uint)*(ushort *)(param_2 + 0x14) * local_30,
                            (uint)*(ushort *)(param_1 + 0x14) + (uint)*(ushort *)(param_2 + 0x14));
    local_28 = iVar6 + local_28;
    local_24 = FUN_08128fb8(iVar5 * (uint)*(ushort *)(param_2 + 0x16),
                            (uint)*(ushort *)(param_1 + 0x16) + (uint)*(ushort *)(param_2 + 0x16));
    local_24 = iVar7 + local_24;
    uVar1 = FUN_08128bf4(local_30 * local_30 + local_2c * local_2c);
    local_30 = FUN_08128fb8(local_30 << 8,uVar1);
    local_2c = FUN_08128fb8(local_2c << 8,uVar1);
    if ((*(int *)(iVar8 + 0x24) != 0) && (*(int *)(iVar8 + 0x14) != 0)) {
      FUN_08128f88(iVar8,&local_28,&local_30);
    }
    if ((*(int *)(iVar2 + 0x24) != 0) && (*(int *)(iVar2 + 0x14) != 0)) {
      local_30 = -local_30;
      local_2c = -local_2c;
      FUN_08128f88(iVar2,&local_28,&local_30);
    }
  }
  return in_lr;
}


