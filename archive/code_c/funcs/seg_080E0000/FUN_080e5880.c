// undefined FUN_080e5880(void)
// entry 0x80e5880


undefined4 FUN_080e5880(int param_1)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  undefined4 local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(int *)(param_1 + 0x58) + DAT_080e5968;
    FUN_080d0c88(1,&local_20);
    FUN_08002b10(0x2a);
    *(undefined1 *)(param_1 + 0x11) = 1;
    FUN_080e56d0(param_1 + 0x54,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e56d0(param_1 + 0x54,DAT_080e596c,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  FUN_0801cf00(param_1,*(undefined2 *)((*(byte *)(param_1 + 0x11) - 1) * 2 + DAT_080e5970));
  iVar7 = DAT_080e5980;
  iVar5 = DAT_080e597c;
  puVar2 = DAT_080e5978;
  piVar6 = (int *)((*(byte *)(param_1 + 0x11) - 1) * 4 + DAT_080e5974);
  uVar3 = *DAT_080e5978 * DAT_080e597c + DAT_080e5980;
  uVar8 = uVar3 & 0x7fffffff;
  *DAT_080e5978 = uVar8;
  iVar4 = *piVar6 * (((uVar3 & 0x7fffffff) >> 0x10 & 0xff) + 0x100);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar4 >> 8;
  uVar3 = uVar8 * iVar5 + iVar7;
  *puVar2 = uVar3 & 0x7fffffff;
  iVar5 = (((uVar3 & 0x7fffffff) >> 0x10 & 0xff) + 0x200) * -0x100;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar5 >> 8;
  iVar7 = DAT_080e59d0;
  iVar5 = DAT_080e5984;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         *(int *)((*(byte *)(param_1 + 0x11) - 1) * 8 + DAT_080e5984) * 0x100;
    bVar1 = *(byte *)(param_1 + 0x11);
    iVar7 = iVar5;
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         *(int *)((*(byte *)(param_1 + 0x11) - 1) * 8 + DAT_080e59d0) * -0x100;
    iVar5 = (iVar4 >> 8) * -0x100;
    bVar1 = *(byte *)(param_1 + 0x11);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar5 >> 8;
  }
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + *(int *)((bVar1 - 1) * 8 + iVar7 + 4) * 0x100;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return in_lr;
}


