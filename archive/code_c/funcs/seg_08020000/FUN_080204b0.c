// undefined FUN_080204b0(void)
// entry 0x80204b0


longlong FUN_080204b0(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint *puVar11;
  char *pcVar12;
  uint in_lr;
  
  pbVar6 = DAT_080207c0;
  pbVar5 = DAT_08020788;
  iVar4 = DAT_08020784;
  iVar3 = DAT_08020500;
  iVar10 = *(int *)(param_1 + 0x20);
  pcVar12 = (char *)(param_1 + 0x17c);
  if (*pcVar12 == '\0') {
    uVar2 = *(ushort *)(DAT_08020500 + 8);
    *(ushort *)(DAT_08020500 + 8) = uVar2 | 1;
    *(byte *)(DAT_08020504 + 4) = *(byte *)(DAT_08020504 + 4) | 8;
    *(undefined1 *)(param_1 + DAT_08020508) = 0;
    cVar1 = *(char *)(iVar3 + 2);
    if (cVar1 == '\0') {
      FUN_080275f0(iVar3 + 0x10,**(undefined4 **)(DAT_0802050c + 8));
      uVar7 = 1;
    }
    else {
      if (cVar1 != '\x01') {
        if (cVar1 == '\x02') {
          FUN_080275f0(iVar3 + 0x10,*(undefined4 *)(*(int *)(DAT_08020548 + 8) + 8));
          *pcVar12 = '\x01';
          goto LAB_08020842;
        }
        if (cVar1 != '\x03') {
          if (cVar1 == '\x04') {
            uVar7 = *(undefined4 *)(*(int *)(DAT_08020574 + 8) + 0x14);
          }
          else {
            if (cVar1 != '\x05') {
              if (cVar1 == '\x06') {
                *(ushort *)(iVar3 + 8) = (uVar2 | 5) & (ushort)DAT_080205b0;
                *pcVar12 = '\v';
              }
              goto LAB_08020842;
            }
            uVar7 = *(undefined4 *)(*(int *)(DAT_08020590 + 8) + 0x1c);
          }
          FUN_080275f0(iVar3 + 0x10,uVar7);
          *pcVar12 = cVar1;
          goto LAB_08020842;
        }
        FUN_080275f0(iVar3 + 0x10,*(undefined4 *)(*(int *)(DAT_08020560 + 8) + 0xc));
        goto LAB_080205ce;
      }
      FUN_080275f0(iVar3 + 0x10,*(undefined4 *)(*(int *)(DAT_0802052c + 8) + 4));
      uVar7 = 2;
    }
    FUN_0801f63c(uVar7);
    *pcVar12 = '\x01';
  }
  else {
    if ((*pcVar12 != '\x01') || (*(int *)(iVar10 + 0x54) <= DAT_080205d4)) {
      if (*(char *)(param_1 + 0x17c) == '\x02') {
        pcVar12 = (char *)(param_1 + DAT_08020628);
        if ((*pcVar12 == '\0') && (DAT_0802062c < *(int *)(iVar10 + 0x54))) {
          *(byte *)(DAT_08020630 + 1) = *(byte *)(DAT_08020630 + 1) | 2;
          puVar11 = (uint *)(DAT_08020634 + 0x168);
          uVar8 = *puVar11;
          if (uVar8 != 0xffffffff) {
            FUN_08002a98(uVar8 & 0xffff);
            *puVar11 = 0xffffffff;
          }
          *pcVar12 = '\x01';
        }
        else {
          pcVar12 = (char *)(param_1 + DAT_08020650);
          cVar1 = *pcVar12;
          if (cVar1 == '\x01') {
            *(undefined1 *)(DAT_08020654 + 1) = 0;
            *pcVar12 = '\x02';
          }
          else if ((cVar1 == '\x02') && (DAT_080206a0 < *(int *)(iVar10 + 0x54))) {
            puVar11 = (uint *)(DAT_080206a4 + 0x168);
            uVar8 = *puVar11;
            if (uVar8 != 0x9b) {
              if (uVar8 != 0xffffffff) {
                FUN_08002a98(uVar8 & 0xffff);
                *puVar11 = 0xffffffff;
              }
              FUN_08002a88(0x9b);
              *puVar11 = 0x9b;
            }
            *(undefined1 *)(param_1 + 0x17c) = 3;
          }
        }
      }
      else {
        if ((*(char *)(param_1 + 0x17c) == '\x03') && (DAT_080206c8 < *(int *)(iVar10 + 0x54))) {
          *(byte *)(DAT_080206cc + 4) = *(byte *)(DAT_080206cc + 4) | 8;
          uVar9 = *(undefined4 *)(*(int *)(DAT_080206d4 + 8) + 0x10);
          uVar7 = DAT_080206d0;
        }
        else {
          if ((*(char *)(param_1 + 0x17c) != '\x04') || (*(int *)(iVar10 + 0x54) <= DAT_08020710)) {
            pcVar12 = (char *)(param_1 + 0x17c);
            if (*pcVar12 == '\x05') {
              FUN_0801f63c(4);
              *pcVar12 = '\x06';
            }
            else if ((*pcVar12 == '\x06') && ((*(ushort *)(DAT_08020784 + 8) & 0x10) != 0)) {
              *DAT_08020788 = *DAT_08020788 | 0x80;
              pbVar5[1] = pbVar5[1] | 2;
              FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_0802078c + 8) + 0x20));
              uVar2 = (ushort)DAT_08020790;
              *(byte *)(iVar4 + 0x12) = *(byte *)(iVar4 + 0x12) & 0xfd;
              *(ushort *)(iVar4 + 8) = uVar2 & *(ushort *)(iVar4 + 8) | 1;
              *pcVar12 = '\a';
            }
            else {
              pcVar12 = (char *)(param_1 + 0x17c);
              if (*pcVar12 == '\a') {
                *DAT_080207c0 = *DAT_080207c0 & 0x7f;
                *(byte *)(DAT_080207c4 + 4) = *(byte *)(DAT_080207c4 + 4) & 0xf7;
                pbVar6[1] = 0;
                *pcVar12 = '\b';
              }
              else if ((*pcVar12 == '\b') && (DAT_080207e4 < *(int *)(iVar10 + 0x54))) {
                *(byte *)(DAT_080207e8 + 4) = *(byte *)(DAT_080207e8 + 4) | 8;
                *pcVar12 = '\t';
              }
              else if ((*(char *)(param_1 + 0x17c) == '\t') &&
                      (DAT_08020818 < *(int *)(iVar10 + 0x54))) {
                FUN_080275f0(DAT_0802081c,*(undefined4 *)(*(int *)(DAT_08020820 + 8) + 0x2c));
                FUN_0801f63c(6);
                *(char *)(param_1 + 0x17c) = '\n';
              }
              else if (*(char *)(param_1 + 0x17c) == '\n') {
                *(ushort *)(DAT_0802084c + 8) =
                     (*(ushort *)(DAT_0802084c + 8) | 4) & (ushort)DAT_08020850;
                *(char *)(param_1 + 0x17c) = '\v';
              }
            }
            goto LAB_08020842;
          }
          *(byte *)(DAT_08020714 + 4) = *(byte *)(DAT_08020714 + 4) | 8;
          uVar9 = *(undefined4 *)(*(int *)(DAT_0802071c + 8) + 0x18);
          uVar7 = DAT_08020718;
        }
        FUN_080275f0(uVar7,uVar9);
        FUN_0801f63c(5);
        *(undefined1 *)(param_1 + 0x17c) = 5;
      }
      goto LAB_08020842;
    }
    *DAT_080205d8 = 0x10e000;
    FUN_0801f63c(3);
LAB_080205ce:
    *pcVar12 = '\x02';
  }
LAB_08020842:
  return (ulonglong)in_lr << 0x20;
}


