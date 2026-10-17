// undefined FUN_08022530(void)
// entry 0x8022530


longlong FUN_08022530(int param_1)

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
  uint *puVar16;
  char *pcVar17;
  uint in_lr;
  
  iVar9 = DAT_080229f0;
  pbVar8 = DAT_0802299c;
  iVar7 = DAT_08022998;
  pbVar6 = DAT_080227c8;
  pbVar5 = DAT_08022798;
  iVar4 = DAT_08022794;
  iVar13 = DAT_08022588;
  iVar15 = *(int *)(param_1 + 0x20);
  pcVar17 = (char *)(param_1 + 0x17c);
  cVar10 = *pcVar17;
  if (cVar10 == '\0') {
    *(ushort *)(DAT_08022588 + 8) = *(ushort *)(DAT_08022588 + 8) | 1;
    bVar1 = *(byte *)(DAT_0802258c + 4);
    *(byte *)(DAT_0802258c + 4) = bVar1 | 8;
    *(undefined1 *)(param_1 + DAT_08022590) = 0;
    if ((bVar1 & 0x40) == 0) {
      cVar10 = *(char *)(iVar13 + 2);
      if (cVar10 == '\0') {
        FUN_080275f0(iVar13 + 0x10,**(undefined4 **)(DAT_080225b8 + 0x18));
        FUN_0801f63c(1);
        *pcVar17 = '\x01';
        goto LAB_08022a16;
      }
      if (cVar10 == '\x01') {
        FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_080225d8 + 0x18) + 4));
        FUN_0801f63c(2);
        cVar10 = '\x02';
      }
      else {
        if (cVar10 == '\x02') {
          FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_080225f4 + 0x18) + 8));
          *pcVar17 = '\x02';
          goto LAB_08022a16;
        }
        if (cVar10 == '\x03') {
          FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08022610 + 0x18) + 0x10));
          cVar10 = '\x04';
        }
        else if (cVar10 == '\x04') {
          FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_0802262c + 0x18) + 0x18));
          cVar10 = '\x05';
        }
        else if (cVar10 == '\x05') {
          FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08022648 + 0x18) + 0x20));
          cVar10 = '\t';
        }
        else if (cVar10 == '\x06') {
          *(undefined4 *)(DAT_08022670 + 0x460) = 0x4f000;
          FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08022674 + 0x18) + 0x28));
          cVar10 = '\v';
        }
        else {
          if (cVar10 != '\a') goto LAB_08022a16;
          FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08022690 + 0x18) + 0x30));
          cVar10 = '\f';
        }
      }
    }
    else {
      FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08022594 + 0x18) + 0x40));
      *(undefined4 *)(param_1 + 0x180) = 0x708;
      cVar10 = '\x14';
    }
  }
  else if (cVar10 == '\x01') {
    FUN_0801f63c(2);
    cVar10 = '\x02';
  }
  else {
    if (((cVar10 != '\x02') || (*(int *)(iVar15 + 0x54) < 0xf0001)) ||
       (DAT_080226bc < *(int *)(iVar15 + 0x58))) {
      if ((*(char *)(param_1 + 0x17c) == '\x03') && (0xff000 < *(int *)(iVar15 + 0x54))) {
        uVar14 = *(undefined4 *)(*(int *)(DAT_080226e4 + 0x18) + 0xc);
        uVar12 = DAT_080226e0;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\x04') || (*(int *)(iVar15 + 0x54) < 0xff001)) {
          pcVar17 = (char *)(param_1 + 0x17c);
          if (*pcVar17 == '\x05') {
            FUN_0801f63c(3);
            cVar10 = '\x06';
          }
          else if ((*pcVar17 == '\x06') && ((*(ushort *)(DAT_08022794 + 8) & 0x10) != 0)) {
            *DAT_08022798 = *DAT_08022798 | 0x80;
            pbVar5[1] = pbVar5[1] | 2;
            FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_0802279c + 0x18) + 0x1c));
            uVar2 = *(ushort *)(iVar4 + 8);
            uVar3 = (ushort)DAT_080227a0;
            *(byte *)(iVar4 + 0x12) = *(byte *)(iVar4 + 0x12) & 0xfd;
            *(byte *)(DAT_080227a4 + 4) = *(byte *)(DAT_080227a4 + 4) & 0xf7;
            *(ushort *)(iVar4 + 8) = uVar3 & uVar2 | 1;
            cVar10 = '\a';
          }
          else {
            pcVar17 = (char *)(param_1 + 0x17c);
            if (*pcVar17 == '\a') {
              *DAT_080227c8 = *DAT_080227c8 & 0x7f;
              pbVar6[1] = 0;
              *pcVar17 = '\b';
              goto LAB_08022a16;
            }
            if ((*pcVar17 == '\b') && (DAT_080227f0 < *(int *)(iVar15 + 0x54))) {
              FUN_0801f63c(5);
              *(byte *)(DAT_080227f4 + 4) = *(byte *)(DAT_080227f4 + 4) | 8;
              *pcVar17 = '\t';
              goto LAB_08022a16;
            }
            if (*(char *)(param_1 + 0x17c) != '\t') {
              if ((*(char *)(param_1 + 0x17c) == '\n') && (DAT_080228f4 < *(int *)(iVar15 + 0x54)))
              {
                uVar14 = *(undefined4 *)(*(int *)(DAT_080228fc + 0x18) + 0x24);
                uVar12 = DAT_080228f8;
              }
              else {
                if ((*(char *)(param_1 + 0x17c) != '\v') ||
                   (*(int *)(iVar15 + 0x54) <= DAT_0802292c)) {
                  pcVar17 = (char *)(param_1 + 0x17c);
                  if (*pcVar17 == '\f') {
                    FUN_0801f63c(6);
                    cVar10 = '\r';
                  }
                  else if ((*pcVar17 == '\r') && ((*(ushort *)(DAT_08022998 + 8) & 0x10) != 0)) {
                    *DAT_0802299c = *DAT_0802299c | 0x80;
                    pbVar8[1] = pbVar8[1] | 2;
                    FUN_080275f0(iVar7 + 0x10,*(undefined4 *)(*(int *)(DAT_080229a0 + 0x18) + 0x34))
                    ;
                    uVar2 = (ushort)DAT_080229a4;
                    *(byte *)(iVar7 + 0x12) = *(byte *)(iVar7 + 0x12) & 0xfd;
                    *(ushort *)(iVar7 + 8) = uVar2 & *(ushort *)(iVar7 + 8) | 4;
                    cVar10 = '\x0e';
                  }
                  else {
                    pcVar17 = (char *)(param_1 + 0x17c);
                    if (*pcVar17 == '\x14') {
                      iVar13 = *(int *)(param_1 + 0x180);
                      if (iVar13 != 0) {
                        *(int *)(param_1 + 0x180) = iVar13 + -1;
                        goto LAB_08022a16;
                      }
                      puVar16 = (uint *)(DAT_080229f0 + 0x168);
                      uVar11 = *puVar16;
                      if (uVar11 != 0xffffffff) {
                        FUN_08002a98(uVar11 & 0xffff);
                        *puVar16 = 0xffffffff;
                      }
                      *(undefined4 *)(iVar9 + 0x154) = 2;
                      cVar10 = '\x15';
                    }
                    else {
                      if ((*pcVar17 != '\x15') || (*(int *)(DAT_08022a20 + 0x154) != 0))
                      goto LAB_08022a16;
                      *(ushort *)(DAT_08022a20 + 8) =
                           (*(ushort *)(DAT_08022a20 + 8) | 4) & (ushort)DAT_08022a24;
                      cVar10 = '\x16';
                    }
                  }
                  goto LAB_08022a14;
                }
                uVar14 = *(undefined4 *)(*(int *)(DAT_08022934 + 0x18) + 0x2c);
                uVar12 = DAT_08022930;
              }
              FUN_080275f0(uVar12,uVar14);
              FUN_0801f63c(7);
              *(undefined1 *)(param_1 + 0x17c) = 0xc;
              goto LAB_08022a16;
            }
            pcVar17 = (char *)(param_1 + DAT_08022840);
            if ((*pcVar17 != '\0') || (*(int *)(iVar15 + 0x54) <= DAT_08022844)) {
              pcVar17 = (char *)(param_1 + DAT_08022868);
              cVar10 = *pcVar17;
              if (cVar10 == '\x01') {
                *(undefined1 *)(DAT_0802286c + 1) = 0;
                *pcVar17 = '\x02';
              }
              else if ((cVar10 == '\x02') && (DAT_080228cc < *(int *)(iVar15 + 0x54))) {
                *(undefined1 *)(DAT_080228d0 + 1) = 0;
                *(undefined4 *)(DAT_080228d4 + 0x460) = 0x4f000;
                puVar16 = (uint *)(DAT_080228d8 + 0x168);
                uVar11 = *puVar16;
                if (uVar11 != 0x9b) {
                  if (uVar11 != 0xffffffff) {
                    FUN_08002a98(uVar11 & 0xffff);
                    *puVar16 = 0xffffffff;
                  }
                  FUN_08002a88(0x9b);
                  *puVar16 = 0x9b;
                }
                *(undefined1 *)(param_1 + 0x17c) = 10;
              }
              goto LAB_08022a16;
            }
            *(byte *)(DAT_08022848 + 1) = *(byte *)(DAT_08022848 + 1) | 2;
            puVar16 = (uint *)(DAT_0802284c + 0x168);
            uVar11 = *puVar16;
            if (uVar11 != 0xffffffff) {
              FUN_08002a98(uVar11 & 0xffff);
              *puVar16 = 0xffffffff;
            }
            cVar10 = '\x01';
          }
          goto LAB_08022a14;
        }
        uVar14 = *(undefined4 *)(*(int *)(DAT_08022724 + 0x18) + 0x14);
        uVar12 = DAT_08022720;
      }
      FUN_080275f0(uVar12,uVar14);
      FUN_0801f63c(4);
      *(byte *)(DAT_08022728 + 4) = *(byte *)(DAT_08022728 + 4) | 8;
      *(undefined1 *)(param_1 + 0x17c) = 5;
      goto LAB_08022a16;
    }
    cVar10 = '\x03';
  }
LAB_08022a14:
  *pcVar17 = cVar10;
LAB_08022a16:
  return (ulonglong)in_lr << 0x20;
}


