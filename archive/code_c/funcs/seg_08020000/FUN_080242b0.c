// undefined FUN_080242b0(void)
// entry 0x80242b0


longlong FUN_080242b0(int param_1)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  char *pcVar14;
  uint in_lr;
  
  pbVar8 = DAT_08024760;
  iVar7 = DAT_0802475c;
  pbVar6 = DAT_0802455c;
  pbVar5 = DAT_08024528;
  iVar11 = DAT_08024310;
  iVar12 = *(int *)(param_1 + 0x20);
  pcVar14 = (char *)(param_1 + 0x17c);
  cVar2 = *pcVar14;
  if (cVar2 == '\0') {
    *(ushort *)(DAT_08024310 + 8) = *(ushort *)(DAT_08024310 + 8) | 1;
    *(byte *)(DAT_08024314 + 4) = *(byte *)(DAT_08024314 + 4) | 8;
    *(undefined1 *)(param_1 + DAT_08024318) = 0;
    cVar2 = *(char *)(iVar11 + 2);
    if (cVar2 == '\0') {
      FUN_080275f0(iVar11 + 0x10,**(undefined4 **)(DAT_0802431c + 0x28));
      FUN_0801f63c(1);
      *(undefined2 *)(iVar11 + 10) = 0;
      *pcVar14 = '\x01';
      goto LAB_0802474e;
    }
    if (cVar2 != '\x01') {
      if (cVar2 == '\x02') {
        FUN_080275f0(iVar11 + 0x10,*(undefined4 *)(*(int *)(DAT_08024350 + 0x28) + 8));
        *pcVar14 = '\x02';
        goto LAB_0802474e;
      }
      if (cVar2 == '\x03') {
        FUN_080275f0(iVar11 + 0x10,*(undefined4 *)(*(int *)(DAT_08024374 + 0x28) + 0x10));
        FUN_0801f63c(4);
        *pcVar14 = '\x04';
        goto LAB_0802474e;
      }
      if (cVar2 == '\x04') {
        FUN_080275f0(iVar11 + 0x10,*(undefined4 *)(*(int *)(DAT_08024390 + 0x28) + 0x18));
        *pcVar14 = '\x05';
        goto LAB_0802474e;
      }
      if (cVar2 != '\x05') {
        if (cVar2 == '\x06') {
          FUN_080275f0(iVar11 + 0x10,*(undefined4 *)(*(int *)(DAT_080243e0 + 0x28) + 0x28));
          *pcVar14 = '\v';
        }
        else if (cVar2 == '\a') {
          FUN_080275f0(iVar11 + 0x10,*(undefined4 *)(*(int *)(DAT_08024400 + 0x28) + 0x30));
          *pcVar14 = '\f';
        }
        goto LAB_0802474e;
      }
      if (*(short *)(iVar11 + 10) == 0) {
        FUN_080275f0(iVar11 + 0x10,*(undefined4 *)(*(int *)(DAT_080243c4 + 0x28) + 0x40));
      }
      else {
        FUN_080275f0(iVar11 + 0x10,*(undefined4 *)(*(int *)(DAT_080243b0 + 0x28) + 0x20));
      }
LAB_080245a2:
      *(undefined1 *)(param_1 + 0x17c) = 9;
      goto LAB_0802474e;
    }
    FUN_080275f0(iVar11 + 0x10,*(undefined4 *)(*(int *)(DAT_08024334 + 0x28) + 4));
  }
  else if (cVar2 != '\x01') {
    if ((cVar2 == '\x02') && (0x12c000 < *(int *)(iVar12 + 0x54))) {
      *pcVar14 = '\x03';
      goto LAB_0802474e;
    }
    if ((*(char *)(param_1 + 0x17c) == '\x03') && (DAT_08024460 < *(int *)(iVar12 + 0x54))) {
      FUN_080275f0(DAT_08024464,*(undefined4 *)(*(int *)(DAT_08024468 + 0x28) + 0xc));
      FUN_0801f63c(4);
      *(byte *)(DAT_0802446c + 4) = *(byte *)(DAT_0802446c + 4) | 8;
      uVar9 = 5;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\x04') && (DAT_080244a4 < *(int *)(iVar12 + 0x54))) {
      FUN_080275f0(DAT_080244a8,*(undefined4 *)(*(int *)(DAT_080244ac + 0x28) + 0x14));
      FUN_0801f63c(4);
      *(byte *)(DAT_080244b0 + 4) = *(byte *)(DAT_080244b0 + 4) | 8;
      uVar9 = 5;
    }
    else if (*(char *)(param_1 + 0x17c) == '\x05') {
      FUN_0801f63c(3);
      uVar9 = 6;
    }
    else if ((*(char *)(param_1 + 0x17c) == '\x06') &&
            (*(char *)(DAT_08024520 + DAT_08024524) == '(')) {
      *DAT_08024528 = *DAT_08024528 | 0x80;
      pbVar5[1] = pbVar5[1] | 2;
      iVar11 = DAT_0802452c;
      FUN_080275f0(DAT_0802452c,*(undefined4 *)(*(int *)(DAT_08024530 + 0x28) + 0x1c));
      uVar3 = *(ushort *)(iVar11 + -8);
      uVar4 = (ushort)DAT_08024534;
      *(byte *)(iVar11 + 2) = *(byte *)(iVar11 + 2) & 0xfd;
      *(byte *)(DAT_08024538 + 4) = *(byte *)(DAT_08024538 + 4) & 0xf7;
      *(ushort *)(iVar11 + -8) = uVar4 & uVar3 | 1;
      uVar9 = 7;
    }
    else {
      cVar2 = *(char *)(param_1 + 0x17c);
      if (cVar2 == '\a') {
        *DAT_0802455c = *DAT_0802455c & 0x7f;
        pbVar6[1] = 0;
        *(char *)(param_1 + 0x17c) = '\b';
        goto LAB_0802474e;
      }
      if ((cVar2 == '\b') && (DAT_0802458c < *(int *)(iVar12 + 0x54))) {
        FUN_0801f63c(5);
        *(byte *)(DAT_08024590 + 4) = *(byte *)(DAT_08024590 + 4) | 8;
        bVar1 = *(int *)(iVar12 + 0x58) <= DAT_08024594;
        iVar11 = DAT_080245b0;
        if (bVar1) {
          iVar11 = DAT_08024598;
        }
        *(ushort *)(iVar11 + 10) = (ushort)bVar1;
        goto LAB_080245a2;
      }
      if (*(char *)(param_1 + 0x17c) == '\t') {
        pcVar14 = (char *)(param_1 + DAT_08024600);
        if ((*pcVar14 == '\0') && (DAT_08024604 < *(int *)(iVar12 + 0x54))) {
          *(byte *)(DAT_08024608 + 1) = *(byte *)(DAT_08024608 + 1) | 2;
          puVar13 = (uint *)(DAT_0802460c + 0x168);
          uVar10 = *puVar13;
          if (uVar10 != 0xffffffff) {
            FUN_08002a98(uVar10 & 0xffff);
            *puVar13 = 0xffffffff;
          }
          *pcVar14 = '\x01';
        }
        else {
          pcVar14 = (char *)(param_1 + DAT_08024628);
          cVar2 = *pcVar14;
          if (cVar2 == '\x01') {
            *(undefined1 *)(DAT_0802462c + 1) = 0;
            *pcVar14 = '\x02';
          }
          else if ((cVar2 == '\x02') && (DAT_0802467c < *(int *)(iVar12 + 0x54))) {
            *(undefined1 *)(DAT_08024680 + 1) = 0;
            puVar13 = (uint *)(DAT_08024684 + 0x168);
            uVar10 = *puVar13;
            if (uVar10 != 0x9b) {
              if (uVar10 != 0xffffffff) {
                FUN_08002a98(uVar10 & 0xffff);
                *puVar13 = 0xffffffff;
              }
              FUN_08002a88(0x9b);
              *puVar13 = 0x9b;
            }
            *(undefined1 *)(param_1 + 0x17c) = 10;
          }
        }
        goto LAB_0802474e;
      }
      if ((*(char *)(param_1 + 0x17c) == '\n') && (DAT_080246ac < *(int *)(iVar12 + 0x54))) {
        FUN_080275f0(DAT_080246b0,*(undefined4 *)(*(int *)(DAT_080246b4 + 0x28) + 0x24));
        FUN_0801f63c(7);
        uVar9 = 0xc;
      }
      else if ((*(char *)(param_1 + 0x17c) == '\v') && (DAT_080246e4 < *(int *)(iVar12 + 0x54))) {
        FUN_080275f0(DAT_080246e8,*(undefined4 *)(*(int *)(DAT_080246ec + 0x28) + 0x2c));
        FUN_0801f63c(7);
        uVar9 = 0xc;
      }
      else if (*(char *)(param_1 + 0x17c) == '\f') {
        FUN_0801f63c(6);
        uVar9 = 0xd;
      }
      else {
        if ((*(char *)(param_1 + 0x17c) != '\r') || ((*(ushort *)(DAT_0802475c + 8) & 0x10) == 0))
        goto LAB_0802474e;
        *DAT_08024760 = *DAT_08024760 | 0x80;
        pbVar8[1] = pbVar8[1] | 2;
        FUN_080275f0(iVar7 + 0x10,*(undefined4 *)(*(int *)(DAT_08024764 + 0x28) + 0x34));
        uVar3 = (ushort)DAT_08024768;
        *(byte *)(iVar7 + 0x12) = *(byte *)(iVar7 + 0x12) & 0xfd;
        *(ushort *)(iVar7 + 8) = uVar3 & *(ushort *)(iVar7 + 8) | 4;
        uVar9 = 0xe;
      }
    }
    *(undefined1 *)(param_1 + 0x17c) = uVar9;
    goto LAB_0802474e;
  }
  FUN_0801f63c(2);
  *pcVar14 = '\x02';
LAB_0802474e:
  return (ulonglong)in_lr << 0x20;
}


