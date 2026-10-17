// undefined FUN_080d7de0(void)
// entry 0x80d7de0


undefined4 FUN_080d7de0(int param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  short sVar6;
  uint uVar7;
  int *piVar8;
  byte bVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  undefined4 in_lr;
  
  bVar5 = *(byte *)(*(int *)(param_1 + 0x28) + 10);
  bVar1 = bVar5 >> 4;
  bVar5 = bVar5 >> 5;
  bVar11 = bVar5 & 1;
  uVar12 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar9 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar9 | 1;
    if ((bVar1 & 1) == 0) {
      bVar9 = bVar9 & 0xef | 1;
    }
    else {
      bVar9 = bVar9 | 0x11;
    }
    *(byte *)(param_1 + 10) = bVar9;
    *(byte *)(param_1 + 0x4c) = bVar1 & 1;
    pbVar10 = (byte *)(param_1 + 0x4a);
    *pbVar10 = *pbVar10 & 0xef | (bVar1 & 1) << 4;
    if ((bVar5 & 1) == 0) {
      bVar5 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar5 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar5;
    *(byte *)(param_1 + 0x4d) = bVar11;
    *pbVar10 = *pbVar10 & 0xdf | bVar11 << 5;
    FUN_0801cf00(param_1,*(undefined2 *)(uVar12 * 2 + *(int *)(param_1 + 0x74)));
    iVar4 = DAT_080d7edc;
    iVar3 = DAT_080d7ed8;
    puVar2 = DAT_080d7ed4;
    if ((bVar1 & 1) != 0) {
      uVar12 = 2 - uVar12;
    }
    uVar7 = DAT_080d7ed8 * *DAT_080d7ed4 + DAT_080d7edc;
    *(uint *)(param_1 + 0x5c) = (uVar12 - 1) * 0x100 + ((uVar7 & 0x1ffffff) >> 0x10) + DAT_080d7ee0;
    uVar12 = iVar3 * (uVar7 & 0x7fffffff) + iVar4;
    *puVar2 = uVar12 & 0x7fffffff;
    *(uint *)(param_1 + 0x60) = DAT_080d7ee4 - ((uVar12 & 0x7fffffff) >> 0x10 & 0x100);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar5 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar5;
  if ((bVar5 & 1) == 0) {
    bVar5 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar5 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar5;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  FUN_0801d134(param_1);
  if ((0x18 < *(byte *)(param_1 + 0x12)) &&
     (sVar6 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar6 != 0)) {
    if (*(char *)(param_1 + 0x79) == '\0') {
      FUN_080d0c88(3,param_1 + 0x54);
    }
    else {
      FUN_080d0c88(2,param_1 + 0x54);
    }
    piVar8 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d7f58);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar8 + 8);
  }
  return in_lr;
}


