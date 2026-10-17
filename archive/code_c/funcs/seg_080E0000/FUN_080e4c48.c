// undefined FUN_080e4c48(void)
// entry 0x80e4c48


undefined4 FUN_080e4c48(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar7 = param_1 + 0x54;
    FUN_080d0c88(1,iVar7);
    FUN_08002b10(0x2a);
    *(undefined1 *)(param_1 + 0x11) = 1;
    FUN_080e4a54(iVar7,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e4a54(iVar7,DAT_080e4d28,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e4a54(iVar7,0x104,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  iVar4 = DAT_080e4d38;
  iVar7 = DAT_080e4d34;
  puVar1 = DAT_080e4d30;
  piVar5 = (int *)((*(byte *)(param_1 + 0x11) - 1) * 4 + DAT_080e4d2c);
  uVar2 = *DAT_080e4d30 * DAT_080e4d34 + DAT_080e4d38;
  uVar6 = uVar2 & 0x7fffffff;
  *DAT_080e4d30 = uVar6;
  iVar3 = *piVar5 * (((uVar2 & 0x7fffffff) >> 0x10 & 0x7f) + 0x100);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  uVar2 = uVar6 * iVar7 + iVar4;
  *puVar1 = uVar2 & 0x7fffffff;
  iVar7 = (((uVar2 & 0x7fffffff) >> 0x10 & 0xff) + 0x200) * -0x100;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar7 >> 8;
  iVar4 = DAT_080e4dac;
  iVar7 = DAT_080e4d3c;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         *(int *)((*(byte *)(param_1 + 0x11) - 1) * 8 + DAT_080e4dac) * 0x100;
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         *(int *)((*(byte *)(param_1 + 0x11) - 1) * 8 + DAT_080e4d3c) * -0x100;
    iVar4 = (iVar3 >> 8) * -0x100;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    iVar4 = iVar7;
  }
  if (*(char *)(param_1 + 0x11) == '\x04') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined1 *)(param_1 + 0x4d) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
  }
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + *(int *)((*(byte *)(param_1 + 0x11) - 1) * 8 + iVar4 + 4) * 0x100;
  FUN_0801cf00(param_1,*(undefined2 *)((*(byte *)(param_1 + 0x11) - 1) * 2 + DAT_080e4db0));
  *(undefined1 *)(param_1 + 0xd) = 1;
  return in_lr;
}


