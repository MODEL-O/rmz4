// undefined FUN_080e3ab8(void)
// entry 0x80e3ab8


undefined4 FUN_080e3ab8(int param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined4 in_lr;
  undefined4 local_20;
  int local_1c;
  
  if (*(byte *)(param_1 + 0x75) == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar3;
  bVar3 = *(byte *)(param_1 + 0x75) & 1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(int *)(param_1 + 0x58) + DAT_080e3bf4;
    FUN_080d0c88(1,&local_20);
    FUN_08002b10(0x2a);
    *(undefined1 *)(param_1 + 0x11) = 1;
    FUN_080e37a0(param_1 + 0x54,DAT_080e3bf8,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e37a0(param_1 + 0x54,DAT_080e3bfc,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  FUN_0801cf00(param_1,*(undefined2 *)((*(byte *)(param_1 + 0x11) - 1) * 2 + DAT_080e3c00));
  iVar7 = DAT_080e3c04;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       *(int *)((*(byte *)(param_1 + 0x11) - 1) * 8 + DAT_080e3c04 + 4) * 0x100;
  iVar2 = DAT_080e3c14;
  iVar6 = DAT_080e3c10;
  puVar1 = DAT_080e3c0c;
  piVar8 = (int *)((*(byte *)(param_1 + 0x11) - 1) * 4 + DAT_080e3c08);
  uVar4 = *DAT_080e3c0c * DAT_080e3c10 + DAT_080e3c14;
  uVar9 = uVar4 & 0x7fffffff;
  *DAT_080e3c0c = uVar9;
  iVar5 = *piVar8 * (((uVar4 & 0x7fffffff) >> 0x10 & 0xff) + 0x100);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar5 >> 8;
  uVar4 = uVar9 * iVar6 + iVar2;
  *puVar1 = uVar4 & 0x7fffffff;
  iVar6 = (((uVar4 & 0x7fffffff) >> 0x10 & 0xff) + 0x180) * -0x100;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar6 >> 8;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + *(int *)((*(byte *)(param_1 + 0x11) - 1) * 8 + iVar7) * 0x100;
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + *(int *)((*(byte *)(param_1 + 0x11) - 1) * 8 + iVar7) * -0x100;
    iVar7 = (iVar5 >> 8) * -0x100;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar7 >> 8;
  }
  *(undefined1 *)(param_1 + 0xd) = 1;
  return in_lr;
}


