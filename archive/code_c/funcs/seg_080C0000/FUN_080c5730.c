// undefined FUN_080c5730(void)
// entry 0x80c5730


undefined4 FUN_080c5730(int param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  undefined4 in_lr;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar3 = *(byte *)(iVar5 + 10) >> 4;
  uVar11 = bVar3 & 1;
  local_2c = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x18a);
    *(undefined1 *)(param_1 + 0xb8) = 1;
    *(undefined1 *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(char *)(param_1 + 0x4c) = (char)uVar11;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar11 << 4);
  iVar8 = DAT_080c5940;
  if ((*(byte *)(iVar5 + 10) & 0x10) != 0) {
    iVar8 = 0x3600;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + iVar8;
  *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + DAT_080c5944;
  cVar4 = FUN_08129198(*(undefined1 *)(param_1 + 0x12),3);
  iVar8 = DAT_080c5950;
  puVar1 = DAT_080c5948;
  if (cVar4 == '\0') {
    uVar6 = DAT_080c594c * *DAT_080c5948 + DAT_080c5950;
    uVar10 = uVar6 & 0x7fffffff;
    *DAT_080c5948 = uVar10;
    iVar2 = DAT_080c5954;
    local_38 = ((uVar6 & 0x1ffffff) >> 0x10) + 0x400;
    iVar7 = *(short *)((*(byte *)(param_1 + 0x12) >> 1 & 7) * 0x40 + DAT_080c5954) * 0xc;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    uVar6 = DAT_080c594c * uVar10 + iVar8;
    uVar10 = uVar6 & 0x7fffffff;
    *puVar1 = uVar10;
    iVar7 = (iVar7 >> 8) + ((uVar6 & 0x7fffffff) >> 0x10 & 7) + 0x44;
    uVar6 = iVar7 + uVar11 * 2 * (0x140 - iVar7);
    local_3c = *(short *)((uVar6 * 0x1000000 + 0x40000000 >> 0x17) + iVar2) * local_38;
    if (local_3c < 0) {
      local_3c = local_3c + 0xff;
    }
    local_3c = local_3c >> 8;
    local_38 = *(short *)((uVar6 & 0xff) * 2 + iVar2) * local_38;
    if (local_38 < 0) {
      local_38 = local_38 + 0xff;
    }
    local_38 = local_38 >> 8;
    uVar6 = DAT_080c594c * uVar10 + iVar8;
    *puVar1 = uVar6 & 0x7fffffff;
    iVar8 = FUN_080c544c(param_1,param_1 + 0x54,&local_3c,(uVar6 & 0x7fffffff) >> 0x10 & 1);
    if (iVar8 != 0) {
      *(short *)(param_1 + 0xb4) = *(short *)(param_1 + 0xb4) + 1;
    }
  }
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 == '\0') {
    FUN_08002b10(0x40);
    iVar8 = uVar11 * 2 + -1;
    local_28 = *(int *)(param_1 + 0x54) + iVar8 * -0x1000;
    local_24 = *(int *)(iVar5 + 0xb4);
    uVar11 = 0;
    piVar12 = (int *)(local_2c * 4 + DAT_080c5958);
    piVar9 = (int *)(local_2c * 4 + DAT_080c595c);
    do {
      local_34 = *(int *)(uVar11 * 8 + *piVar12) * iVar8 + local_28;
      local_30 = *(int *)(uVar11 * 8 + *piVar12 + 4) + local_24;
      iVar5 = FUN_080c54b0(param_1,&local_34,(int)*(short *)(uVar11 * 2 + *piVar9),uVar11 & 0xff);
      if (iVar5 == 0) break;
      *(short *)(param_1 + 0xb4) = *(short *)(param_1 + 0xb4) + 1;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < 6);
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


