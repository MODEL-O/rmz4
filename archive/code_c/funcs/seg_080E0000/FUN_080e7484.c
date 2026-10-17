// undefined FUN_080e7484(void)
// entry 0x80e7484


undefined4 FUN_080e7484(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  undefined4 local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_24 = *(undefined4 *)(param_1 + 0x54);
    local_20 = *(int *)(param_1 + 0x58) + DAT_080e7578;
    FUN_080d0c88(1,&local_24);
    FUN_08002b10(0x2a);
    *(undefined1 *)(param_1 + 0x11) = 1;
    iVar7 = param_1 + 0x54;
    FUN_080e70d4(iVar7,DAT_080e757c,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e70d4(iVar7,DAT_080e7580,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e70d4(iVar7,0x204,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  iVar4 = DAT_080e7590;
  iVar7 = DAT_080e758c;
  puVar1 = DAT_080e7588;
  piVar5 = (int *)((*(byte *)(param_1 + 0x11) - 1) * 4 + DAT_080e7584);
  uVar2 = *DAT_080e7588 * DAT_080e758c + DAT_080e7590;
  uVar6 = uVar2 & 0x7fffffff;
  *DAT_080e7588 = uVar6;
  iVar3 = *piVar5 * (((uVar2 & 0x7fffffff) >> 0x10 & 0xff) + 0x100);
  uVar2 = (uint)*(byte *)(param_1 + 0x11);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  uVar6 = uVar6 * iVar7 + iVar4;
  *puVar1 = uVar6 & 0x7fffffff;
  iVar7 = (((uVar6 & 0x7fffffff) >> 0x10 & 0xff) + 0x180) * -0x100;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar7 >> 8;
  iVar4 = DAT_080e75e0;
  iVar7 = DAT_080e7594;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + *(int *)((uVar2 - 1) * 8 + DAT_080e75e0) * 0x100;
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + *(int *)((uVar2 - 1) * 8 + DAT_080e7594) * -0x100;
    iVar4 = (iVar3 >> 8) * -0x100;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    iVar4 = iVar7;
  }
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + *(int *)((uVar2 - 1) * 8 + iVar4 + 4) * 0x100;
  FUN_0801cf00(param_1,*(undefined2 *)((*(byte *)(param_1 + 0x11) - 1) * 2 + DAT_080e75e4));
  *(undefined1 *)(param_1 + 0xd) = 1;
  return in_lr;
}


