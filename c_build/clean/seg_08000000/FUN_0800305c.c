// undefined FUN_0800305c(void)
// entry 0x800305c


void FUN_0800305c(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *local_38;
  uint *local_34;
  uint local_30;
  
  puVar4 = (ushort *)(*(int *)(param_1 + 8) + (uint)*(byte *)(param_1 + 0x1a) * 4);
  local_38 = (uint *)(*(int *)(param_1 + 8) + (uint)*puVar4);
  local_34 = *(uint **)(DAT_08003224 + 0x400);
  local_30 = (uint)(byte)puVar4[1];
  if (local_30 <= (uint)((int)(DAT_08003224 + 0x400) - (int)local_34) >> 3) {
    if (local_30 != 0) {
      piVar2 = *(int **)(param_1 + 0xc);
      do {
        uVar5 = (uint)(*(byte *)(param_1 + 0x18) ^ *(byte *)(param_1 + 0x19));
        uVar8 = (uVar5 * 0xff ^ (uint)*(byte *)(param_1 + 0x1b)) + uVar5 & 0xff;
        iVar3 = *(char *)((int)local_38 + 2) * 0x100;
        iVar6 = (((*local_38 & 0xffff) >> 0xe) << 2 | (*local_38 & 0x3fff) >> 0xc) * 2;
        uVar10 = iVar3 + *(short *)(iVar6 + DAT_08003228);
        iVar9 = *(char *)((int)local_38 + 3) * 0x100;
        uVar5 = *(short *)(iVar6 + DAT_0800322c) + iVar9;
        uVar12 = (uint)*(byte *)(param_1 + 0x18);
        iVar11 = (int)*(short *)(uVar8 * 2 + DAT_08003230);
        uVar7 = (uint)*(byte *)(param_1 + 0x19);
        iVar6 = (int)*(short *)((uVar8 + 0x40 & 0xff) * 2 + DAT_08003230);
        uVar8 = (int)(((((int)(iVar11 * (((int)(uVar12 << 0x1f) >> 0x1f ^ uVar10) + uVar12) *
                              (uint)*(ushort *)(param_1 + 0x1c)) >> 8) +
                        ((int)(iVar6 * (((int)(uVar7 << 0x1f) >> 0x1f ^ uVar5) + uVar7) *
                              (uint)*(ushort *)(param_1 + 0x1e)) >> 8) >> 8) + (iVar9 - uVar5) +
                      piVar2[1]) - *(int *)(param_2 + 0xc)) >> 8;
        if ((uVar8 + 0x40 < 0xe0) &&
           (uVar5 = (int)(((((int)(iVar6 * (((int)(uVar12 << 0x1f) >> 0x1f ^ uVar10) + uVar12) *
                                  (uint)*(ushort *)(param_1 + 0x1c)) >> 8) +
                            ((int)(-iVar11 * (((int)(uVar7 << 0x1f) >> 0x1f ^ uVar5) + uVar7) *
                                  (uint)*(ushort *)(param_1 + 0x1e)) >> 8) >> 8) + (iVar3 - uVar10)
                          + *piVar2) - *(int *)(param_2 + 8)) >> 8, uVar5 + 0x80 <= DAT_08003234)) {
          *local_34 = *(uint *)(param_1 + 0x10) |
                      ((ushort)*local_38 & 0x3c00) << 0x12 | (ushort)*local_38 & 0xc000 |
                      uVar8 & 0xff | (uVar5 & DAT_08003238) << 0x10;
          sVar1 = *(short *)(param_1 + 0x14);
          *(short *)(local_34 + 1) = sVar1;
          *(ushort *)(local_34 + 1) = sVar1 + ((ushort)DAT_0800323c & (ushort)*local_38);
          local_34 = local_34 + 2;
        }
        local_38 = local_38 + 1;
        local_30 = local_30 - 1 & 0xff;
      } while (local_30 != 0);
    }
    *(uint **)(DAT_08003224 + 0x400) = local_34;
  }
  return;
}


