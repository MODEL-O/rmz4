// undefined FUN_08023bd8(void)
// entry 0x8023bd8


longlong FUN_08023bd8(int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  char *pcVar14;
  uint in_lr;
  
  pbVar9 = DAT_08024028;
  iVar8 = DAT_08024024;
  pbVar7 = DAT_08023e54;
  pbVar6 = DAT_08023e24;
  iVar5 = DAT_08023e20;
  iVar4 = DAT_08023c28;
  iVar12 = *(int *)(param_1 + 0x20);
  pcVar14 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar14;
  if (cVar1 == '\0') {
    *(ushort *)(DAT_08023c28 + 8) = *(ushort *)(DAT_08023c28 + 8) | 1;
    *(byte *)(DAT_08023c2c + 4) = *(byte *)(DAT_08023c2c + 4) | 8;
    *(undefined1 *)(param_1 + DAT_08023c30) = 0;
    cVar1 = *(char *)(iVar4 + 2);
    if (cVar1 == '\0') {
      FUN_080275f0(iVar4 + 0x10,**(undefined4 **)(DAT_08023c34 + 0x24));
      FUN_0801f63c(1);
      *pcVar14 = '\x01';
      goto LAB_0802401a;
    }
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08023c68 + 0x24) + 8));
        *pcVar14 = '\x02';
      }
      else if (cVar1 == '\x03') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08023c8c + 0x24) + 0x10));
        FUN_0801f63c(4);
        *pcVar14 = '\x04';
      }
      else if (cVar1 == '\x04') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08023ca8 + 0x24) + 0x18));
        *pcVar14 = '\x05';
      }
      else if (cVar1 == '\x05') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08023cc4 + 0x24) + 0x20));
        *pcVar14 = '\t';
      }
      else if (cVar1 == '\x06') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08023ce0 + 0x24) + 0x28));
        *pcVar14 = '\v';
      }
      else if (cVar1 == '\a') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08023d00 + 0x24) + 0x30));
        *pcVar14 = '\f';
      }
      goto LAB_0802401a;
    }
    FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08023c4c + 0x24) + 4));
  }
  else if (cVar1 != '\x01') {
    if ((cVar1 == '\x02') && (DAT_08023d28 < *(int *)(iVar12 + 0x54))) {
      *pcVar14 = '\x03';
      goto LAB_0802401a;
    }
    if ((*(char *)(param_1 + 0x17c) == '\x03') && (0x1a4000 < *(int *)(iVar12 + 0x54))) {
      FUN_080275f0(DAT_08023d64,*(undefined4 *)(*(int *)(DAT_08023d68 + 0x24) + 0xc));
      FUN_0801f63c(4);
      *(byte *)(DAT_08023d6c + 4) = *(byte *)(DAT_08023d6c + 4) | 8;
      uVar10 = 5;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\x04') && (0x1a4000 < *(int *)(iVar12 + 0x54))) {
      FUN_080275f0(DAT_08023da8,*(undefined4 *)(*(int *)(DAT_08023dac + 0x24) + 0x14));
      FUN_0801f63c(4);
      *(byte *)(DAT_08023db0 + 4) = *(byte *)(DAT_08023db0 + 4) | 8;
      uVar10 = 5;
    }
    else {
      pcVar14 = (char *)(param_1 + 0x17c);
      if (*pcVar14 == '\x05') {
        FUN_0801f63c(3);
        *pcVar14 = '\x06';
        goto LAB_0802401a;
      }
      if ((*pcVar14 == '\x06') && ((*(ushort *)(DAT_08023e20 + 8) & 0x10) != 0)) {
        *DAT_08023e24 = *DAT_08023e24 | 0x80;
        pbVar6[1] = pbVar6[1] | 2;
        FUN_080275f0(iVar5 + 0x10,*(undefined4 *)(*(int *)(DAT_08023e28 + 0x24) + 0x1c));
        uVar2 = *(ushort *)(iVar5 + 8);
        uVar3 = (ushort)DAT_08023e2c;
        *(byte *)(iVar5 + 0x12) = *(byte *)(iVar5 + 0x12) & 0xfd;
        *(byte *)(DAT_08023e30 + 4) = *(byte *)(DAT_08023e30 + 4) & 0xf7;
        *(ushort *)(iVar5 + 8) = uVar3 & uVar2 | 1;
        *pcVar14 = '\a';
        goto LAB_0802401a;
      }
      if (*(char *)(param_1 + 0x17c) == '\a') {
        *DAT_08023e54 = *DAT_08023e54 & 0x7f;
        pbVar7[1] = 0;
        uVar10 = 8;
      }
      else if ((*(char *)(param_1 + 0x17c) == '\b') && (DAT_08023e78 < *(int *)(iVar12 + 0x54))) {
        FUN_0801f63c(5);
        *(byte *)(DAT_08023e7c + 4) = *(byte *)(DAT_08023e7c + 4) | 8;
        uVar10 = 9;
      }
      else {
        if (*(char *)(param_1 + 0x17c) == '\t') {
          pcVar14 = (char *)(param_1 + DAT_08023ecc);
          if ((*pcVar14 == '\0') && (DAT_08023ed0 < *(int *)(iVar12 + 0x54))) {
            *(byte *)(DAT_08023ed4 + 1) = *(byte *)(DAT_08023ed4 + 1) | 2;
            puVar13 = (uint *)(DAT_08023ed8 + 0x168);
            uVar11 = *puVar13;
            if (uVar11 != 0xffffffff) {
              FUN_08002a98(uVar11 & 0xffff);
              *puVar13 = 0xffffffff;
            }
            *pcVar14 = '\x01';
          }
          else {
            pcVar14 = (char *)(param_1 + DAT_08023ef4);
            cVar1 = *pcVar14;
            if (cVar1 == '\x01') {
              *(undefined1 *)(DAT_08023ef8 + 1) = 0;
              *pcVar14 = '\x02';
            }
            else if ((cVar1 == '\x02') && (DAT_08023f48 < *(int *)(iVar12 + 0x54))) {
              *(undefined1 *)(DAT_08023f4c + 1) = 0;
              puVar13 = (uint *)(DAT_08023f50 + 0x168);
              uVar11 = *puVar13;
              if (uVar11 != 0x9b) {
                if (uVar11 != 0xffffffff) {
                  FUN_08002a98(uVar11 & 0xffff);
                  *puVar13 = 0xffffffff;
                }
                FUN_08002a88(0x9b);
                *puVar13 = 0x9b;
              }
              *(undefined1 *)(param_1 + 0x17c) = 10;
            }
          }
          goto LAB_0802401a;
        }
        if ((*(char *)(param_1 + 0x17c) == '\n') && (DAT_08023f78 < *(int *)(iVar12 + 0x54))) {
          FUN_080275f0(DAT_08023f7c,*(undefined4 *)(*(int *)(DAT_08023f80 + 0x24) + 0x24));
          FUN_0801f63c(7);
          uVar10 = 0xc;
        }
        else if ((*(char *)(param_1 + 0x17c) == '\v') && (DAT_08023fb0 < *(int *)(iVar12 + 0x54))) {
          FUN_080275f0(DAT_08023fb4,*(undefined4 *)(*(int *)(DAT_08023fb8 + 0x24) + 0x2c));
          FUN_0801f63c(7);
          uVar10 = 0xc;
        }
        else if (*(char *)(param_1 + 0x17c) == '\f') {
          FUN_0801f63c(6);
          uVar10 = 0xd;
        }
        else {
          if ((*(char *)(param_1 + 0x17c) != '\r') || ((*(ushort *)(DAT_08024024 + 8) & 0x10) == 0))
          goto LAB_0802401a;
          *DAT_08024028 = *DAT_08024028 | 0x80;
          pbVar9[1] = pbVar9[1] | 2;
          FUN_080275f0(iVar8 + 0x10,*(undefined4 *)(*(int *)(DAT_0802402c + 0x24) + 0x34));
          uVar2 = (ushort)DAT_08024030;
          *(byte *)(iVar8 + 0x12) = *(byte *)(iVar8 + 0x12) & 0xfd;
          *(ushort *)(iVar8 + 8) = uVar2 & *(ushort *)(iVar8 + 8) | 4;
          uVar10 = 0xe;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x17c) = uVar10;
    goto LAB_0802401a;
  }
  FUN_0801f63c(2);
  *pcVar14 = '\x02';
LAB_0802401a:
  return (ulonglong)in_lr << 0x20;
}


