// undefined FUN_0804b464(void)
// entry 0x804b464


undefined4 FUN_0804b464(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804b500);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801d3d0(param_1,0xf);
  FUN_0801cf00(param_1,0x7f00);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0804b504,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0804b508;
  iVar6 = *(int *)(param_1 + 0x54);
  if (*(int *)(iVar7 + 0x54) < iVar6) {
    iVar6 = FUN_0800816c(iVar6,*(undefined4 *)(param_1 + 0x58));
    if (iVar6 < 1) goto LAB_0804b51e;
  }
  else {
    iVar6 = FUN_0800834c(iVar6,*(undefined4 *)(param_1 + 0x58));
    if (-1 < iVar6) goto LAB_0804b51e;
  }
  iVar6 = 0x10000;
LAB_0804b51e:
  iVar2 = FUN_08007db4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar7 = FUN_08007f8c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (0 < iVar2) {
    iVar2 = 0x10000;
  }
  if (iVar7 < 0) {
    iVar7 = 0x10000;
  }
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = -iVar2;
  }
  iVar5 = iVar7;
  if (iVar7 < 0) {
    iVar5 = -iVar7;
  }
  if (iVar3 < iVar5) {
    iVar7 = iVar2;
  }
  if ((iVar6 == 0x10000) && (iVar7 == 0x10000)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804b59c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  else {
    iVar2 = iVar6;
    if (iVar6 < 0) {
      iVar2 = -iVar6;
    }
    iVar3 = iVar7;
    if (iVar7 < 0) {
      iVar3 = -iVar7;
    }
    if (iVar2 < iVar3) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
      uVar4 = DAT_0804b5e0;
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
      uVar4 = DAT_0804b628;
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
    FUN_0804b650(param_1);
  }
  return in_lr;
}


