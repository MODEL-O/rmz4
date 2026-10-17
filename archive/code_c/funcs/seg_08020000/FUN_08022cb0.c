// undefined FUN_08022cb0(void)
// entry 0x8022cb0


longlong FUN_08022cb0(int param_1)

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
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  uint *puVar15;
  char *pcVar16;
  uint in_lr;
  undefined4 local_24;
  undefined4 local_20;
  
  pbVar9 = DAT_080230c4;
  iVar8 = DAT_080230c0;
  pbVar7 = DAT_08022f4c;
  pbVar6 = DAT_08022f1c;
  iVar5 = DAT_08022f18;
  iVar4 = DAT_08022d3c;
  iVar14 = *(int *)(param_1 + 0x20);
  pcVar16 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar16;
  if (cVar1 == '\0') {
    local_24 = 0;
    local_20 = 0;
    *(ushort *)(DAT_08022d3c + 8) = *(ushort *)(DAT_08022d3c + 8) | 1;
    iVar5 = DAT_08022d40;
    *(byte *)(DAT_08022d40 + 4) = *(byte *)(DAT_08022d40 + 4) | 8;
    uVar11 = FUN_080f7558(&local_24,0,0);
    *(undefined4 *)(param_1 + 0x284) = uVar11;
    cVar1 = *(char *)(iVar4 + 2);
    if (cVar1 == '\0') {
      FUN_080275f0(iVar4 + 0x10,**(undefined4 **)(DAT_08022d44 + 0x1c));
      FUN_0801f63c(1);
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xf;
      *pcVar16 = '\x01';
      goto LAB_080230ae;
    }
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08022d78 + 0x1c) + 8));
        *pcVar16 = '\x02';
      }
      else if (cVar1 == '\x03') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08022d9c + 0x1c) + 0x10));
        FUN_0801f63c(4);
        *pcVar16 = '\x04';
      }
      else if (cVar1 == '\x04') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08022db8 + 0x1c) + 0x18));
        *pcVar16 = '\x05';
      }
      else if (cVar1 == '\x05') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08022dd4 + 0x1c) + 0x20));
        *pcVar16 = '\t';
      }
      else if (cVar1 == '\x06') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08022df0 + 0x1c) + 0x28));
        *pcVar16 = '\v';
      }
      else if (cVar1 == '\a') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08022e10 + 0x1c) + 0x30));
        *pcVar16 = '\f';
      }
      goto LAB_080230ae;
    }
    FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08022d5c + 0x1c) + 4));
  }
  else if (cVar1 != '\x01') {
    if (((cVar1 == '\x02') && (0x78000 < *(int *)(iVar14 + 0x54))) &&
       (*(int *)(iVar14 + 0x54) <= DAT_08022e40)) {
      *pcVar16 = '\x03';
      goto LAB_080230ae;
    }
    if ((*(char *)(param_1 + 0x17c) == '\x03') && (0x87000 < *(int *)(iVar14 + 0x54))) {
      uVar13 = *(undefined4 *)(*(int *)(DAT_08022e68 + 0x1c) + 0xc);
      uVar11 = DAT_08022e64;
    }
    else {
      if ((*(char *)(param_1 + 0x17c) != '\x04') || (*(int *)(iVar14 + 0x54) < 0x87001)) {
        if (*(char *)(param_1 + 0x17c) == '\x05') {
          FUN_0801f63c(3);
          uVar10 = 6;
        }
        else {
          if ((*(char *)(param_1 + 0x17c) != '\x06') ||
             ((*(ushort *)(DAT_08022f18 + 8) & 0x10) == 0)) {
            pcVar16 = (char *)(param_1 + 0x17c);
            if (*pcVar16 == '\a') {
              *DAT_08022f4c = *DAT_08022f4c & 0x7f;
              pbVar7[1] = 0;
              *pcVar16 = '\b';
              goto LAB_080230ae;
            }
            if ((*pcVar16 == '\b') && (0x96000 < *(int *)(iVar14 + 0x54))) {
              *(undefined1 *)(DAT_08022f80 + DAT_08022f84) = 0xff;
              FUN_0801f63c(5);
              *(byte *)(DAT_08022f88 + 4) = *(byte *)(DAT_08022f88 + 4) | 8;
              *pcVar16 = '\t';
              goto LAB_080230ae;
            }
            if (*(char *)(param_1 + 0x17c) == '\t') {
              if (((uint)(*(int *)(iVar14 + 0x54) + DAT_08022fe8) <= DAT_08022fec) &&
                 (*(int *)(iVar14 + 0x58) <= DAT_08022ff0)) {
                puVar15 = (uint *)(DAT_08022ff4 + 0x168);
                uVar12 = *puVar15;
                if (uVar12 != 0x9b) {
                  if (uVar12 != 0xffffffff) {
                    FUN_08002a98(uVar12 & 0xffff);
                    *puVar15 = 0xffffffff;
                  }
                  FUN_08002a88(0x9b);
                  *puVar15 = 0x9b;
                }
                *(undefined1 *)(param_1 + 0x17c) = 10;
              }
              goto LAB_080230ae;
            }
            if ((*(char *)(param_1 + 0x17c) == '\n') && (0x88000 < *(int *)(iVar14 + 0x54))) {
              uVar13 = *(undefined4 *)(*(int *)(DAT_08023014 + 0x1c) + 0x24);
              uVar11 = DAT_08023010;
            }
            else {
              if ((*(char *)(param_1 + 0x17c) != '\v') || (*(int *)(iVar14 + 0x54) < 0x87001)) {
                if (*(char *)(param_1 + 0x17c) == '\f') {
                  FUN_0801f63c(6);
                  uVar10 = 0xd;
                }
                else {
                  if ((*(char *)(param_1 + 0x17c) != '\r') ||
                     ((*(ushort *)(DAT_080230c0 + 8) & 0x10) == 0)) goto LAB_080230ae;
                  *DAT_080230c4 = *DAT_080230c4 | 0x80;
                  pbVar9[1] = pbVar9[1] | 2;
                  FUN_080275f0(iVar8 + 0x10,*(undefined4 *)(*(int *)(DAT_080230c8 + 0x1c) + 0x34));
                  uVar2 = (ushort)DAT_080230cc;
                  *(byte *)(iVar8 + 0x12) = *(byte *)(iVar8 + 0x12) & 0xfd;
                  *(ushort *)(iVar8 + 8) = uVar2 & *(ushort *)(iVar8 + 8) | 4;
                  uVar10 = 0xe;
                }
                goto LAB_080230ac;
              }
              uVar13 = *(undefined4 *)(*(int *)(DAT_0802304c + 0x1c) + 0x2c);
              uVar11 = DAT_08023048;
            }
            FUN_080275f0(uVar11,uVar13);
            FUN_0801f63c(7);
            *(undefined1 *)(param_1 + 0x17c) = 0xc;
            goto LAB_080230ae;
          }
          *DAT_08022f1c = *DAT_08022f1c | 0x80;
          pbVar6[1] = pbVar6[1] | 2;
          FUN_080275f0(iVar5 + 0x10,*(undefined4 *)(*(int *)(DAT_08022f20 + 0x1c) + 0x1c));
          uVar2 = *(ushort *)(iVar5 + 8);
          uVar3 = (ushort)DAT_08022f24;
          *(byte *)(iVar5 + 0x12) = *(byte *)(iVar5 + 0x12) & 0xfd;
          *(byte *)(DAT_08022f28 + 4) = *(byte *)(DAT_08022f28 + 4) & 0xf7;
          *(ushort *)(iVar5 + 8) = uVar3 & uVar2 | 1;
          uVar10 = 7;
        }
LAB_080230ac:
        *(undefined1 *)(param_1 + 0x17c) = uVar10;
        goto LAB_080230ae;
      }
      uVar13 = *(undefined4 *)(*(int *)(DAT_08022ea8 + 0x1c) + 0x14);
      uVar11 = DAT_08022ea4;
    }
    FUN_080275f0(uVar11,uVar13);
    FUN_0801f63c(4);
    *(byte *)(DAT_08022eac + 4) = *(byte *)(DAT_08022eac + 4) | 8;
    *(undefined1 *)(param_1 + 0x17c) = 5;
    goto LAB_080230ae;
  }
  FUN_0801f63c(2);
  *pcVar16 = '\x02';
LAB_080230ae:
  return (ulonglong)in_lr << 0x20;
}


