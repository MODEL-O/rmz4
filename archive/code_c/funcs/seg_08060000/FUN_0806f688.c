// undefined FUN_0806f688(void)
// entry 0x806f688


undefined4 FUN_0806f688(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 in_lr;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((*(ushort *)(DAT_0806f758 + 8) & 1) != 0) && ((*(byte *)(DAT_0806f758 + 0x12) & 1) == 0)) {
      *(ushort *)(DAT_0806f758 + 8) = (ushort)DAT_0806f75c & *(ushort *)(DAT_0806f758 + 8) | 0x10;
    }
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(undefined1 *)(param_1 + 0x13) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar3 = *(char *)(param_1 + 0xd);
  if (cVar3 == '\0') {
    puVar10 = (uint *)(param_1 + 0x8c);
    *puVar10 = *puVar10 & 0xfffffffe;
    puVar9 = (uint *)(param_1 + 0x90);
    *puVar9 = *puVar9 & 0xfffffffe;
    FUN_0801d330(param_1);
    cVar3 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar3;
    if (cVar3 != -1) goto LAB_0806fa14;
    cVar3 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar3 + -1;
    if (cVar3 != '\x01') {
      *puVar10 = *puVar10 | 1;
      *puVar9 = *puVar9 | 1;
      FUN_0801d3fc(param_1);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x12);
      goto LAB_0806fa14;
    }
    FUN_08002b10(0x160);
    FUN_08002b10(0x53);
    *(undefined1 *)(param_1 + 0x12) = 0xb4;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0xce) = 0x10;
    cVar3 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (cVar3 == '\x01') {
    if (*(byte *)(param_1 + 0x12) < 0x78) {
      *(undefined1 *)(param_1 + 0xce) = 8;
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
    cVar3 = FUN_08129198(*(undefined1 *)(param_1 + 0x12),*(undefined1 *)(param_1 + 0xce));
    iVar7 = DAT_0806f9bc;
    iVar6 = DAT_0806f9b8;
    puVar9 = DAT_0806f9b4;
    if (cVar3 == '\0') {
      uVar4 = *DAT_0806f9b4 * DAT_0806f9b8 + DAT_0806f9bc;
      uVar8 = uVar4 & 0x7fffffff;
      *DAT_0806f9b4 = uVar8;
      iVar5 = FUN_08129198((uVar4 & 0x7fffffff) >> 0x10,0x30);
      local_40 = *(int *)(param_1 + 0x54) + (0x18 - iVar5) * 0x100;
      uVar4 = iVar6 * uVar8 + iVar7;
      uVar8 = uVar4 & 0x7fffffff;
      *puVar9 = uVar8;
      iVar5 = FUN_08129198((uVar4 & 0x7fffffff) >> 0x10,0x30);
      local_3c = *(int *)(param_1 + 0x58) + (0x18 - iVar5) * 0x100;
      uVar4 = iVar6 * uVar8 + iVar7;
      *puVar9 = uVar4 & 0x7fffffff;
      FUN_080e1c2c(&local_40,
                   ((uVar4 & 0x7fffffff) >> 0x10 & 0x3f) + (uint)*(byte *)(param_1 + 0x13) & 0xff,
                   0x1c0,0x81);
      FUN_08002b10(0x35);
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '@';
    }
    bVar1 = *(byte *)(param_1 + 0xce);
    bVar2 = FUN_08129198(*(undefined1 *)(param_1 + 0x12),bVar1);
    iVar7 = DAT_0806f9bc;
    iVar6 = DAT_0806f9b8;
    puVar9 = DAT_0806f9b4;
    if (bVar2 == bVar1 >> 1) {
      uVar4 = *DAT_0806f9b4 * DAT_0806f9b8 + DAT_0806f9bc;
      uVar8 = uVar4 & 0x7fffffff;
      *DAT_0806f9b4 = uVar8;
      iVar5 = FUN_08129198((uVar4 & 0x7fffffff) >> 0x10,0x30);
      local_38 = *(int *)(param_1 + 0x54) + (0x18 - iVar5) * 0x100;
      uVar4 = uVar8 * iVar6 + iVar7;
      *puVar9 = uVar4 & 0x7fffffff;
      iVar6 = FUN_08129198((uVar4 & 0x7fffffff) >> 0x10,0x30);
      local_34 = *(int *)(param_1 + 0x58) + (0x18 - iVar6) * 0x100;
      FUN_080e1c2c(&local_38,0,0,0x81);
      if (*(byte *)(param_1 + 0x12) < 0x70) {
        FUN_08002b10(0x35);
      }
    }
    bVar1 = *(byte *)(param_1 + 0xce);
    bVar2 = FUN_08129198(*(undefined1 *)(param_1 + 0x12),bVar1);
    iVar7 = DAT_0806f9bc;
    iVar6 = DAT_0806f9b8;
    puVar9 = DAT_0806f9b4;
    bVar1 = bVar1 >> 2;
    if ((bVar2 == bVar1) || (bVar2 == (byte)(bVar1 * '\x03'))) {
      uVar4 = *DAT_0806f9b4 * DAT_0806f9b8 + DAT_0806f9bc;
      uVar8 = uVar4 & 0x7fffffff;
      *DAT_0806f9b4 = uVar8;
      iVar5 = FUN_08129198((uVar4 & 0x7fffffff) >> 0x10,0x30);
      local_30 = *(int *)(param_1 + 0x54) + (0x18 - iVar5) * 0x100;
      uVar4 = uVar8 * iVar6 + iVar7;
      *puVar9 = uVar4 & 0x7fffffff;
      iVar6 = FUN_08129198((uVar4 & 0x7fffffff) >> 0x10,0x30);
      local_2c = *(int *)(param_1 + 0x58) + (0x18 - iVar6) * 0x100;
      FUN_080e1c2c(&local_30,0,0,0x81);
    }
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 3) < 2) {
      iVar7 = *(int *)(param_1 + 0x54);
      iVar6 = 0x200;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x54);
      iVar6 = DAT_0806f9e8;
    }
    *(int *)(param_1 + 0x54) = iVar7 + iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
    if (bVar1 != 0) goto LAB_0806fa14;
    *(undefined1 *)(param_1 + 0x12) = 0x3c;
    cVar3 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if ((cVar3 != '\x02') ||
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != -1))
    goto LAB_0806fa14;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(byte *)(DAT_0806fa38 + 0x12) = *(byte *)(DAT_0806fa38 + 0x12) | 2;
    cVar3 = '\x03';
  }
  *(char *)(param_1 + 0xd) = cVar3;
LAB_0806fa14:
  local_28 = *(undefined4 *)(param_1 + 0x54);
  local_24 = *(int *)(param_1 + 0x58) + 0xc000;
  FUN_08018eac();
  return in_lr;
}


