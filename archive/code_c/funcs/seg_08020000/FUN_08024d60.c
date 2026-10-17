// undefined FUN_08024d60(void)
// entry 0x8024d60


longlong FUN_08024d60(int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint *puVar13;
  char *pcVar14;
  uint in_lr;
  
  pbVar8 = DAT_08025134;
  pbVar7 = DAT_08025038;
  pbVar6 = DAT_08025008;
  iVar5 = DAT_08025004;
  iVar4 = DAT_08024dac;
  iVar12 = *(int *)(param_1 + 0x20);
  pcVar14 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar14;
  if (cVar1 == '\0') {
    *(ushort *)(DAT_08024dac + 8) = *(ushort *)(DAT_08024dac + 8) | 1;
    *(byte *)(DAT_08024db0 + 4) = *(byte *)(DAT_08024db0 + 4) | 8;
    *(undefined1 *)(param_1 + DAT_08024db4) = 0;
    cVar1 = *(char *)(iVar4 + 2);
    if (cVar1 == '\0') {
      FUN_080275f0(iVar4 + 0x10,**(undefined4 **)(DAT_08024db8 + 0x30));
      FUN_0801f63c(1);
      *pcVar14 = '\x01';
      goto LAB_0802512a;
    }
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        uVar10 = *(undefined4 *)(*(int *)(DAT_08024de4 + 0x30) + 8);
      }
      else {
        if (cVar1 != '\x03') {
          if (cVar1 != '\x04') {
            if (cVar1 != '\x05') {
              if (cVar1 != '\x06') goto LAB_0802512a;
              FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08024e4c + 0x30) + 0x28));
LAB_080250ba:
              *(undefined1 *)(param_1 + 0x17c) = 0xb;
              goto LAB_0802512a;
            }
            FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08024e30 + 0x30) + 0x24));
            goto LAB_0802508c;
          }
          FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08024e18 + 0x30) + 0x18));
          goto LAB_08024f7c;
        }
        uVar10 = *(undefined4 *)(*(int *)(DAT_08024e00 + 0x30) + 0x10);
      }
      FUN_080275f0(iVar4 + 0x10,uVar10);
      *pcVar14 = cVar1;
      goto LAB_0802512a;
    }
    FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08024dd0 + 0x30) + 4));
  }
  else if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      pcVar14 = (char *)(param_1 + DAT_08024ea4);
      if ((*pcVar14 == '\0') && (DAT_08024ea8 < *(int *)(iVar12 + 0x54))) {
        *(byte *)(DAT_08024eac + 1) = *(byte *)(DAT_08024eac + 1) | 2;
        puVar13 = (uint *)(DAT_08024eb0 + 0x168);
        uVar9 = *puVar13;
        if (uVar9 != 0xffffffff) {
          FUN_08002a98(uVar9 & 0xffff);
          *puVar13 = 0xffffffff;
        }
        *pcVar14 = '\x01';
      }
      else {
        pcVar14 = (char *)(param_1 + DAT_08024ecc);
        cVar1 = *pcVar14;
        if (cVar1 == '\x01') {
          *(undefined1 *)(DAT_08024ed0 + 1) = 0;
          *pcVar14 = '\x02';
        }
        else if ((cVar1 == '\x02') && (DAT_08024f1c < *(int *)(iVar12 + 0x54))) {
          puVar13 = (uint *)(DAT_08024f20 + 0x168);
          uVar9 = *puVar13;
          if (uVar9 != 0x9b) {
            if (uVar9 != 0xffffffff) {
              FUN_08002a98(uVar9 & 0xffff);
              *puVar13 = 0xffffffff;
            }
            FUN_08002a88(0x9b);
            *puVar13 = 0x9b;
          }
          *(undefined1 *)(param_1 + 0x17c) = 3;
        }
      }
      goto LAB_0802512a;
    }
    if ((cVar1 == '\x03') && (0xd2000 < *(int *)(iVar12 + 0x54))) {
      uVar11 = *(undefined4 *)(*(int *)(DAT_08024f40 + 0x30) + 0xc);
      uVar10 = DAT_08024f3c;
    }
    else {
      if ((*(char *)(param_1 + 0x17c) != '\x04') || (*(int *)(iVar12 + 0x54) < 0xd2001)) {
        pcVar14 = (char *)(param_1 + 0x17c);
        if (*pcVar14 == '\x05') {
          FUN_0801f63c(3);
          *pcVar14 = '\x06';
          goto LAB_0802512a;
        }
        if ((*pcVar14 == '\x06') && ((*(ushort *)(DAT_08025004 + 8) & 0x10) != 0)) {
          *DAT_08025008 = *DAT_08025008 | 0x80;
          pbVar6[1] = pbVar6[1] | 6;
          FUN_080275f0(iVar5 + 0x10,*(undefined4 *)(*(int *)(DAT_0802500c + 0x30) + 0x1c));
          uVar2 = *(ushort *)(iVar5 + 8);
          uVar3 = (ushort)DAT_08025010;
          *(byte *)(iVar5 + 0x12) = *(byte *)(iVar5 + 0x12) & 0xfd;
          *(byte *)(DAT_08025014 + 4) = *(byte *)(DAT_08025014 + 4) & 0xf7;
          *(ushort *)(iVar5 + 8) = uVar3 & uVar2 | 1;
          *pcVar14 = '\a';
          goto LAB_0802512a;
        }
        pcVar14 = (char *)(param_1 + 0x17c);
        if (*pcVar14 == '\a') {
          *DAT_08025038 = *DAT_08025038 & 0x7f;
          pbVar7[1] = 0;
          *pcVar14 = '\b';
          goto LAB_0802512a;
        }
        if ((*pcVar14 == '\b') && (DAT_08025058 < *(int *)(iVar12 + 0x54))) {
          *(byte *)(DAT_0802505c + 4) = *(byte *)(DAT_0802505c + 4) | 8;
          *pcVar14 = '\t';
          goto LAB_0802512a;
        }
        if ((*(char *)(param_1 + 0x17c) != '\t') || (*(int *)(iVar12 + 0x54) <= DAT_08025094)) {
          if ((*(char *)(param_1 + 0x17c) != '\n') || (*(int *)(iVar12 + 0x54) <= DAT_080250c0)) {
            if ((*(char *)(param_1 + 0x17c) == '\v') && (DAT_080250e8 < *(int *)(iVar12 + 0x54))) {
              *(byte *)(DAT_080250ec + 1) = *(byte *)(DAT_080250ec + 1) | 2;
              *(char *)(param_1 + 0x17c) = '\f';
            }
            else if (*(char *)(param_1 + 0x17c) == '\f') {
              *DAT_08025134 = *DAT_08025134 | 0x80;
              pbVar8[1] = 0;
              iVar4 = DAT_08025138;
              FUN_080275f0(DAT_08025138,*(undefined4 *)(*(int *)(DAT_0802513c + 0x30) + 0x2c));
              *(ushort *)(iVar4 + -8) = (*(ushort *)(iVar4 + -8) | 4) & (ushort)DAT_08025140;
              *(char *)(param_1 + 0x17c) = '\r';
            }
            goto LAB_0802512a;
          }
          FUN_0801f63c(6);
          goto LAB_080250ba;
        }
        FUN_080275f0(DAT_08025098,*(undefined4 *)(*(int *)(DAT_0802509c + 0x30) + 0x20));
        FUN_08006984(0x5f);
        FUN_0801f63c(5);
LAB_0802508c:
        *(undefined1 *)(param_1 + 0x17c) = 10;
        goto LAB_0802512a;
      }
      uVar11 = *(undefined4 *)(*(int *)(DAT_08024f88 + 0x30) + 0x14);
      uVar10 = DAT_08024f84;
    }
    FUN_080275f0(uVar10,uVar11);
    *(undefined1 *)(DAT_08024f8c + 1) = 0;
    FUN_0801f63c(4);
    *(byte *)(DAT_08024f90 + 4) = *(byte *)(DAT_08024f90 + 4) | 8;
LAB_08024f7c:
    *(undefined1 *)(param_1 + 0x17c) = 5;
    goto LAB_0802512a;
  }
  FUN_0801f63c(2);
  *pcVar14 = '\x02';
LAB_0802512a:
  return (ulonglong)in_lr << 0x20;
}


