// undefined FUN_0802624c(void)
// entry 0x802624c


longlong FUN_0802624c(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  char *pcVar11;
  uint in_lr;
  
  pbVar4 = DAT_08026570;
  iVar3 = DAT_0802656c;
  iVar2 = DAT_080262a8;
  iVar9 = *(int *)(param_1 + 0x20);
  pcVar11 = (char *)(param_1 + 0x17c);
  cVar5 = *pcVar11;
  if (cVar5 == '\0') {
    uVar1 = *(ushort *)(DAT_080262a8 + 8);
    *(ushort *)(DAT_080262a8 + 8) = uVar1 | 1;
    *(byte *)(DAT_080262ac + 4) = *(byte *)(DAT_080262ac + 4) | 8;
    *(undefined1 *)(param_1 + DAT_080262b0) = 0;
    cVar5 = *(char *)(iVar2 + 2);
    if (cVar5 == '\0') {
      FUN_080275f0(iVar2 + 0x10,**(undefined4 **)(DAT_080262b4 + 0x3c));
      FUN_0801f63c(1);
      *pcVar11 = '\x01';
      goto LAB_0802655e;
    }
    if (cVar5 != '\x01') {
      if (cVar5 == '\x02') {
        uVar7 = *(undefined4 *)(*(int *)(DAT_080262e0 + 0x3c) + 8);
      }
      else {
        if (cVar5 == '\x03') {
          FUN_080275f0(iVar2 + 0x10,*(undefined4 *)(*(int *)(DAT_080262fc + 0x3c) + 0xc));
          *pcVar11 = '\x04';
          goto LAB_0802655e;
        }
        if (cVar5 == '\x04') {
          FUN_080275f0(iVar2 + 0x10,*(undefined4 *)(*(int *)(DAT_08026318 + 0x3c) + 0x14));
          *pcVar11 = '\x06';
          goto LAB_0802655e;
        }
        if (cVar5 == '\x05') {
          FUN_080275f0(iVar2 + 0x10,*(undefined4 *)(*(int *)(DAT_08026334 + 0x3c) + 0x1c));
          *pcVar11 = '\a';
          goto LAB_0802655e;
        }
        if (cVar5 != '\x06') goto LAB_0802655e;
        if (*(int *)(param_1 + 0x18) != DAT_08026358) {
          *(ushort *)(iVar2 + 8) = (uVar1 | 5) & (ushort)DAT_08026374;
          *pcVar11 = '\n';
          goto LAB_0802655e;
        }
        uVar7 = *(undefined4 *)(*(int *)(DAT_0802635c + 0x3c) + 0x14);
      }
      FUN_080275f0(iVar2 + 0x10,uVar7);
      *pcVar11 = cVar5;
      goto LAB_0802655e;
    }
    FUN_080275f0(iVar2 + 0x10,*(undefined4 *)(*(int *)(DAT_080262cc + 0x3c) + 4));
  }
  else if (cVar5 != '\x01') {
    if ((cVar5 == '\x02') && (0xfe000 < *(int *)(iVar9 + 0x54))) {
      *(byte *)(DAT_080263a8 + 1) = *(byte *)(DAT_080263a8 + 1) | 2;
      *pcVar11 = '\x03';
    }
    else {
      cVar5 = *(char *)(param_1 + 0x17c);
      if (cVar5 == '\x03') {
        FUN_0801f63c(3);
        *(undefined1 *)(DAT_080263cc + 1) = 0;
        *(char *)(param_1 + 0x17c) = '\x04';
      }
      else if (cVar5 == '\x04') {
        pcVar11 = (char *)(param_1 + DAT_08026414);
        if ((*pcVar11 == '\0') && (DAT_08026418 < *(int *)(iVar9 + 0x54))) {
          *(byte *)(DAT_0802641c + 1) = *(byte *)(DAT_0802641c + 1) | 2;
          puVar10 = (uint *)(DAT_08026420 + 0x168);
          uVar6 = *puVar10;
          if (uVar6 != 0xffffffff) {
            FUN_08002a98(uVar6 & 0xffff);
            *puVar10 = 0xffffffff;
          }
          *pcVar11 = '\x01';
        }
        else {
          pcVar11 = (char *)(param_1 + DAT_0802643c);
          cVar5 = *pcVar11;
          if (cVar5 == '\x01') {
            *(undefined1 *)(DAT_08026440 + 1) = 0;
            *pcVar11 = '\x02';
          }
          else if ((cVar5 == '\x02') && (DAT_08026490 < *(int *)(iVar9 + 0x54))) {
            *(undefined1 *)(DAT_08026494 + 1) = 0;
            puVar10 = (uint *)(DAT_08026498 + 0x168);
            uVar6 = *puVar10;
            if (uVar6 != 0x9b) {
              if (uVar6 != 0xffffffff) {
                FUN_08002a98(uVar6 & 0xffff);
                *puVar10 = 0xffffffff;
              }
              FUN_08002a88(0x9b);
              *puVar10 = 0x9b;
            }
            *(undefined1 *)(param_1 + 0x17c) = 5;
          }
        }
      }
      else {
        if ((cVar5 == '\x05') && (DAT_080264b4 < *(int *)(iVar9 + 0x58))) {
          uVar8 = *(undefined4 *)(*(int *)(DAT_080264bc + 0x3c) + 0x10);
          uVar7 = DAT_080264b8;
        }
        else {
          if ((*(char *)(param_1 + 0x17c) != '\x06') || (*(int *)(iVar9 + 0x58) <= DAT_080264ec)) {
            cVar5 = *(char *)(param_1 + 0x17c);
            if (cVar5 == '\a') {
              FUN_0801f63c(4);
              cVar5 = '\b';
            }
            else {
              if ((cVar5 != '\b') || (uVar1 = *(ushort *)(DAT_0802656c + 8), (uVar1 & 0x10) == 0))
              goto LAB_0802655e;
              *DAT_08026570 = *DAT_08026570 | 0x80;
              pbVar4[1] = pbVar4[1] | 2;
              *(ushort *)(iVar3 + 8) = (ushort)DAT_08026574 & uVar1;
              *(byte *)(iVar3 + 0x12) = *(byte *)(iVar3 + 0x12) & 0xfd;
              FUN_080275f0(iVar3 + 0x10,*(undefined4 *)(*(int *)(DAT_08026578 + 0x3c) + 0x20));
              *(ushort *)(iVar3 + 8) = *(ushort *)(iVar3 + 8) | 4;
              FUN_0801f63c(6);
              cVar5 = '\t';
            }
            *(char *)(param_1 + 0x17c) = cVar5;
            goto LAB_0802655e;
          }
          uVar8 = *(undefined4 *)(*(int *)(DAT_080264f4 + 0x3c) + 0x18);
          uVar7 = DAT_080264f0;
        }
        FUN_080275f0(uVar7,uVar8);
        FUN_0801f63c(5);
        *(undefined1 *)(param_1 + 0x17c) = 7;
      }
    }
    goto LAB_0802655e;
  }
  FUN_0801f63c(2);
  *pcVar11 = '\x02';
LAB_0802655e:
  return (ulonglong)in_lr << 0x20;
}


