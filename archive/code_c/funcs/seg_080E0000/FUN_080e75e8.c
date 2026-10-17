// undefined FUN_080e75e8(void)
// entry 0x80e75e8


undefined4 FUN_080e75e8(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined4 in_lr;
  
  uVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  if (*(byte *)(param_1 + 0x11) == 0) {
    FUN_0801cf00(param_1,DAT_080e76c4);
    uVar3 = 2;
  }
  else {
    if (*(byte *)(param_1 + 0x11) < 4) {
      FUN_0801cf00(param_1,*(undefined2 *)((*(byte *)(param_1 + 0x11) - 1) * 2 + DAT_080e7614));
    }
    else {
      FUN_0801cf00(param_1,*(undefined2 *)((*(byte *)(param_1 + 0x11) - 4) * 2 + DAT_080e769c));
    }
    iVar2 = DAT_080e76ac;
    iVar7 = DAT_080e76a8;
    puVar1 = DAT_080e76a4;
    piVar8 = (int *)((*(byte *)(param_1 + 0x11) - 1) * 4 + DAT_080e76a0);
    uVar5 = DAT_080e76a8 * *DAT_080e76a4 + DAT_080e76ac;
    uVar9 = uVar5 & 0x7fffffff;
    *DAT_080e76a4 = uVar9;
    iVar6 = *piVar8 * (((uVar5 & 0x1ffffff) >> 0x10) + 0x80);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar6 >> 8;
    uVar5 = iVar7 * uVar9 + iVar2;
    *puVar1 = uVar5 & 0x7fffffff;
    iVar7 = (((uVar5 & 0x7fffffff) >> 0x10 & 0xff) + 0x400) * -0x100;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar7 >> 8;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar7 = (iVar6 >> 8) * -0x100;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar7 >> 8;
    }
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar3;
  return in_lr;
}


