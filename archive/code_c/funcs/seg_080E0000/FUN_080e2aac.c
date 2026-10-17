// undefined FUN_080e2aac(void)
// entry 0x80e2aac


undefined4 FUN_080e2aac(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined4 in_lr;
  
  FUN_0801cf00(param_1,*(undefined2 *)((*(byte *)(param_1 + 0x11) - 2) * 2 + DAT_080e2ae8));
  if (*(byte *)(param_1 + 0x11) < 5) {
    if (*(char *)(param_1 + 0x75) == '\0') {
      iVar7 = *(int *)((*(byte *)(param_1 + 0x11) - 2) * 8 + DAT_080e2aec) << 8;
    }
    else {
      iVar7 = *(int *)((*(byte *)(param_1 + 0x11) - 2) * 8 + DAT_080e2ba0) * -0x10000;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xff;
      }
      iVar7 = iVar7 >> 8;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
  }
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       *(int *)((*(byte *)(param_1 + 0x11) - 2) * 8 + DAT_080e2ba0 + 4) * 0x100;
  iVar3 = DAT_080e2bb0;
  iVar2 = DAT_080e2bac;
  puVar1 = DAT_080e2ba8;
  iVar7 = DAT_080e2ba4;
  piVar8 = (int *)((*(byte *)(param_1 + 0x11) - 2) * 8 + DAT_080e2ba4);
  uVar5 = *DAT_080e2ba8 * DAT_080e2bac + DAT_080e2bb0;
  uVar9 = uVar5 & 0x7fffffff;
  *DAT_080e2ba8 = uVar9;
  iVar6 = *piVar8 * (((uVar5 & 0x7fffffff) >> 0x10 & 0xff) + 0x100);
  bVar4 = *(byte *)(param_1 + 0x11);
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar6 >> 8;
  uVar5 = uVar9 * iVar2 + iVar3;
  *puVar1 = uVar5 & 0x7fffffff;
  iVar7 = *(int *)((bVar4 - 2) * 8 + iVar7 + 4) * (((uVar5 & 0x1ffffff) >> 0x10) + 0x100);
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar7 >> 8;
  if (*(byte *)(param_1 + 0x75) == 0) {
    bVar4 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar4 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar4;
  bVar4 = *(byte *)(param_1 + 0x75) & 1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return in_lr;
}


