// undefined FUN_080e6480(void)
// entry 0x80e6480


undefined4 FUN_080e6480(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_24 = *(undefined4 *)(param_1 + 0x54);
    local_20 = *(int *)(param_1 + 0x58) + DAT_080e6574;
    FUN_080d0c88(1,&local_24);
    FUN_08002b10(0x2a);
    local_20 = *(int *)(param_1 + 0x58) + DAT_080e6578;
    *(undefined1 *)(param_1 + 0x11) = 1;
    FUN_080e6270(param_1 + 0x54,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e6270(param_1 + 0x54,DAT_080e657c,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080d0c88(2,&local_24);
  }
  iVar5 = DAT_080e658c;
  iVar4 = DAT_080e6588;
  puVar1 = DAT_080e6584;
  piVar6 = (int *)((*(byte *)(param_1 + 0x11) - 1) * 4 + DAT_080e6580);
  uVar2 = *DAT_080e6584 * DAT_080e6588 + DAT_080e658c;
  uVar7 = uVar2 & 0x7fffffff;
  *DAT_080e6584 = uVar7;
  iVar3 = *piVar6 * (((uVar2 & 0x7fffffff) >> 0x10 & 0xff) + 0x100);
  uVar2 = (uint)*(byte *)(param_1 + 0x11);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  uVar7 = uVar7 * iVar4 + iVar5;
  *puVar1 = uVar7 & 0x7fffffff;
  iVar4 = (((uVar7 & 0x7fffffff) >> 0x10 & 0xff) + 0x180) * -0x100;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar4 >> 8;
  iVar5 = DAT_080e65dc;
  iVar4 = DAT_080e6590;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + *(int *)((uVar2 - 1) * 8 + DAT_080e65dc) * 0x100;
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + *(int *)((uVar2 - 1) * 8 + DAT_080e6590) * -0x100;
    iVar5 = (iVar3 >> 8) * -0x100;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar5 >> 8;
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + *(int *)((uVar2 - 1) * 8 + iVar5 + 4) * 0x100;
  FUN_0801cf00(param_1,*(undefined2 *)((*(byte *)(param_1 + 0x11) - 1) * 2 + DAT_080e65e0));
  *(undefined1 *)(param_1 + 0xd) = 1;
  return in_lr;
}


