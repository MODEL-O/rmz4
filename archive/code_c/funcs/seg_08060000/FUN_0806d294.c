// undefined FUN_0806d294(void)
// entry 0x806d294


undefined4 FUN_0806d294(int param_1)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 in_lr;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08006984(0x4c);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((*(ushort *)(DAT_0806d34c + 8) & 1) != 0) && ((*(byte *)(DAT_0806d34c + 0x12) & 1) == 0)) {
      *(ushort *)(DAT_0806d34c + 8) = (ushort)DAT_0806d350 & *(ushort *)(DAT_0806d34c + 8) | 0x10;
    }
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(undefined1 *)(param_1 + 0x13) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    puVar9 = (uint *)(param_1 + 0x8c);
    *puVar9 = *puVar9 & 0xfffffffe;
    puVar8 = (uint *)(param_1 + 0x90);
    *puVar8 = *puVar8 & 0xfffffffe;
    FUN_0801d330(param_1);
    cVar3 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar3;
    if (cVar3 != -1) {
      return in_lr;
    }
    cVar3 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar3 + -1;
    if (cVar3 != '\x01') {
      *puVar9 = *puVar9 | 1;
      *puVar8 = *puVar8 | 1;
      FUN_0801d3fc(param_1);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x12);
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0x12) = 0xb4;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined2 *)(param_1 + 0xdc) = 0x10;
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x01') {
      return in_lr;
    }
    if (*(byte *)(param_1 + 0x12) < 0x78) {
      *(undefined2 *)(param_1 + 0xdc) = 8;
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) | 1;
        *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 1;
        FUN_0801d3fc(param_1);
      }
      else {
        *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xfffffffe;
        *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xfffffffe;
        FUN_0801d330(param_1);
      }
    }
    else if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
      *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) | 1;
      *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 1;
      FUN_0801d3fc(param_1);
    }
    else {
      *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xfffffffe;
      *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xfffffffe;
      FUN_0801d330(param_1);
    }
    iVar4 = FUN_08129050(*(undefined1 *)(param_1 + 0x12),*(undefined2 *)(param_1 + 0xdc));
    iVar2 = DAT_0806d5c8;
    iVar6 = DAT_0806d5c4;
    puVar8 = DAT_0806d5c0;
    if (iVar4 == 0) {
      uVar5 = *DAT_0806d5c0 * DAT_0806d5c4 + DAT_0806d5c8;
      uVar7 = uVar5 & 0x7fffffff;
      *DAT_0806d5c0 = uVar7;
      iVar4 = FUN_08129198((uVar5 & 0x7fffffff) >> 0x10,0x30);
      local_38 = *(int *)(param_1 + 0x54) + (0x18 - iVar4) * 0x100;
      uVar5 = iVar6 * uVar7 + iVar2;
      uVar7 = uVar5 & 0x7fffffff;
      *puVar8 = uVar7;
      iVar4 = FUN_08129198((uVar5 & 0x7fffffff) >> 0x10,0x30);
      local_34 = *(int *)(param_1 + 0x58) + (0x18 - iVar4) * 0x100;
      uVar5 = iVar6 * uVar7 + iVar2;
      *puVar8 = uVar5 & 0x7fffffff;
      FUN_080e1b14(&local_38,
                   ((uVar5 & 0x7fffffff) >> 0x10 & 0x3f) + (uint)*(byte *)(param_1 + 0x13) & 0xff,
                   0x1c0);
      FUN_08002b10(0x35);
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '@';
    }
    uVar1 = *(ushort *)(param_1 + 0xdc);
    uVar5 = FUN_08129050(*(undefined1 *)(param_1 + 0x12),uVar1);
    iVar2 = DAT_0806d5c8;
    iVar6 = DAT_0806d5c4;
    puVar8 = DAT_0806d5c0;
    if (uVar5 == uVar1 >> 1) {
      uVar5 = *DAT_0806d5c0 * DAT_0806d5c4 + DAT_0806d5c8;
      uVar7 = uVar5 & 0x7fffffff;
      *DAT_0806d5c0 = uVar7;
      iVar4 = FUN_08129198((uVar5 & 0x7fffffff) >> 0x10,0x30);
      local_30 = *(int *)(param_1 + 0x54) + (0x18 - iVar4) * 0x100;
      uVar5 = uVar7 * iVar6 + iVar2;
      *puVar8 = uVar5 & 0x7fffffff;
      iVar6 = FUN_08129198((uVar5 & 0x7fffffff) >> 0x10,0x30);
      local_2c = *(int *)(param_1 + 0x58) + (0x18 - iVar6) * 0x100;
      FUN_080d0c88(1);
      if (*(byte *)(param_1 + 0x12) < 0x70) {
        FUN_08002b10(0x35);
      }
    }
    uVar1 = *(ushort *)(param_1 + 0xdc);
    uVar5 = FUN_08129050(*(undefined1 *)(param_1 + 0x12),uVar1);
    iVar2 = DAT_0806d5c8;
    iVar6 = DAT_0806d5c4;
    puVar8 = DAT_0806d5c0;
    uVar7 = (uint)(uVar1 >> 2);
    if ((uVar5 == uVar7) || (uVar5 == uVar7 * 3)) {
      uVar5 = *DAT_0806d5c0 * DAT_0806d5c4 + DAT_0806d5c8;
      uVar7 = uVar5 & 0x7fffffff;
      *DAT_0806d5c0 = uVar7;
      iVar4 = FUN_08129198((uVar5 & 0x7fffffff) >> 0x10,0x30);
      local_28 = *(int *)(param_1 + 0x54) + (0x18 - iVar4) * 0x100;
      uVar5 = uVar7 * iVar6 + iVar2;
      *puVar8 = uVar5 & 0x7fffffff;
      iVar6 = FUN_08129198((uVar5 & 0x7fffffff) >> 0x10,0x30);
      local_24 = *(int *)(param_1 + 0x58) + (0x18 - iVar6) * 0x100;
      FUN_080d0c88(2);
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) {
      return in_lr;
    }
    FUN_08002b10(0x2a);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(byte *)(DAT_0806d5cc + 0x12) = *(byte *)(DAT_0806d5cc + 0x12) | 2;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}


