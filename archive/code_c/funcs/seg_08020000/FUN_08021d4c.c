// undefined FUN_08021d4c(void)
// entry 0x8021d4c


longlong FUN_08021d4c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  char *pcVar16;
  uint *puVar17;
  uint in_lr;
  
  iVar9 = DAT_0802220c;
  pbVar8 = DAT_080221b8;
  iVar7 = DAT_080221b4;
  pbVar6 = DAT_08021ff8;
  pbVar5 = DAT_08021fc8;
  iVar4 = DAT_08021fc4;
  iVar13 = DAT_08021dac;
  iVar15 = *(int *)(param_1 + 0x20);
  pcVar16 = (char *)(param_1 + 0x17c);
  cVar10 = *pcVar16;
  if (cVar10 == '\0') {
    *(ushort *)(DAT_08021dac + 8) = *(ushort *)(DAT_08021dac + 8) | 1;
    iVar4 = DAT_08021db0;
    bVar1 = *(byte *)(DAT_08021db0 + 4);
    *(byte *)(DAT_08021db0 + 4) = bVar1 | 8;
    *(undefined1 *)(param_1 + DAT_08021db4) = 0;
    if ((bVar1 & 0x40) != 0) {
      FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08021db8 + 0x14) + 0x40));
      *(undefined4 *)(param_1 + 0x180) = 0x708;
      *pcVar16 = '\x14';
      goto LAB_08022232;
    }
    cVar10 = *(char *)(iVar13 + 2);
    if (cVar10 == '\0') {
      FUN_080275f0(iVar13 + 0x10,**(undefined4 **)(DAT_08021dfc + 0x14));
      FUN_0801f63c(1);
      *(byte *)(iVar4 + 9) = *(byte *)(iVar4 + 9) & 0x3f;
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xf0;
      *pcVar16 = '\x01';
      goto LAB_08022232;
    }
    if (cVar10 == '\x01') {
      FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08021e14 + 0x14) + 4));
      goto LAB_08021ecc;
    }
    if (cVar10 == '\x02') {
      FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08021e30 + 0x14) + 8));
      *pcVar16 = '\x02';
      goto LAB_08022232;
    }
    if (cVar10 == '\x03') {
      FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08021e54 + 0x14) + 0x10));
      FUN_0801f63c(4);
      *pcVar16 = '\x04';
      goto LAB_08022232;
    }
    if (cVar10 != '\x04') {
      if (cVar10 == '\x05') {
        FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08021e84 + 0x14) + 0x20));
LAB_08022018:
        *(undefined1 *)(param_1 + 0x17c) = 9;
        goto LAB_08022232;
      }
      if (cVar10 == '\x06') {
        *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xf7;
        FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08021ea8 + 0x14) + 0x28));
        *pcVar16 = '\v';
        goto LAB_08022232;
      }
      if (cVar10 != '\a') goto LAB_08022232;
      FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08021ec4 + 0x14) + 0x30));
LAB_08022142:
      *(undefined1 *)(param_1 + 0x17c) = 0xc;
      goto LAB_08022232;
    }
    FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08021e6c + 0x14) + 0x18));
  }
  else {
    if (cVar10 == '\x01') {
LAB_08021ecc:
      FUN_0801f63c(2);
      *pcVar16 = '\x02';
      goto LAB_08022232;
    }
    if ((cVar10 == '\x02') && (DAT_08021eec < *(int *)(iVar15 + 0x54))) {
      *pcVar16 = '\x03';
      goto LAB_08022232;
    }
    if ((*(char *)(param_1 + 0x17c) == '\x03') && (0x186000 < *(int *)(iVar15 + 0x54))) {
      uVar14 = *(undefined4 *)(*(int *)(DAT_08021f14 + 0x14) + 0xc);
      uVar12 = DAT_08021f10;
    }
    else {
      if ((*(char *)(param_1 + 0x17c) != '\x04') || (*(int *)(iVar15 + 0x54) < 0x186001)) {
        pcVar16 = (char *)(param_1 + 0x17c);
        if (*pcVar16 == '\x05') {
          FUN_0801f63c(3);
          cVar10 = '\x06';
        }
        else if ((*pcVar16 == '\x06') && ((*(ushort *)(DAT_08021fc4 + 8) & 0x10) != 0)) {
          *DAT_08021fc8 = *DAT_08021fc8 | 0x80;
          pbVar5[1] = pbVar5[1] | 2;
          FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08021fcc + 0x14) + 0x1c));
          uVar2 = *(ushort *)(iVar4 + 8);
          uVar3 = (ushort)DAT_08021fd0;
          *(byte *)(iVar4 + 0x12) = *(byte *)(iVar4 + 0x12) & 0xfd;
          *(byte *)(DAT_08021fd4 + 4) = *(byte *)(DAT_08021fd4 + 4) & 0xf7;
          *(ushort *)(iVar4 + 8) = uVar3 & uVar2 | 1;
          cVar10 = '\a';
        }
        else {
          cVar10 = *(char *)(param_1 + 0x17c);
          if (cVar10 == '\a') {
            *DAT_08021ff8 = *DAT_08021ff8 & 0x7f;
            pbVar6[1] = 0;
            *(char *)(param_1 + 0x17c) = '\b';
            goto LAB_08022232;
          }
          if ((cVar10 == '\b') && (DAT_08022020 < *(int *)(iVar15 + 0x54))) {
            FUN_0801f63c(5);
            *(byte *)(DAT_08022024 + 4) = *(byte *)(DAT_08022024 + 4) | 8;
            goto LAB_08022018;
          }
          if (*(char *)(param_1 + 0x17c) != '\t') {
            if ((*(char *)(param_1 + 0x17c) == '\n') && (DAT_08022110 < *(int *)(iVar15 + 0x54))) {
              uVar14 = *(undefined4 *)(*(int *)(DAT_08022118 + 0x14) + 0x24);
              uVar12 = DAT_08022114;
            }
            else {
              if ((*(char *)(param_1 + 0x17c) != '\v') || (*(int *)(iVar15 + 0x54) <= DAT_08022148))
              {
                pcVar16 = (char *)(param_1 + 0x17c);
                if (*pcVar16 == '\f') {
                  FUN_0801f63c(6);
                  cVar10 = '\r';
                }
                else if ((*pcVar16 == '\r') && ((*(ushort *)(DAT_080221b4 + 8) & 0x10) != 0)) {
                  *DAT_080221b8 = *DAT_080221b8 | 0x80;
                  pbVar8[1] = pbVar8[1] | 2;
                  FUN_080275f0(iVar7 + 0x10,*(undefined4 *)(*(int *)(DAT_080221bc + 0x14) + 0x34));
                  uVar2 = (ushort)DAT_080221c0;
                  *(byte *)(iVar7 + 0x12) = *(byte *)(iVar7 + 0x12) & 0xfd;
                  *(ushort *)(iVar7 + 8) = uVar2 & *(ushort *)(iVar7 + 8) | 4;
                  cVar10 = '\x0e';
                }
                else {
                  pcVar16 = (char *)(param_1 + 0x17c);
                  if (*pcVar16 == '\x14') {
                    iVar13 = *(int *)(param_1 + 0x180);
                    if (iVar13 != 0) {
                      *(int *)(param_1 + 0x180) = iVar13 + -1;
                      goto LAB_08022232;
                    }
                    puVar17 = (uint *)(DAT_0802220c + 0x168);
                    uVar11 = *puVar17;
                    if (uVar11 != 0xffffffff) {
                      FUN_08002a98(uVar11 & 0xffff);
                      *puVar17 = 0xffffffff;
                    }
                    *(undefined4 *)(iVar9 + 0x154) = 2;
                    cVar10 = '\x15';
                  }
                  else {
                    if ((*pcVar16 != '\x15') || (*(int *)(DAT_08022240 + 0x154) != 0))
                    goto LAB_08022232;
                    *(ushort *)(DAT_08022240 + 8) =
                         (*(ushort *)(DAT_08022240 + 8) | 4) & (ushort)DAT_08022244;
                    cVar10 = '\x16';
                  }
                }
                goto LAB_08022230;
              }
              uVar14 = *(undefined4 *)(*(int *)(DAT_08022150 + 0x14) + 0x2c);
              uVar12 = DAT_0802214c;
            }
            FUN_080275f0(uVar12,uVar14);
            FUN_0801f63c(7);
            goto LAB_08022142;
          }
          pcVar16 = (char *)(param_1 + DAT_08022070);
          if ((*pcVar16 != '\0') || (*(int *)(iVar15 + 0x54) <= DAT_08022074)) {
            pcVar16 = (char *)(param_1 + DAT_08022098);
            cVar10 = *pcVar16;
            if (cVar10 == '\x01') {
              *(undefined1 *)(DAT_0802209c + 1) = 0;
              *pcVar16 = '\x02';
            }
            else if ((cVar10 == '\x02') && (DAT_080220ec < *(int *)(iVar15 + 0x54))) {
              *(undefined1 *)(DAT_080220f0 + 1) = 0;
              puVar17 = (uint *)(DAT_080220f4 + 0x168);
              uVar11 = *puVar17;
              if (uVar11 != 0x9b) {
                if (uVar11 != 0xffffffff) {
                  FUN_08002a98(uVar11 & 0xffff);
                  *puVar17 = 0xffffffff;
                }
                FUN_08002a88(0x9b);
                *puVar17 = 0x9b;
              }
              *(undefined1 *)(param_1 + 0x17c) = 10;
            }
            goto LAB_08022232;
          }
          *(byte *)(DAT_08022078 + 1) = *(byte *)(DAT_08022078 + 1) | 2;
          puVar17 = (uint *)(DAT_0802207c + 0x168);
          uVar11 = *puVar17;
          if (uVar11 != 0xffffffff) {
            FUN_08002a98(uVar11 & 0xffff);
            *puVar17 = 0xffffffff;
          }
          cVar10 = '\x01';
        }
LAB_08022230:
        *pcVar16 = cVar10;
        goto LAB_08022232;
      }
      uVar14 = *(undefined4 *)(*(int *)(DAT_08021f54 + 0x14) + 0x14);
      uVar12 = DAT_08021f50;
    }
    FUN_080275f0(uVar12,uVar14);
    FUN_0801f63c(4);
    *(byte *)(DAT_08021f58 + 4) = *(byte *)(DAT_08021f58 + 4) | 8;
  }
  *(undefined1 *)(param_1 + 0x17c) = 5;
LAB_08022232:
  return (ulonglong)in_lr << 0x20;
}


