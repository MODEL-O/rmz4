// undefined FUN_080233d8(void)
// entry 0x80233d8


longlong FUN_080233d8(int param_1)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  uint *puVar16;
  char *pcVar17;
  uint in_lr;
  
  pbVar9 = DAT_08023898;
  iVar8 = DAT_08023894;
  pbVar7 = DAT_080236c4;
  pbVar6 = DAT_08023694;
  iVar5 = DAT_08023690;
  iVar13 = DAT_08023450;
  iVar15 = *(int *)(param_1 + 0x20);
  pcVar17 = (char *)(param_1 + 0x17c);
  cVar2 = *pcVar17;
  if (cVar2 == '\0') {
    *(ushort *)(DAT_08023450 + 8) = *(ushort *)(DAT_08023450 + 8) | 1;
    *(byte *)(DAT_08023454 + 4) = *(byte *)(DAT_08023454 + 4) | 8;
    *(undefined1 *)(param_1 + DAT_08023458) = 0;
    iVar5 = DAT_0802345c;
    *(undefined1 *)(DAT_0802345c + DAT_08023460) = 0;
    *(undefined1 *)(iVar5 + DAT_08023464) = 0xc;
    cVar2 = *(char *)(iVar13 + 2);
    if (cVar2 == '\0') {
      FUN_080275f0(iVar13 + 0x10,**(undefined4 **)(DAT_08023468 + 0x20));
      FUN_0801f63c(1);
      *(undefined2 *)(iVar13 + 10) = 0;
      *pcVar17 = '\x01';
      goto LAB_08023882;
    }
    if (cVar2 != '\x01') {
      if (cVar2 == '\x02') {
        FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_0802349c + 0x20) + 8));
        *pcVar17 = '\x02';
      }
      else if (cVar2 == '\x03') {
        if (*(short *)(iVar13 + 10) == 0) {
          FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_080234dc + 0x20) + 0x40));
        }
        else {
          FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_080234bc + 0x20) + 0x10));
        }
        *(undefined1 *)(param_1 + 0x17c) = 4;
      }
      else if (cVar2 == '\x04') {
        FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_080234f8 + 0x20) + 0x18));
        *pcVar17 = '\x05';
      }
      else if (cVar2 == '\x05') {
        FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08023514 + 0x20) + 0x20));
        *pcVar17 = '\t';
      }
      else if (cVar2 == '\x06') {
        FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08023530 + 0x20) + 0x28));
        *pcVar17 = '\v';
      }
      else if (cVar2 == '\a') {
        FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08023550 + 0x20) + 0x30));
        *pcVar17 = '\f';
      }
      goto LAB_08023882;
    }
    FUN_080275f0(iVar13 + 0x10,*(undefined4 *)(*(int *)(DAT_08023480 + 0x20) + 4));
  }
  else if (cVar2 != '\x01') {
    if ((cVar2 == '\x02') && (0x69000 < *(int *)(iVar15 + 0x54))) {
      bVar1 = *(int *)(iVar15 + 0x58) <= DAT_08023584;
      iVar13 = DAT_080235a0;
      if (bVar1) {
        iVar13 = DAT_08023588;
      }
      *(ushort *)(iVar13 + 10) = (ushort)bVar1;
      *(undefined1 *)(param_1 + 0x17c) = 3;
      goto LAB_08023882;
    }
    if (((*(char *)(param_1 + 0x17c) == '\x03') && (0xc3000 < *(int *)(iVar15 + 0x54))) &&
       (0x6f000 < *(int *)(iVar15 + 0x58))) {
      uVar14 = *(undefined4 *)(*(int *)(DAT_080235d4 + 0x20) + 0xc);
      uVar12 = DAT_080235d0;
    }
    else {
      if (((*(char *)(param_1 + 0x17c) != '\x04') || (*(int *)(iVar15 + 0x54) < 0xc3001)) ||
         (*(int *)(iVar15 + 0x58) < 0x6f001)) {
        if (*(char *)(param_1 + 0x17c) == '\x05') {
          FUN_0801f63c(3);
          uVar10 = 6;
        }
        else {
          if ((*(char *)(param_1 + 0x17c) != '\x06') ||
             ((*(ushort *)(DAT_08023690 + 8) & 0x10) == 0)) {
            pcVar17 = (char *)(param_1 + 0x17c);
            if (*pcVar17 == '\a') {
              *DAT_080236c4 = *DAT_080236c4 & 0x7f;
              pbVar7[1] = 0;
              *pcVar17 = '\b';
              goto LAB_08023882;
            }
            if ((*pcVar17 == '\b') && (DAT_080236ec < *(int *)(iVar15 + 0x54))) {
              FUN_0801f63c(5);
              *(byte *)(DAT_080236f0 + 4) = *(byte *)(DAT_080236f0 + 4) | 8;
              *pcVar17 = '\t';
              goto LAB_08023882;
            }
            if (*(char *)(param_1 + 0x17c) == '\t') {
              pcVar17 = (char *)(param_1 + DAT_08023740);
              if ((*pcVar17 == '\0') && (DAT_08023744 < *(int *)(iVar15 + 0x54))) {
                *(byte *)(DAT_08023748 + 1) = *(byte *)(DAT_08023748 + 1) | 2;
                puVar16 = (uint *)(DAT_0802374c + 0x168);
                uVar11 = *puVar16;
                if (uVar11 != 0xffffffff) {
                  FUN_08002a98(uVar11 & 0xffff);
                  *puVar16 = 0xffffffff;
                }
                *pcVar17 = '\x01';
              }
              else {
                pcVar17 = (char *)(param_1 + DAT_08023768);
                cVar2 = *pcVar17;
                if (cVar2 == '\x01') {
                  *(undefined1 *)(DAT_0802376c + 1) = 0;
                  *pcVar17 = '\x02';
                }
                else if ((cVar2 == '\x02') && (DAT_080237bc < *(int *)(iVar15 + 0x54))) {
                  *(undefined1 *)(DAT_080237c0 + 1) = 0;
                  puVar16 = (uint *)(DAT_080237c4 + 0x168);
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
              }
              goto LAB_08023882;
            }
            if ((*(char *)(param_1 + 0x17c) == '\n') && (DAT_080237e0 < *(int *)(iVar15 + 0x54))) {
              uVar14 = *(undefined4 *)(*(int *)(DAT_080237e8 + 0x20) + 0x24);
              uVar12 = DAT_080237e4;
            }
            else {
              if ((*(char *)(param_1 + 0x17c) != '\v') || (*(int *)(iVar15 + 0x54) <= DAT_08023818))
              {
                if (*(char *)(param_1 + 0x17c) == '\f') {
                  FUN_0801f63c(6);
                  uVar10 = 0xd;
                }
                else {
                  if ((*(char *)(param_1 + 0x17c) != '\r') ||
                     ((*(ushort *)(DAT_08023894 + 8) & 0x10) == 0)) goto LAB_08023882;
                  *DAT_08023898 = *DAT_08023898 | 0x80;
                  pbVar9[1] = pbVar9[1] | 2;
                  FUN_080275f0(iVar8 + 0x10,*(undefined4 *)(*(int *)(DAT_0802389c + 0x20) + 0x34));
                  uVar3 = (ushort)DAT_080238a0;
                  *(byte *)(iVar8 + 0x12) = *(byte *)(iVar8 + 0x12) & 0xfd;
                  *(ushort *)(iVar8 + 8) = uVar3 & *(ushort *)(iVar8 + 8) | 4;
                  uVar10 = 0xe;
                }
                goto LAB_08023880;
              }
              uVar14 = *(undefined4 *)(*(int *)(DAT_08023820 + 0x20) + 0x2c);
              uVar12 = DAT_0802381c;
            }
            FUN_080275f0(uVar12,uVar14);
            FUN_0801f63c(7);
            *(undefined1 *)(param_1 + 0x17c) = 0xc;
            goto LAB_08023882;
          }
          *DAT_08023694 = *DAT_08023694 | 0x80;
          pbVar6[1] = pbVar6[1] | 2;
          FUN_080275f0(iVar5 + 0x10,*(undefined4 *)(*(int *)(DAT_08023698 + 0x20) + 0x1c));
          uVar3 = *(ushort *)(iVar5 + 8);
          uVar4 = (ushort)DAT_0802369c;
          *(byte *)(iVar5 + 0x12) = *(byte *)(iVar5 + 0x12) & 0xfd;
          *(byte *)(DAT_080236a0 + 4) = *(byte *)(DAT_080236a0 + 4) & 0xf7;
          *(ushort *)(iVar5 + 8) = uVar4 & uVar3 | 1;
          uVar10 = 7;
        }
LAB_08023880:
        *(undefined1 *)(param_1 + 0x17c) = uVar10;
        goto LAB_08023882;
      }
      uVar14 = *(undefined4 *)(*(int *)(DAT_08023620 + 0x20) + 0x14);
      uVar12 = DAT_0802361c;
    }
    FUN_080275f0(uVar12,uVar14);
    FUN_0801f63c(4);
    *(byte *)(DAT_08023624 + 4) = *(byte *)(DAT_08023624 + 4) | 8;
    *(undefined1 *)(param_1 + 0x17c) = 5;
    goto LAB_08023882;
  }
  FUN_0801f63c(2);
  *pcVar17 = '\x02';
LAB_08023882:
  return (ulonglong)in_lr << 0x20;
}


