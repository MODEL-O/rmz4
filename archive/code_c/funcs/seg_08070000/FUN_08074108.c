// undefined FUN_08074108(void)
// entry 0x8074108


undefined4 FUN_08074108(int param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  undefined4 in_lr;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080741ac);
    local_28 = param_1 + 0xb4;
    bVar2 = (int)(0x40 - (*(ushort *)(param_1 + 0xc6) & 0x3f)) <
            (int)(0x40 - (*(ushort *)(param_1 + 0xc4) & 0x3f));
    uVar6 = 0;
    iVar8 = param_1 + 0xd4;
    local_24 = param_1 + 0xcc;
    local_34 = (undefined4 *)(param_1 + 0x8c);
    local_30 = (undefined4 *)(param_1 + 0x90);
    local_2c = (undefined1 *)(param_1 + 0x94);
    do {
      uVar12 = *(byte *)(param_1 + 0xc6) + 0x20;
      uVar9 = uVar12 & 0xff;
      cVar3 = (char)uVar6;
      if (uVar9 < 0x40) {
        bVar1 = bVar2 + cVar3 & 1;
        *(byte *)(iVar8 + uVar6 + 2) = bVar1;
        if ((*(ushort *)(param_1 + 0xc6) & 0x3f) < 0x20) {
          *(byte *)(iVar8 + uVar6 + 4) = bVar1 + 2;
          *(byte *)(iVar8 + uVar6) = bVar1 + 4;
        }
        else {
          *(byte *)(iVar8 + uVar6) = bVar1 + 2;
          *(byte *)(iVar8 + uVar6 + 4) = bVar1 + 4;
        }
        pcVar10 = (char *)(iVar8 + uVar6 + 6);
      }
      else if ((int)(uVar12 * 0x1000000) < 0) {
        if (uVar9 < 0xc0) {
          bVar1 = bVar2 + cVar3 & 1;
          *(byte *)(iVar8 + uVar6 + 6) = bVar1;
          if ((*(ushort *)(param_1 + 0xc6) & 0x3f) < 0x20) {
            *(byte *)(iVar8 + uVar6) = bVar1 + 2;
            *(byte *)(iVar8 + uVar6 + 4) = bVar1 + 4;
          }
          else {
            *(byte *)(iVar8 + uVar6 + 4) = bVar1 + 2;
            *(byte *)(iVar8 + uVar6) = bVar1 + 4;
          }
          pcVar10 = (char *)(iVar8 + uVar6 + 2);
        }
        else {
          bVar1 = bVar2 + cVar3 & 1;
          *(byte *)(iVar8 + uVar6 + 4) = bVar1;
          if ((*(ushort *)(param_1 + 0xc6) & 0x3f) < 0x20) {
            *(byte *)(iVar8 + uVar6 + 6) = bVar1 + 2;
            iVar5 = uVar6 + 2;
          }
          else {
            *(byte *)(iVar8 + uVar6 + 2) = bVar1 + 2;
            iVar5 = uVar6 + 6;
          }
          *(byte *)(iVar8 + iVar5) = bVar1 + 4;
          pcVar10 = (char *)(iVar8 + uVar6);
        }
      }
      else {
        bVar1 = bVar2 + cVar3 & 1;
        *(byte *)(iVar8 + uVar6) = bVar1;
        if ((*(ushort *)(param_1 + 0xc6) & 0x3f) < 0x20) {
          *(byte *)(iVar8 + uVar6 + 2) = bVar1 + 2;
          iVar5 = uVar6 + 6;
        }
        else {
          *(byte *)(iVar8 + uVar6 + 6) = bVar1 + 2;
          iVar5 = uVar6 + 2;
        }
        *(byte *)(iVar8 + iVar5) = bVar1 + 4;
        pcVar10 = (char *)(iVar8 + uVar6 + 4);
      }
      *pcVar10 = (bVar2 + cVar3 & 1U) + 6;
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < 2);
    uVar6 = 0;
    do {
      if (*(char *)(local_24 + uVar6) != '\0') {
        uVar12 = 0;
        do {
          bVar1 = *(byte *)(iVar8 + uVar12);
          if (*(byte *)(iVar8 + uVar6) < bVar1) {
            *(byte *)(iVar8 + uVar12) = bVar1 - 1;
          }
          uVar12 = uVar12 + 1 & 0xff;
        } while (uVar12 < 8);
      }
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < 8);
    *(undefined2 *)(param_1 + 0xdc) = 0xf0;
    *local_34 = 0;
    *local_30 = 0;
    *local_2c = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((*(ushort *)(DAT_080744f0 + 8) & 1) != 0) && ((*(byte *)(DAT_080744f0 + 0x12) & 1) == 0)) {
      *(ushort *)(DAT_080744f0 + 8) = (ushort)DAT_080744f4 & *(ushort *)(DAT_080744f0 + 8) | 0x10;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar5 = DAT_08074500;
  iVar8 = DAT_080744fc;
  puVar4 = DAT_080744f8;
  if (*(char *)(param_1 + 0xd) == '\0') {
    local_28 = param_1 + 0xb4;
    if ((*(ushort *)(param_1 + 0xdc) & 0xf) == 0) {
      uVar6 = DAT_080744fc * *DAT_080744f8 + DAT_08074500;
      local_44 = *(int *)(param_1 + 0x54) + (8 - ((uVar6 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
      uVar6 = DAT_080744fc * (uVar6 & 0x7fffffff) + DAT_08074500;
      uVar12 = uVar6 & 0x7fffffff;
      *DAT_080744f8 = uVar12;
      iVar7 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,0x18);
      local_40 = *(int *)(param_1 + 0x58) + (0xc - iVar7) * 0x100;
      uVar6 = iVar8 * uVar12 + iVar5;
      *puVar4 = uVar6 & 0x7fffffff;
      FUN_080e1b14(&local_44,(uVar6 & 0x7fffffff) >> 0x10 & 0xff,0x1c0);
      FUN_08002b10(0x35);
      if ((*(ushort *)(local_28 + 0x28) & 0xf) == 0) {
        uVar6 = iVar8 * *puVar4 + iVar5;
        local_3c = *(int *)(param_1 + 0x54) + (8 - ((uVar6 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
        uVar6 = iVar8 * (uVar6 & 0x7fffffff) + iVar5;
        *puVar4 = uVar6 & 0x7fffffff;
        iVar8 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,0x18);
        local_38 = *(int *)(param_1 + 0x58) + (0xc - iVar8) * 0x100;
        FUN_080d0c88(2);
      }
    }
    iVar8 = *(ushort *)(local_28 + 0x28) - 1;
    *(short *)(local_28 + 0x28) = (short)iVar8;
    if (iVar8 * 0x10000 - DAT_08074504 == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      iVar11 = param_1 + 0x54;
      FUN_080d0c88(1,iVar11);
      iVar7 = DAT_08074508;
      iVar5 = DAT_08074500;
      iVar8 = DAT_080744fc;
      puVar4 = DAT_080744f8;
      uVar6 = *DAT_080744f8 * DAT_080744fc + DAT_08074500;
      *DAT_080744f8 = uVar6 & 0x7fffffff;
      FUN_080d4c8c(iVar11,iVar7,0,((uVar6 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar6 = *puVar4 * iVar8 + iVar5;
      *puVar4 = uVar6 & 0x7fffffff;
      FUN_080d4c8c(iVar11,iVar7 + 0x1c,0,((uVar6 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar6 = *puVar4 * iVar8 + iVar5;
      *puVar4 = uVar6 & 0x7fffffff;
      FUN_080d4c8c(iVar11,iVar7 + 0x38,0,((uVar6 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar6 = *puVar4 * iVar8 + iVar5;
      *puVar4 = uVar6 & 0x7fffffff;
      FUN_080d4c8c(iVar11,iVar7 + 0x54,0,((uVar6 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar6 = *puVar4 * iVar8 + iVar5;
      *puVar4 = uVar6 & 0x7fffffff;
      FUN_080d4c8c(iVar11,iVar7 + 0x70,0,((uVar6 & 0x7fffffff) >> 0x10 & 1) << 4);
      FUN_08002b10(0x2a);
      *(byte *)(DAT_080744f0 + 0x12) = *(byte *)(DAT_080744f0 + 0x12) | 2;
      *(undefined2 *)(local_28 + 0x28) = 0x40;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  return in_lr;
}


