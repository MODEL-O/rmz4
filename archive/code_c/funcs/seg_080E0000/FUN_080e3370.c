// undefined FUN_080e3370(void)
// entry 0x80e3370


undefined4 FUN_080e3370(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 in_lr;
  undefined4 local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(int *)(param_1 + 0x58) + DAT_080e34a0;
    FUN_080d0c88(1,&local_20);
    local_1c = *(int *)(param_1 + 0x58) + DAT_080e34a4;
    FUN_080d0c88(1,&local_20);
    FUN_080e3110(param_1 + 0x54,1,3);
    FUN_080e3110(param_1 + 0x54,1,4);
    *(undefined1 *)(param_1 + 0x11) = 2;
    FUN_08002b10(0x2a);
  }
  iVar1 = DAT_080e34a8;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       *(int *)((*(byte *)(param_1 + 0x11) - 2) * 8 + DAT_080e34a8 + 4) * 0x100;
  iVar6 = DAT_080e34b8;
  iVar5 = DAT_080e34b4;
  puVar2 = DAT_080e34b0;
  piVar7 = (int *)((*(byte *)(param_1 + 0x11) - 2) * 4 + DAT_080e34ac);
  uVar3 = *DAT_080e34b0 * DAT_080e34b4 + DAT_080e34b8;
  uVar8 = uVar3 & 0x7fffffff;
  *DAT_080e34b0 = uVar8;
  iVar4 = *piVar7 * (((uVar3 & 0x7fffffff) >> 0x10 & 0xff) + 0x100);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar4 >> 8;
  uVar3 = uVar8 * iVar5 + iVar6;
  *puVar2 = uVar3 & 0x7fffffff;
  iVar5 = (((uVar3 & 0x7fffffff) >> 0x10 & 0xff) + 0x100) * -0x100;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar5 >> 8;
  FUN_0801cf00(param_1,*(undefined2 *)((*(byte *)(param_1 + 0x11) - 2) * 2 + DAT_080e34bc));
  iVar5 = *(int *)(param_1 + 0x54);
  if (iVar5 < *(int *)(*DAT_080e34c0 + 0x54)) {
    iVar6 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar6 >> 8;
    *(int *)(param_1 + 0x54) =
         iVar5 + *(int *)((*(byte *)(param_1 + 0x11) - 2) * 8 + iVar1) * -0x100;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    *(int *)(param_1 + 0x54) = iVar5 + *(int *)((*(byte *)(param_1 + 0x11) - 2) * 8 + iVar1) * 0x100
    ;
  }
  *(undefined1 *)(param_1 + 0xd) = 1;
  return in_lr;
}


