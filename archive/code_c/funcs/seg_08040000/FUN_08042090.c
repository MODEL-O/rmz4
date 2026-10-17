// undefined FUN_08042090(void)
// entry 0x8042090


undefined4 FUN_08042090(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c();
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080420ec);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080420f0,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar6 = *(int *)(param_1 + 0x54);
  if (*(int *)(iVar7 + 0x54) < iVar6) {
    iVar6 = FUN_0800816c(iVar6,*(undefined4 *)(param_1 + 0x58));
    if (iVar6 < 1) goto LAB_08042106;
  }
  else {
    iVar6 = FUN_0800834c(iVar6,*(undefined4 *)(param_1 + 0x58));
    if (-1 < iVar6) goto LAB_08042106;
  }
  iVar6 = 0x10000;
LAB_08042106:
  iVar1 = FUN_08007db4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar7 = FUN_08007f8c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (0 < iVar1) {
    iVar1 = 0x10000;
  }
  if (iVar7 < 0) {
    iVar7 = 0x10000;
  }
  iVar3 = iVar1;
  if (iVar1 < 0) {
    iVar3 = -iVar1;
  }
  iVar5 = iVar7;
  if (iVar7 < 0) {
    iVar5 = -iVar7;
  }
  if (iVar3 < iVar5) {
    iVar7 = iVar1;
  }
  if ((iVar6 == 0x10000) && (iVar7 == 0x10000)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08042184);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  else {
    iVar1 = iVar6;
    if (iVar6 < 0) {
      iVar1 = -iVar6;
    }
    iVar3 = iVar7;
    if (iVar7 < 0) {
      iVar3 = -iVar7;
    }
    if (iVar1 < iVar3) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
      uVar4 = DAT_080421c8;
      if (*(char *)(param_1 + 0x11) != '\0') {
        uVar4 = 0x400;
      }
      *(undefined4 *)(param_1 + 0x60) = uVar4;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      if (iVar6 < 0) {
        uVar4 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x54) = uVar4;
        uVar4 = 1;
      }
      else {
        uVar4 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x54) = uVar4;
        uVar4 = 0xffffffff;
      }
      *(undefined4 *)(param_1 + 100) = uVar4;
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    else {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
      uVar4 = DAT_08042210;
      if (*(char *)(param_1 + 0x11) != '\0') {
        uVar4 = 0x400;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (iVar7 < 0) {
        uVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar4;
        uVar4 = 1;
      }
      else {
        uVar4 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar4;
        uVar4 = 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x68) = uVar4;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    *(undefined1 *)(param_1 + 0x12) = 0x5a;
  }
  return in_lr;
}


