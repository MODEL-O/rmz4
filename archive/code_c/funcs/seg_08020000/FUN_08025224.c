// undefined FUN_08025224(void)
// entry 0x8025224


longlong FUN_08025224(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  uint *puVar11;
  uint in_lr;
  
  pbVar6 = DAT_0802551c;
  iVar5 = DAT_08025518;
  iVar4 = DAT_08025280;
  iVar9 = *(int *)(param_1 + 0x20);
  pcVar10 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar10;
  if (cVar1 == '\0') {
    uVar3 = *(ushort *)(DAT_08025280 + 8);
    *(ushort *)(DAT_08025280 + 8) = uVar3 | 1;
    iVar5 = DAT_08025284;
    bVar2 = *(byte *)(DAT_08025284 + 4);
    *(byte *)(DAT_08025284 + 4) = bVar2 | 8;
    *(undefined1 *)(param_1 + DAT_08025288) = 0;
    cVar1 = *(char *)(iVar4 + 2);
    if (cVar1 == '\0') {
      FUN_080275f0(iVar4 + 0x10,**(undefined4 **)(DAT_0802528c + 0x34));
      FUN_0801f63c(1);
      *pcVar10 = '\x01';
      goto LAB_0802550c;
    }
    if (cVar1 == '\x01') {
      FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_080252ac + 0x34) + 4));
      FUN_0801f63c(2);
      uVar7 = 2;
    }
    else {
      if (cVar1 == '\x02') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_080252c8 + 0x34) + 8));
        *pcVar10 = '\x02';
        goto LAB_0802550c;
      }
      if (cVar1 == '\x03') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_080252e4 + 0x34) + 0xc));
        uVar7 = 4;
      }
      else if (cVar1 == '\x04') {
        *(byte *)(iVar5 + 4) = bVar2 & 0xf7;
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08025304 + 0x34) + 0x14));
        uVar7 = 6;
      }
      else if (cVar1 == '\x05') {
        FUN_080275f0(iVar4 + 0x10,*(undefined4 *)(*(int *)(DAT_08025320 + 0x34) + 0x1c));
        uVar7 = 7;
      }
      else {
        if (cVar1 != '\x06') goto LAB_0802550c;
        *(ushort *)(iVar4 + 8) = (uVar3 | 5) & (ushort)DAT_0802533c;
LAB_08025508:
        uVar7 = 9;
      }
    }
  }
  else if (cVar1 == '\x01') {
    FUN_0801f63c(2);
    uVar7 = 2;
  }
  else if ((cVar1 == '\x02') && (0xa4000 < *(int *)(iVar9 + 0x54))) {
    uVar7 = 3;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\x03') {
      FUN_0801f63c(3);
      uVar7 = 4;
    }
    else {
      if (cVar1 == '\x04') {
        pcVar10 = (char *)(param_1 + DAT_080253b8);
        if ((*pcVar10 == '\0') && (DAT_080253bc < *(int *)(iVar9 + 0x54))) {
          *(byte *)(DAT_080253c0 + 1) = *(byte *)(DAT_080253c0 + 1) | 2;
          puVar11 = (uint *)(DAT_080253c4 + 0x168);
          uVar8 = *puVar11;
          if (uVar8 != 0xffffffff) {
            FUN_08002a98(uVar8 & 0xffff);
            *puVar11 = 0xffffffff;
          }
          *pcVar10 = '\x01';
        }
        else {
          pcVar10 = (char *)(param_1 + DAT_080253e0);
          cVar1 = *pcVar10;
          if (cVar1 == '\x01') {
            *(undefined1 *)(DAT_080253e4 + 1) = 0;
            *pcVar10 = '\x02';
          }
          else if ((cVar1 == '\x02') && (DAT_08025434 < *(int *)(iVar9 + 0x54))) {
            *(undefined1 *)(DAT_08025438 + 1) = 0;
            puVar11 = (uint *)(DAT_0802543c + 0x168);
            uVar8 = *puVar11;
            if (uVar8 != 0x9b) {
              if (uVar8 != 0xffffffff) {
                FUN_08002a98(uVar8 & 0xffff);
                *puVar11 = 0xffffffff;
              }
              FUN_08002a88(0x9b);
              *puVar11 = 0x9b;
            }
            *(undefined1 *)(param_1 + 0x17c) = 5;
          }
        }
        goto LAB_0802550c;
      }
      if ((cVar1 == '\x05') && (DAT_08025464 < *(int *)(iVar9 + 0x54))) {
        FUN_080275f0(DAT_08025468,*(undefined4 *)(*(int *)(DAT_0802546c + 0x34) + 0x10));
        FUN_0801f63c(5);
        uVar7 = 7;
      }
      else if ((*(char *)(param_1 + 0x17c) == '\x06') && (DAT_0802549c < *(int *)(iVar9 + 0x54))) {
        FUN_080275f0(DAT_080254a0,*(undefined4 *)(*(int *)(DAT_080254a4 + 0x34) + 0x18));
        FUN_0801f63c(5);
        uVar7 = 7;
      }
      else {
        if (*(char *)(param_1 + 0x17c) != '\a') {
          if ((*(char *)(param_1 + 0x17c) != '\b') || ((*(ushort *)(DAT_08025518 + 8) & 0x10) == 0))
          goto LAB_0802550c;
          *DAT_0802551c = *DAT_0802551c | 0x80;
          pbVar6[1] = pbVar6[1] | 2;
          FUN_080275f0(iVar5 + 0x10,*(undefined4 *)(*(int *)(DAT_08025520 + 0x34) + 0x20));
          uVar3 = (ushort)DAT_08025524;
          *(byte *)(iVar5 + 0x12) = *(byte *)(iVar5 + 0x12) & 0xfd;
          *(ushort *)(iVar5 + 8) = uVar3 & *(ushort *)(iVar5 + 8) | 4;
          FUN_0801f63c(6);
          goto LAB_08025508;
        }
        FUN_0801f63c(4);
        uVar7 = 8;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x17c) = uVar7;
LAB_0802550c:
  return (ulonglong)in_lr << 0x20;
}


