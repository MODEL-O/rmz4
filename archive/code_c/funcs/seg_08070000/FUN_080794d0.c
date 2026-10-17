// undefined FUN_080794d0(void)
// entry 0x80794d0


undefined4 FUN_080794d0(int param_1)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 in_lr;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08079578);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((*(ushort *)(DAT_0807957c + 8) & 1) != 0) && ((*(byte *)(DAT_0807957c + 0x12) & 1) == 0)) {
      *(ushort *)(DAT_0807957c + 8) = (ushort)DAT_08079580 & *(ushort *)(DAT_0807957c + 8) | 0x10;
    }
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(undefined1 *)(param_1 + 0x13) = 0x10;
    *(undefined1 *)(param_1 + 0xde) = 0x40;
    FUN_08002624(0x88);
    FUN_08002b10(0x158);
    FUN_0801c53c(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    pcVar9 = (char *)(param_1 + 0xde);
    cVar3 = *pcVar9;
    *pcVar9 = cVar3 + -1;
    if ((char)(cVar3 + -1) != -1) goto LAB_080795d6;
    FUN_0801cf00(param_1,DAT_08079584);
    *pcVar9 = '@';
  }
  else {
    if ((*(char *)(param_1 + 0xf) != '\x01') ||
       (cVar3 = *(char *)(param_1 + 0xde) + -1, *(char *)(param_1 + 0xde) = cVar3, cVar3 != -1))
    goto LAB_080795d6;
    FUN_0801cf00(param_1,DAT_0807962c);
    bVar4 = 0;
    do {
      FUN_080e41b8(param_1 + 0x54,4,0);
      bVar4 = bVar4 + 1;
    } while (bVar4 < 0x18);
    FUN_08002b10(DAT_08079630);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_080795d6:
  puVar11 = (uint *)(param_1 + 0x90);
  puVar10 = (uint *)(param_1 + 0x8c);
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    *puVar10 = *puVar10 & 0xfffffffe;
    *puVar11 = *puVar11 & 0xfffffffe;
    FUN_0801d330(param_1);
    cVar3 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar3;
    if (cVar3 != -1) {
      return in_lr;
    }
    cVar3 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar3 + -1;
    if (cVar3 != '\x01') {
      *puVar10 = *puVar10 | 1;
      *puVar11 = *puVar11 | 1;
      FUN_0801d3fc(param_1);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x12);
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0x12) = 0xb4;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined2 *)(param_1 + 0xdc) = 0x10;
    FUN_08002b10(0x53);
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x01') {
      *(undefined2 *)(param_1 + 0xdc) = 8;
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        *puVar10 = *puVar10 | 1;
        *puVar11 = *puVar11 | 1;
        FUN_0801d3fc(param_1);
      }
      else {
        *puVar10 = *puVar10 & 0xfffffffe;
        *puVar11 = *puVar11 & 0xfffffffe;
        FUN_0801d330(param_1);
      }
      iVar5 = FUN_08129050(*(undefined1 *)(param_1 + 0x12),*(undefined2 *)(param_1 + 0xdc));
      iVar2 = DAT_08079a4c;
      iVar7 = DAT_08079a48;
      puVar10 = DAT_08079a44;
      if (iVar5 == 0) {
        uVar6 = *DAT_08079a44 * DAT_08079a48 + DAT_08079a4c;
        uVar8 = uVar6 & 0x7fffffff;
        *DAT_08079a44 = uVar8;
        iVar5 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,0x60);
        local_38 = *(int *)(param_1 + 0x54) + (0x30 - iVar5) * 0x100;
        uVar6 = iVar7 * uVar8 + iVar2;
        uVar8 = uVar6 & 0x7fffffff;
        *puVar10 = uVar8;
        iVar5 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,0x60);
        local_34 = *(int *)(param_1 + 0x58) + (0x30 - iVar5) * 0x100;
        uVar6 = iVar7 * uVar8 + iVar2;
        *puVar10 = uVar6 & 0x7fffffff;
        FUN_080e1b14(&local_38,
                     ((uVar6 & 0x7fffffff) >> 0x10 & 0x3f) + (uint)*(byte *)(param_1 + 0x13) & 0xff,
                     0x1c0);
        FUN_08002b10(0x35);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '@';
      }
      uVar1 = *(ushort *)(param_1 + 0xdc);
      uVar6 = FUN_08129050(*(undefined1 *)(param_1 + 0x12),uVar1);
      iVar2 = DAT_08079a4c;
      iVar7 = DAT_08079a48;
      puVar10 = DAT_08079a44;
      if (uVar6 == uVar1 >> 1) {
        uVar6 = *DAT_08079a44 * DAT_08079a48 + DAT_08079a4c;
        uVar8 = uVar6 & 0x7fffffff;
        *DAT_08079a44 = uVar8;
        iVar5 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,0x60);
        local_30 = *(int *)(param_1 + 0x54) + (0x30 - iVar5) * 0x100;
        uVar6 = uVar8 * iVar7 + iVar2;
        *puVar10 = uVar6 & 0x7fffffff;
        iVar7 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,0x60);
        local_2c = *(int *)(param_1 + 0x58) + (0x30 - iVar7) * 0x100;
        FUN_080d0c88(1);
        if (*(byte *)(param_1 + 0x12) < 0x70) {
          FUN_08002b10(0x35);
        }
      }
      uVar1 = *(ushort *)(param_1 + 0xdc);
      uVar6 = FUN_08129050(*(undefined1 *)(param_1 + 0x12),uVar1);
      iVar2 = DAT_08079a4c;
      iVar7 = DAT_08079a48;
      puVar10 = DAT_08079a44;
      uVar8 = (uint)(uVar1 >> 2);
      if ((uVar6 == uVar8) || (uVar6 == uVar8 * 3)) {
        uVar6 = *DAT_08079a44 * DAT_08079a48 + DAT_08079a4c;
        uVar8 = uVar6 & 0x7fffffff;
        *DAT_08079a44 = uVar8;
        iVar5 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,0x60);
        local_28 = *(int *)(param_1 + 0x54) + (0x30 - iVar5) * 0x100;
        uVar6 = uVar8 * iVar7 + iVar2;
        *puVar10 = uVar6 & 0x7fffffff;
        iVar7 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,0x60);
        local_24 = *(int *)(param_1 + 0x58) + (0x30 - iVar7) * 0x100;
        FUN_080d0c88(2);
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      return in_lr;
    }
    if (*(byte *)(param_1 + 0x12) < 0x78) {
      *(undefined2 *)(param_1 + 0xdc) = 8;
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        *puVar10 = *puVar10 | 1;
        *puVar11 = *puVar11 | 1;
        FUN_0801d3fc(param_1);
      }
      else {
        *puVar10 = *puVar10 & 0xfffffffe;
        *puVar11 = *puVar11 & 0xfffffffe;
        FUN_0801d330(param_1);
      }
    }
    else if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
      *puVar10 = *puVar10 | 1;
      *puVar11 = *puVar11 | 1;
      FUN_0801d3fc(param_1);
    }
    else {
      *puVar10 = *puVar10 & 0xfffffffe;
      *puVar11 = *puVar11 & 0xfffffffe;
      FUN_0801d330(param_1);
    }
    iVar5 = FUN_08129050(*(undefined1 *)(param_1 + 0x12),*(undefined2 *)(param_1 + 0xdc));
    iVar2 = DAT_08079874;
    iVar7 = DAT_08079870;
    puVar10 = DAT_0807986c;
    if (iVar5 == 0) {
      uVar6 = *DAT_0807986c * DAT_08079870 + DAT_08079874;
      uVar8 = uVar6 & 0x7fffffff;
      *DAT_0807986c = uVar8;
      iVar5 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,0x30);
      local_50 = *(int *)(param_1 + 0x54) + (0x18 - iVar5) * 0x100;
      uVar6 = iVar7 * uVar8 + iVar2;
      uVar8 = uVar6 & 0x7fffffff;
      *puVar10 = uVar8;
      iVar5 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,0x30);
      local_4c = *(int *)(param_1 + 0x58) + (0x18 - iVar5) * 0x100;
      uVar6 = iVar7 * uVar8 + iVar2;
      *puVar10 = uVar6 & 0x7fffffff;
      FUN_080e1b14(&local_50,
                   ((uVar6 & 0x7fffffff) >> 0x10 & 0x3f) + (uint)*(byte *)(param_1 + 0x13) & 0xff,
                   0x1c0);
      FUN_08002b10(0x35);
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '@';
    }
    uVar1 = *(ushort *)(param_1 + 0xdc);
    uVar6 = FUN_08129050(*(undefined1 *)(param_1 + 0x12),uVar1);
    iVar2 = DAT_08079874;
    iVar7 = DAT_08079870;
    puVar10 = DAT_0807986c;
    if (uVar6 == uVar1 >> 1) {
      uVar6 = *DAT_0807986c * DAT_08079870 + DAT_08079874;
      uVar8 = uVar6 & 0x7fffffff;
      *DAT_0807986c = uVar8;
      iVar5 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,0x30);
      local_48 = *(int *)(param_1 + 0x54) + (0x18 - iVar5) * 0x100;
      uVar6 = uVar8 * iVar7 + iVar2;
      *puVar10 = uVar6 & 0x7fffffff;
      iVar7 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,0x30);
      local_44 = *(int *)(param_1 + 0x58) + (0x18 - iVar7) * 0x100;
      FUN_080d0c88(1);
      if (*(byte *)(param_1 + 0x12) < 0x70) {
        FUN_08002b10(0x35);
      }
    }
    uVar1 = *(ushort *)(param_1 + 0xdc);
    uVar6 = FUN_08129050(*(undefined1 *)(param_1 + 0x12),uVar1);
    iVar2 = DAT_08079874;
    iVar7 = DAT_08079870;
    puVar10 = DAT_0807986c;
    uVar8 = (uint)(uVar1 >> 2);
    if ((uVar6 == uVar8) || (uVar6 == uVar8 * 3)) {
      uVar6 = *DAT_0807986c * DAT_08079870 + DAT_08079874;
      uVar8 = uVar6 & 0x7fffffff;
      *DAT_0807986c = uVar8;
      iVar5 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,0x30);
      local_40 = *(int *)(param_1 + 0x54) + (0x18 - iVar5) * 0x100;
      uVar6 = uVar8 * iVar7 + iVar2;
      *puVar10 = uVar6 & 0x7fffffff;
      iVar7 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,0x30);
      local_3c = *(int *)(param_1 + 0x58) + (0x18 - iVar7) * 0x100;
      FUN_080d0c88(2);
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) {
      return in_lr;
    }
    *(byte *)(DAT_08079878 + 0x12) = *(byte *)(DAT_08079878 + 0x12) | 2;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}


