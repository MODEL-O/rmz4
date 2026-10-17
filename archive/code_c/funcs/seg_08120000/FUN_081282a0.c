// undefined FUN_081282a0(void)
// entry 0x81282a0


undefined4 FUN_081282a0(void)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *extraout_r1;
  uint uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte bVar14;
  undefined4 in_lr;
  uint local_3c;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  
  iVar3 = *DAT_081282c0;
  if (*(char *)(iVar3 + 10) == '\0') {
    *(undefined1 *)(iVar3 + 10) = 0xe;
  }
  else {
    *(char *)(iVar3 + 10) = *(char *)(iVar3 + 10) + -1;
  }
  uVar13 = 1;
  pbVar12 = *(byte **)(iVar3 + 0x1c);
  do {
    bVar2 = *pbVar12;
    pbVar7 = (byte *)(uint)bVar2;
    if ((bVar2 & 199) != 0) {
      local_34 = DAT_08128324;
      local_30 = DAT_0812832c;
      pbVar11 = DAT_08128328;
      if (uVar13 == 2) {
LAB_08128358:
        local_2c = local_34 + 0xb;
        pbVar9 = local_30 + 4;
      }
      else {
        local_34 = DAT_081283b0;
        local_30 = DAT_081283b8;
        pbVar11 = DAT_081283b4;
        if ((int)uVar13 < 3) {
          if (uVar13 != 1) goto LAB_08128358;
          local_34 = DAT_0812830c;
          local_30 = DAT_08128314;
          local_2c = DAT_0812830c + 4;
          pbVar9 = DAT_08128314 + 2;
          pbVar11 = DAT_08128310;
        }
        else {
          if (uVar13 != 3) goto LAB_08128358;
          local_34 = DAT_08128344;
          local_30 = DAT_0812834c;
          local_2c = DAT_08128344 + 4;
          pbVar9 = DAT_0812834c + 2;
          pbVar11 = DAT_08128348;
        }
      }
      local_3c = (uint)*(byte *)(iVar3 + 10);
      bVar14 = *local_30;
      pbVar4 = (byte *)(uint)bVar14;
      if ((bVar2 & 0x80) == 0) {
        if ((bVar2 & 4) == 0) {
          pbVar11 = pbVar12 + 0x40;
          if ((bVar2 & 0x40) == 0) goto LAB_081284c8;
          if ((bVar2 & 3) == 0) goto LAB_081284c8;
          pbVar11 = (byte *)0x0;
          *pbVar12 = bVar2 & 0xfc;
          pbVar12[0xb] = pbVar12[7];
          if (pbVar12[7] == 0) {
LAB_081284fa:
            iVar5 = (uint)pbVar12[10] * (uint)pbVar12[0xc] + 0xff;
            pbVar7 = (byte *)0x0;
            pbVar12[9] = (byte)((uint)iVar5 >> 8);
            if ((iVar5 >> 8 & 0xffU) != 0) {
              *pbVar12 = *pbVar12 | 4;
              pbVar12[0x1d] = pbVar12[0x1d] | 1;
              if (uVar13 != 3) {
                bVar14 = 8;
              }
              goto LAB_081285ce;
            }
            goto LAB_0812847a;
          }
          pbVar7 = (byte *)(uint)pbVar12[0x1d];
          pbVar12[0x1d] = pbVar12[0x1d] | 1;
          if (uVar13 != 3) {
            pbVar11 = (byte *)(uint)pbVar12[7];
            pbVar4 = pbVar11;
          }
          goto LAB_081285bc;
        }
        bVar2 = pbVar12[0xd];
        pbVar12[0xd] = (byte)(bVar2 - 1);
        pbVar7 = (byte *)(uVar13 + 1);
        if (0 < (int)((bVar2 - 1) * 0x1000000)) goto LAB_081285ce;
LAB_0812847a:
        FUN_081281e8(uVar13 & 0xff,pbVar7);
        *pbVar12 = 0;
      }
      else {
        pbVar7 = pbVar12 + 0x40;
        if ((bVar2 & 0x40) != 0) goto LAB_0812847a;
        *pbVar12 = 3;
        pbVar12[0x1d] = 3;
        FUN_08128238(pbVar12);
        if (uVar13 == 2) {
LAB_081283c8:
          *pbVar11 = pbVar12[0x1e] + (char)*(undefined4 *)(pbVar12 + 0x24) * '@';
LAB_08128428:
          pbVar4 = (byte *)(pbVar12[4] + 8);
          bVar2 = 0;
          if (pbVar12[0x1e] != 0) {
            bVar2 = 0x40;
          }
LAB_08128436:
          pbVar12[0x1a] = bVar2;
        }
        else {
          if ((int)uVar13 < 3) {
            if (uVar13 == 1) {
              *local_34 = pbVar12[0x1f];
              goto LAB_081283c8;
            }
LAB_0812841c:
            *pbVar11 = pbVar12[0x1e];
            *local_2c = (byte)(*(int *)(pbVar12 + 0x24) << 3);
            goto LAB_08128428;
          }
          if (uVar13 != 3) goto LAB_0812841c;
          if (*(int *)(pbVar12 + 0x24) != *(int *)(pbVar12 + 0x28)) {
            *local_34 = 0x40;
            puVar1 = DAT_08128410;
            puVar10 = *(undefined4 **)(pbVar12 + 0x24);
            *DAT_08128410 = *puVar10;
            puVar1[1] = puVar10[1];
            puVar1[2] = puVar10[2];
            puVar1[3] = puVar10[3];
            *(undefined4 **)(pbVar12 + 0x28) = puVar10;
          }
          *local_34 = bVar2 & 0x40;
          *pbVar11 = pbVar12[0x1e];
          if (pbVar12[0x1e] != 0) {
            bVar2 = 0xc0;
            goto LAB_08128436;
          }
          pbVar12[0x1a] = 0x80;
        }
        pbVar11 = (byte *)0x0;
        pbVar12[0xb] = pbVar12[4];
        pbVar7 = pbVar12 + 0x40;
        if (pbVar12[4] == 0) goto LAB_0812858e;
        pbVar12[9] = 0;
LAB_081285bc:
        bVar14 = (byte)pbVar4;
        pbVar12[0xb] = pbVar12[0xb] - 1;
        if (local_3c == 0) {
          local_3c = 0xffffffff;
LAB_081284c8:
          bVar14 = (byte)pbVar4;
          if (pbVar12[0xb] == 0) {
            if (uVar13 == 3) {
              pbVar7 = (byte *)(uint)pbVar12[0x1d];
              pbVar12[0x1d] = pbVar12[0x1d] | 1;
            }
            FUN_08128238(pbVar12,pbVar7,pbVar11);
            pbVar11 = (byte *)(uint)*pbVar12;
            if ((*pbVar12 & 3) == 0) {
              bVar2 = pbVar12[9];
              pbVar12[9] = (byte)(bVar2 - 1);
              pbVar7 = (byte *)0xff;
              if (0 < (int)((bVar2 - 1) * 0x1000000)) {
                bVar2 = pbVar12[7];
                goto LAB_081285ba;
              }
              goto LAB_081284fa;
            }
            pbVar7 = extraout_r1;
            if (((uint)pbVar11 & 3) == 1) {
LAB_08128532:
              pbVar12[9] = pbVar12[0x19];
              bVar2 = 7;
            }
            else if (((uint)pbVar11 & 3) == 2) {
              bVar2 = pbVar12[9];
              pbVar12[9] = (byte)(bVar2 - 1);
              iVar5 = (bVar2 - 1) * 0x1000000;
              pbVar11 = (byte *)(uint)pbVar12[0x19];
              pbVar7 = (byte *)((int)pbVar11 * 0x1000000);
              if (iVar5 + (int)pbVar11 * -0x1000000 == 0 || iVar5 < (int)pbVar7) {
LAB_08128552:
                bVar14 = (byte)pbVar4;
                if (pbVar12[6] != 0) {
                  *pbVar12 = *pbVar12 - 1;
                  pbVar11 = (byte *)(uint)pbVar12[0x1d];
                  pbVar12[0x1d] = pbVar12[0x1d] | 1;
                  if (uVar13 != 3) {
                    pbVar4 = &SupervisorCall;
                  }
                  goto LAB_08128532;
                }
                *pbVar12 = *pbVar12 & 0xfc;
                goto LAB_081284fa;
              }
              bVar2 = pbVar12[5];
            }
            else {
              bVar2 = pbVar12[9];
              pbVar12[9] = (byte)(bVar2 + 1);
              pbVar7 = (byte *)0xff;
              pbVar11 = (byte *)(uint)pbVar12[10];
              if (pbVar11 <= (byte *)(bVar2 + 1 & 0xff)) {
LAB_0812858e:
                pbVar11 = (byte *)0x0;
                *pbVar12 = *pbVar12 - 1;
                pbVar12[0xb] = pbVar12[5];
                pbVar7 = (byte *)0x0;
                if (pbVar12[5] == 0) goto LAB_08128552;
                pbVar7 = (byte *)(uint)pbVar12[0x1d];
                pbVar12[0x1d] = pbVar12[0x1d] | 1;
                pbVar12[9] = pbVar12[10];
                if (uVar13 != 3) {
                  pbVar11 = (byte *)(uint)pbVar12[5];
                  pbVar4 = pbVar11;
                }
                goto LAB_081285bc;
              }
              bVar2 = pbVar12[4];
            }
LAB_081285ba:
            pbVar12[0xb] = bVar2;
          }
          goto LAB_081285bc;
        }
LAB_081285ce:
        if ((pbVar12[0x1d] & 2) != 0) {
          if (((int)uVar13 < 4) && ((pbVar12[1] & 8) != 0)) {
            if (*DAT_081285f8 < 0x40) {
              uVar6 = *(int *)(pbVar12 + 0x20) + 2;
              uVar8 = DAT_081285fc;
            }
            else {
              if (0x7f < *DAT_081285f8) goto LAB_0812860e;
              uVar6 = *(int *)(pbVar12 + 0x20) + 1;
              uVar8 = DAT_0812861c;
            }
            *(uint *)(pbVar12 + 0x20) = uVar6 & uVar8;
          }
LAB_0812860e:
          if (uVar13 == 4) {
            *local_2c = (byte)*(undefined4 *)(pbVar12 + 0x20) | *local_2c & 8;
          }
          else {
            *local_2c = (byte)*(undefined4 *)(pbVar12 + 0x20);
          }
          bVar2 = pbVar12[0x21] + (pbVar12[0x1a] & 0xc0);
          pbVar12[0x1a] = bVar2;
          *pbVar9 = bVar2;
        }
        if ((pbVar12[0x1d] & 1) != 0) {
          *DAT_08128690 = *DAT_08128690 & ~pbVar12[0x1c] | pbVar12[0x1b];
          if (uVar13 == 3) {
            *local_30 = *(byte *)((uint)pbVar12[9] + DAT_08128694);
            if ((pbVar12[0x1a] & 0x80) != 0) {
              *local_34 = 0x80;
              *pbVar9 = pbVar12[0x1a];
              pbVar12[0x1a] = pbVar12[0x1a] & 0x7f;
            }
          }
          else {
            *local_30 = pbVar12[9] * '\x10' + (bVar14 & 0xf);
            *pbVar9 = pbVar12[0x1a] | 0x80;
            if ((uVar13 == 1) && ((*local_34 & 8) == 0)) {
              *pbVar9 = pbVar12[0x1a] | 0x80;
            }
          }
        }
      }
      pbVar12[0x1d] = 0;
    }
    uVar13 = uVar13 + 1;
    pbVar12 = pbVar12 + 0x40;
    if (4 < (int)uVar13) {
      return in_lr;
    }
  } while( true );
}


