// undefined FUN_080200d4(void)
// entry 0x80200d4


longlong FUN_080200d4(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  char *pcVar13;
  uint in_lr;
  
  pbVar8 = DAT_08020444;
  iVar11 = DAT_08020440;
  pbVar7 = DAT_08020350;
  pbVar6 = DAT_0802031c;
  pbVar5 = DAT_080202f0;
  pbVar4 = DAT_080202a0;
  iVar3 = DAT_0802014c;
  iVar10 = *(int *)(param_1 + 0x20);
  pcVar13 = (char *)(param_1 + 0x17c);
  cVar9 = *pcVar13;
  if (cVar9 == '\0') {
    uVar2 = *(ushort *)(DAT_0802014c + 8);
    *(ushort *)(DAT_0802014c + 8) = uVar2 | 1;
    *(byte *)(DAT_08020150 + 4) = *(byte *)(DAT_08020150 + 4) | 8;
    cVar9 = *(char *)(iVar3 + 2);
    if (cVar9 == '\0') {
      iVar11 = *(int *)(DAT_08020154 + DAT_08020158);
      *(undefined1 *)(param_1 + 0x188) = *(undefined1 *)(iVar11 + 0xc0);
      *(undefined1 *)(param_1 + DAT_0802015c) = *(undefined1 *)(iVar11 + 0xc1);
      FUN_080275f0(iVar3 + 0x10,*(undefined4 *)(*(int *)(DAT_08020160 + 4) + 4));
      FUN_0801f63c(2);
      *pcVar13 = '\x02';
      goto LAB_08020410;
    }
    if (cVar9 != '\x02') {
      if (cVar9 == '\x03') {
        FUN_080275f0(iVar3 + 0x10,*(undefined4 *)(*(int *)(DAT_080201b8 + 4) + 0xc));
        *pcVar13 = '\x03';
      }
      else {
        if (cVar9 == '\x04') {
          uVar12 = *(undefined4 *)(*(int *)(DAT_080201cc + 4) + 0x14);
        }
        else {
          if (cVar9 != '\x05') {
            if (cVar9 == '\x06') {
              FUN_080275f0(iVar3 + 0x10,*(undefined4 *)(*(int *)(DAT_0802020c + 4) + 0x20));
              *pcVar13 = '\a';
            }
            else if (cVar9 == '\a') {
              *(byte *)(DAT_08020238 + DAT_0802023c) = *(byte *)(DAT_08020238 + DAT_0802023c) | 1;
              FUN_080275f0(iVar3 + 0x10,*(undefined4 *)(*(int *)(DAT_08020240 + 4) + 0x28));
              *pcVar13 = '\n';
            }
            else if (cVar9 == '\b') {
              *(ushort *)(iVar3 + 8) = (uVar2 | 5) & (ushort)DAT_08020260;
              *pcVar13 = '\f';
            }
            goto LAB_08020410;
          }
          uVar12 = *(undefined4 *)(*(int *)(DAT_080201f0 + 4) + 0x18);
        }
        FUN_080275f0(iVar3 + 0x10,uVar12);
        FUN_0801f63c(5);
        *pcVar13 = '\x06';
      }
      goto LAB_08020410;
    }
    FUN_080275f0(iVar3 + 0x10,*(undefined4 *)(*(int *)(DAT_08020194 + 4) + 8));
    FUN_0801f63c(3);
    iVar3 = DAT_08020198;
    *(undefined1 *)(DAT_08020198 + 0xc) = *(undefined1 *)(param_1 + 0x188);
    *(undefined1 *)(iVar3 + 0xd) = *(undefined1 *)(param_1 + DAT_0802019c);
  }
  else {
    if (cVar9 != '\x02') {
      if ((cVar9 == '\x03') && (DAT_0802029c < *(int *)(iVar10 + 0x54))) {
        DAT_080202a0[1] = DAT_080202a0[1] | 2;
        *pbVar4 = *pbVar4 | 0x80;
        *pcVar13 = '\x04';
      }
      else {
        pcVar13 = (char *)(param_1 + 0x17c);
        cVar9 = *pcVar13;
        if (cVar9 == '\x04') {
          FUN_080275f0(DAT_080202c8,*(undefined4 *)(*(int *)(DAT_080202cc + 4) + 0x10));
          FUN_0801f63c(4);
          *pcVar13 = '\x05';
        }
        else if (cVar9 == '\x05') {
          *DAT_080202f0 = *DAT_080202f0 & 0x7f;
          pbVar5[1] = 0;
          FUN_0801f63c(5);
          *pcVar13 = '\x06';
        }
        else if ((cVar9 == '\x06') && (0x1c2000 < *(int *)(iVar10 + 0x54))) {
          DAT_0802031c[1] = DAT_0802031c[1] | 2;
          *pbVar6 = *pbVar6 | 0x80;
          *pcVar13 = '\b';
        }
        else if ((*(char *)(param_1 + 0x17c) == '\a') && (0x1c2000 < *(int *)(iVar10 + 0x54))) {
          DAT_08020350[1] = DAT_08020350[1] | 2;
          *pbVar7 = *pbVar7 | 0x80;
          *(char *)(param_1 + 0x17c) = '\t';
        }
        else {
          cVar9 = *(char *)(param_1 + 0x17c);
          if (cVar9 == '\b') {
            *(undefined1 *)(DAT_0802037c + 1) = 0;
            FUN_080275f0(DAT_08020380,*(undefined4 *)(*(int *)(DAT_08020384 + 4) + 0x1c));
            FUN_0801f63c(7);
            cVar9 = '\n';
          }
          else if (cVar9 == '\t') {
            *(undefined1 *)(DAT_080203a8 + 1) = 0;
            FUN_080275f0(DAT_080203ac,*(undefined4 *)(*(int *)(DAT_080203b0 + 4) + 0x24));
            FUN_0801f63c(7);
            cVar9 = '\n';
          }
          else if (cVar9 == '\n') {
            FUN_0801f63c(6);
            cVar9 = '\v';
          }
          else {
            if ((cVar9 != '\v') || ((*(ushort *)(DAT_08020440 + 8) & 0x10) == 0)) goto LAB_08020410;
            *DAT_08020444 = *DAT_08020444 | 0x80;
            pbVar8[1] = pbVar8[1] | 2;
            FUN_080275f0(iVar11 + 0x10,*(undefined4 *)(*(int *)(DAT_08020448 + 4) + 0x2c));
            uVar2 = (ushort)DAT_0802044c;
            *(byte *)(iVar11 + 0x12) = *(byte *)(iVar11 + 0x12) & 0xfd;
            *(ushort *)(iVar11 + 8) = uVar2 & *(ushort *)(iVar11 + 8) | 4;
            FUN_0801f63c(8);
            cVar9 = '\f';
          }
          *(char *)(param_1 + 0x17c) = cVar9;
        }
      }
      goto LAB_08020410;
    }
    FUN_0801f63c(3);
  }
  *pcVar13 = '\x03';
LAB_08020410:
  if (DAT_08020450 < *(int *)(iVar10 + 0x54)) {
    bVar1 = *(byte *)(DAT_08020454 + DAT_08020458);
    if ((bVar1 & 1) == 0) {
      *(byte *)(DAT_08020454 + DAT_08020458) = bVar1 | 1;
    }
  }
  return (ulonglong)in_lr << 0x20;
}


