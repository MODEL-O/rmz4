// undefined FUN_080063d8(void)
// entry 0x80063d8


undefined4 FUN_080063d8(int param_1,int param_2)

{
  byte *pbVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  pbVar1 = DAT_08006490;
  iVar9 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_2 + 8);
  if (((*DAT_08006490 & 0x80) == 0) && (*(char *)(*(int *)(param_1 + 4) + 2) != '\x04')) {
    pbVar5 = (byte *)(iVar9 + 0x39);
    if ((*(byte *)(iVar9 + 0x36) & 4) == 0) {
      *pbVar5 = *(byte *)(*(int *)(param_1 + 4) + 6);
    }
    uVar4 = *pbVar5 & 0x80;
    if ((*pbVar5 & 0x80) == 0) {
      *(uint *)(iVar9 + 0x14) = uVar4;
      *(uint *)(iVar3 + 0x14) = uVar4;
      *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_2 + 4);
      if ((*(byte *)(iVar9 + 0x36) & 4) == 0) {
        *pbVar5 = *(byte *)(*(int *)(param_1 + 4) + 6);
      }
      if ((*(uint *)(iVar9 + 0x18) & 0x100) == 0) {
        *(undefined2 *)(iVar9 + 0x32) = 0x8000;
        *(undefined2 *)(iVar9 + 0x34) = 0x7fff;
      }
      iVar6 = **(int **)(iVar9 + 8);
      if (iVar6 < **(int **)(iVar3 + 8)) {
        *(short *)(iVar9 + 0x34) =
             (short)((*(int *)(param_2 + 0xc) - (uint)*(ushort *)(param_2 + 0x14)) - iVar6 >> 8);
      }
      else {
        *(short *)(iVar9 + 0x32) =
             (short)((*(int *)(param_2 + 0xc) + (uint)*(ushort *)(param_2 + 0x14)) - iVar6 >> 8);
      }
      iVar6 = *(int *)(iVar9 + 4);
      if (((*(char *)(iVar6 + 2) == '\x01') && (*(char *)(iVar6 + 4) != '\0')) &&
         ((*(uint *)(iVar3 + 0x1c) & 0xc0) != 0)) {
        *(int *)(iVar3 + 0xc) = iVar9;
        *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) | 0x80;
      }
      else {
        if ((*(byte *)(*(int *)(iVar3 + 4) + 9) & 1) != 0) {
          *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) | 0x2000;
        }
        *(int *)(iVar3 + 0xc) = iVar9;
        *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) | 0x40;
        if ((byte)(*(char *)(iVar6 + 4) - 1U) < 2) {
          pbVar1[2] = 4;
        }
        if ((*(byte *)(*(int *)(iVar3 + 4) + 9) & 1) != 0) {
          *(uint *)(iVar9 + 0x14) = *(uint *)(iVar9 + 0x14) | 0x1000;
        }
      }
      *(int *)(iVar9 + 0xc) = iVar3;
      uVar4 = *(uint *)(iVar9 + 0x14) | 0x120;
      *(uint *)(iVar9 + 0x14) = uVar4;
      *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) | uVar4;
      *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) | *(uint *)(iVar3 + 0x14);
      if (((*(int *)(iVar9 + 0x24) != 0) || (*(int *)(iVar3 + 0x24) != 0)) &&
         ((*(int *)(iVar9 + 0x14) != 0 || (*(uint *)(iVar3 + 0x14) != 0)))) {
        iVar7 = *(int *)(param_2 + 0xc);
        local_30 = *(int *)(param_1 + 0xc) - iVar7;
        iVar8 = *(int *)(param_2 + 0x10);
        iVar6 = *(int *)(param_1 + 0x10) - iVar8;
        local_2c = iVar6;
        local_28 = FUN_08128fb8((uint)*(ushort *)(param_2 + 0x14) * local_30,
                                (uint)*(ushort *)(param_1 + 0x14) +
                                (uint)*(ushort *)(param_2 + 0x14));
        local_28 = iVar7 + local_28;
        local_24 = FUN_08128fb8(iVar6 * (uint)*(ushort *)(param_2 + 0x16),
                                (uint)*(ushort *)(param_1 + 0x16) +
                                (uint)*(ushort *)(param_2 + 0x16));
        local_24 = iVar8 + local_24;
        uVar2 = FUN_08128bf4(local_30 * local_30 + local_2c * local_2c);
        local_30 = FUN_08128fb8(local_30 << 8,uVar2);
        local_2c = FUN_08128fb8(local_2c << 8,uVar2);
        if ((*(int *)(iVar9 + 0x24) != 0) && (*(int *)(iVar9 + 0x14) != 0)) {
          FUN_08128f88(iVar9,&local_28,&local_30);
        }
        if ((*(int *)(iVar3 + 0x24) != 0) && (*(int *)(iVar3 + 0x14) != 0)) {
          local_30 = -local_30;
          local_2c = -local_2c;
          FUN_08128f88(iVar3,&local_28,&local_30);
        }
      }
    }
  }
  return in_lr;
}


