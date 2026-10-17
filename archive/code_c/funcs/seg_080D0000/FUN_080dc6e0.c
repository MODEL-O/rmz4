// undefined FUN_080dc6e0(void)
// entry 0x80dc6e0


undefined4 FUN_080dc6e0(int param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  int *piVar9;
  byte bVar10;
  byte *pbVar11;
  byte bVar12;
  uint uVar13;
  undefined4 in_lr;
  
  bVar6 = *(byte *)(*(int *)(param_1 + 0x28) + 10);
  bVar1 = bVar6 >> 4;
  bVar6 = bVar6 >> 5;
  bVar12 = bVar6 & 1;
  uVar13 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar10 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar10 | 1;
    if ((bVar1 & 1) == 0) {
      bVar10 = bVar10 & 0xef | 1;
    }
    else {
      bVar10 = bVar10 | 0x11;
    }
    *(byte *)(param_1 + 10) = bVar10;
    *(byte *)(param_1 + 0x4c) = bVar1 & 1;
    pbVar11 = (byte *)(param_1 + 0x4a);
    *pbVar11 = *pbVar11 & 0xef | (bVar1 & 1) << 4;
    if ((bVar6 & 1) == 0) {
      bVar6 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar6 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar6;
    *(byte *)(param_1 + 0x4d) = bVar12;
    *pbVar11 = *pbVar11 & 0xdf | bVar12 << 5;
    FUN_0801cf00(param_1,*(undefined2 *)(uVar13 * 2 + *(int *)(param_1 + 0x74)));
    uVar5 = DAT_080dc7e0;
    iVar4 = DAT_080dc7dc;
    iVar3 = DAT_080dc7d8;
    puVar2 = DAT_080dc7d4;
    if ((bVar1 & 1) != 0) {
      uVar13 = 2 - uVar13;
    }
    uVar8 = DAT_080dc7d8 * *DAT_080dc7d4 + DAT_080dc7dc;
    *(uint *)(param_1 + 0x5c) =
         (uVar13 - 1) * 0x100 + ((uVar8 & 0x7fffffff) >> 0x10 & DAT_080dc7e0) + DAT_080dc7e4;
    uVar13 = iVar3 * (uVar8 & 0x7fffffff) + iVar4;
    *puVar2 = uVar13 & 0x7fffffff;
    *(uint *)(param_1 + 0x60) = DAT_080dc7e8 - ((uVar13 & 0x7fffffff) >> 0x10 & uVar5);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar6 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar6;
  if ((bVar6 & 1) == 0) {
    bVar6 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar6 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar6;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  FUN_0801d134(param_1);
  sVar7 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((sVar7 != 0) && (0 < *(int *)(param_1 + 0x60))) {
    if (*(char *)(param_1 + 0x79) == '\0') {
      FUN_080d0c88(3,param_1 + 0x54);
    }
    else {
      FUN_080d0c88(2,param_1 + 0x54);
    }
    piVar9 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dc85c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar9 + 8);
  }
  return in_lr;
}


