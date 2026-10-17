// undefined FUN_0812712e(void)
// entry 0x812712e


void FUN_0812712e(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_08127378(*(undefined4 *)(param_1 + 0x3c));
  }
  if (-1 < *(int *)(param_1 + 4)) {
    iVar2 = *DAT_08127380;
    FUN_08127fc4(param_1);
    if (-1 < *(int *)(param_1 + 4)) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x22) + (uint)*(ushort *)(param_1 + 0x20);
LAB_081272b8:
      *(short *)(param_1 + 0x22) = (short)uVar3;
      if (0x95 < uVar3) {
        pbVar11 = *(byte **)(param_1 + 0x2c);
        uVar8 = 1;
        uVar9 = 0;
        uVar3 = (uint)*(byte *)(param_1 + 8);
        do {
          if ((*pbVar11 & 0x80) != 0) {
            uVar9 = uVar9 | uVar8;
            for (pbVar10 = *(byte **)(pbVar11 + 0x20); pbVar10 != (byte *)0x0;
                pbVar10 = *(byte **)(pbVar10 + 0x34)) {
              if ((*pbVar10 & 199) == 0) {
                FUN_08127b08(pbVar10);
              }
              else if ((pbVar10[0x10] != 0) &&
                      (iVar4 = pbVar10[0x10] - 1, pbVar10[0x10] = (byte)iVar4, iVar4 == 0)) {
                *pbVar10 = *pbVar10 | 0x40;
              }
            }
            if ((*pbVar11 & 0x40) != 0) {
              FUN_08127b1c(pbVar11);
              *pbVar11 = 0x80;
              pbVar11[0xf] = 2;
              pbVar11[0x13] = 0x40;
              pbVar11[0x19] = 0x16;
              pbVar11[0x24] = 1;
            }
            do {
              while( true ) {
                while( true ) {
                  if (pbVar11[1] != 0) {
                    pbVar11[1] = pbVar11[1] - 1;
                    if ((pbVar11[0x19] != 0) && (pbVar11[0x17] != 0)) {
                      if (pbVar11[0x1c] == 0) {
                        iVar4 = (uint)pbVar11[0x1a] + (uint)pbVar11[0x19];
                        pbVar11[0x1a] = (byte)iVar4;
                        if ((iVar4 + -0x40) * 0x1000000 < 0) {
                          iVar4 = (int)(char)(byte)iVar4;
                        }
                        else {
                          iVar4 = 0x80 - iVar4;
                        }
                        uVar7 = (int)(iVar4 * (uint)pbVar11[0x17]) >> 6;
                        if (((pbVar11[0x16] ^ uVar7) & 0xff) != 0) {
                          pbVar11[0x16] = (byte)uVar7;
                          if (pbVar11[0x18] == 0) {
                            bVar6 = 0xc;
                          }
                          else {
                            bVar6 = 3;
                          }
                          *pbVar11 = *pbVar11 | bVar6;
                        }
                      }
                      else {
                        pbVar11[0x1c] = pbVar11[0x1c] - 1;
                      }
                    }
                    goto LAB_08127294;
                  }
                  pbVar10 = *(byte **)(pbVar11 + 0x40);
                  bVar6 = *pbVar10;
                  uVar7 = (uint)bVar6;
                  if (uVar7 < 0x80) {
                    uVar7 = (uint)pbVar11[7];
                  }
                  else {
                    pbVar10 = pbVar10 + 1;
                    *(byte **)(pbVar11 + 0x40) = pbVar10;
                    if (0xbc < uVar7) {
                      pbVar11[7] = bVar6;
                    }
                  }
                  if (uVar7 < 0xcf) break;
                  FUN_08127378(uVar7 - 0xcf,param_1,pbVar11,*(undefined4 *)(iVar2 + 0x38));
                }
                if (0xb0 < uVar7) break;
                pbVar11[1] = *(byte *)((uVar7 - 0x80) + DAT_0812737c);
              }
              *(char *)(param_1 + 10) = (char)(uVar7 - 0xb1);
              FUN_08127378(param_1,pbVar11,pbVar10,
                           *(undefined4 *)(*(int *)(iVar2 + 0x34) + (uVar7 - 0xb1) * 4));
            } while (*pbVar11 != 0);
          }
LAB_08127294:
          if (uVar3 - 1 == 0 || (int)uVar3 < 1) goto LAB_081272a0;
          pbVar11 = pbVar11 + 0x50;
          uVar8 = uVar8 << 1;
          uVar3 = uVar3 - 1;
        } while( true );
      }
      uVar3 = (uint)*(byte *)(param_1 + 8);
      pbVar11 = *(byte **)(param_1 + 0x2c);
      do {
        if (((*pbVar11 & 0x80) != 0) && ((*pbVar11 & 0xf) != 0)) {
          FUN_0812808c(param_1,pbVar11);
          for (pbVar10 = *(byte **)(pbVar11 + 0x20); pbVar10 != (byte *)0x0;
              pbVar10 = *(byte **)(pbVar10 + 0x34)) {
            if ((*pbVar10 & 199) == 0) {
              FUN_08127b08(pbVar10);
            }
            else {
              bVar6 = pbVar10[1];
              if (((*pbVar11 & 3) != 0) && (FUN_081273cc(), (bVar6 & 7) != 0)) {
                pbVar10[0x1d] = pbVar10[0x1d] | 1;
              }
              if ((*pbVar11 & 0xc) != 0) {
                iVar4 = (uint)pbVar10[8] + (int)(char)pbVar11[8];
                if (iVar4 < 0) {
                  iVar4 = 0;
                }
                if ((bVar6 & 7) == 0) {
                  uVar5 = FUN_0812768c(*(undefined4 *)(pbVar10 + 0x24),iVar4,pbVar11[9]);
                  *(undefined4 *)(pbVar10 + 0x20) = uVar5;
                }
                else {
                  uVar5 = FUN_08127378(bVar6 & 7,iVar4,pbVar11[9],*(undefined4 *)(iVar2 + 0x30));
                  *(undefined4 *)(pbVar10 + 0x20) = uVar5;
                  pbVar10[0x1d] = pbVar10[0x1d] | 2;
                }
              }
            }
          }
          *pbVar11 = *pbVar11 & 0xf0;
        }
      } while ((uVar3 - 1 != 0 && 0 < (int)uVar3) &&
              (pbVar10 = pbVar11 + 0x50, bVar1 = -0x51 < (int)pbVar11, uVar3 = uVar3 - 1,
              pbVar11 = pbVar10, pbVar10 != (byte *)0x0 && bVar1));
    }
  }
LAB_08127368:
  *(undefined4 *)(param_1 + 0x34) = DAT_08127384;
                    /* WARNING: Could not recover jumptable at 0x08127378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(unaff_r8,unaff_r9,unaff_r10);
  return;
LAB_081272a0:
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if (uVar9 == 0) {
    *(undefined4 *)(param_1 + 4) = 0x80000000;
    goto LAB_08127368;
  }
  *(uint *)(param_1 + 4) = uVar9;
  uVar3 = *(ushort *)(param_1 + 0x22) - 0x96;
  goto LAB_081272b8;
}


