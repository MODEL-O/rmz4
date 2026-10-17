// undefined FUN_08083464(void)
// entry 0x8083464


undefined4 FUN_08083464(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  bVar1 = false;
  if (param_3 != 0) {
    param_3 = *(int *)(param_1 + 0x68) + param_3;
    *(int *)(param_1 + 0x68) = param_3;
    uVar4 = (uint)(0 < *(int *)(param_1 + 0x60));
    iVar6 = *(int *)(param_1 + 100) + DAT_080834ac;
    iVar5 = DAT_080834b0;
    if (((*(byte *)(param_1 + 10) & 0x20) == 0) ||
       (iVar5 = 0x2f00, (*(byte *)(param_1 + 10) & 0x20) == 0)) {
      iVar5 = iVar5 * (uVar4 ^ 1);
    }
    else {
      iVar5 = uVar4 * 0x2f00;
    }
    param_3 = param_3 + iVar5;
    if (uVar4 == 0) {
      iVar5 = FUN_08007f8c(iVar6,param_3 + 0x100);
      if (0 < iVar5) {
        iVar3 = *(int *)(param_1 + 0x68);
        iVar6 = DAT_08083530;
        goto LAB_080834f2;
      }
    }
    else {
      iVar5 = FUN_08007db4(iVar6,param_3 + DAT_080834d8);
      if (iVar5 < 0) {
        iVar3 = *(int *)(param_1 + 0x68);
        iVar6 = 0x100;
LAB_080834f2:
        *(int *)(param_1 + 0x68) = iVar3 + iVar6 + iVar5;
        bVar1 = true;
      }
    }
    uVar4 = (uint)(0 < *(int *)(param_1 + 0x60));
    iVar6 = *(int *)(param_1 + 100) + 0x700;
    iVar5 = DAT_08083534;
    if (((*(byte *)(param_1 + 10) & 0x20) == 0) ||
       (iVar5 = 0x2f00, (*(byte *)(param_1 + 10) & 0x20) == 0)) {
      iVar5 = iVar5 * (uVar4 ^ 1);
    }
    else {
      iVar5 = uVar4 * 0x2f00;
    }
    iVar5 = *(int *)(param_1 + 0x68) + iVar5;
    if (uVar4 == 0) {
      iVar5 = FUN_08007f8c(iVar6,iVar5 + 0x100);
      if (0 < iVar5) {
        iVar3 = *(int *)(param_1 + 0x68);
        iVar6 = DAT_080835bc;
        goto LAB_08083576;
      }
    }
    else {
      iVar5 = FUN_08007db4(iVar6,iVar5 + DAT_0808355c);
      if (iVar5 < 0) {
        iVar3 = *(int *)(param_1 + 0x68);
        iVar6 = 0x100;
LAB_08083576:
        *(int *)(param_1 + 0x68) = iVar3 + iVar6 + iVar5;
        bVar1 = true;
      }
    }
  }
  bVar2 = false;
  if (param_2 == 0) goto LAB_08083650;
  param_2 = *(int *)(param_1 + 100) + param_2;
  *(int *)(param_1 + 100) = param_2;
  uVar4 = (uint)(0 < *(int *)(param_1 + 0x5c));
  iVar6 = param_2 + DAT_080835c0 + uVar4 * 0xe00;
  iVar5 = *(int *)(param_1 + 0x68) + DAT_080835c4;
  if (uVar4 == 0) {
    iVar5 = FUN_0800834c(iVar6,iVar5);
    if (0 < iVar5) goto LAB_080835d6;
  }
  else {
    iVar5 = FUN_0800816c(iVar6,iVar5);
    if (iVar5 < 0) {
LAB_080835d6:
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + iVar5;
      bVar2 = true;
    }
  }
  uVar4 = (uint)(0 < *(int *)(param_1 + 0x5c));
  iVar6 = *(int *)(param_1 + 100) + DAT_08083614 + uVar4 * 0xe00;
  iVar5 = DAT_08083630;
  if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
    iVar5 = 0x2d00;
  }
  iVar5 = *(int *)(param_1 + 0x68) + iVar5;
  if (uVar4 == 0) {
    iVar5 = FUN_0800834c(iVar6,iVar5);
    if (iVar5 < 1) goto LAB_08083650;
  }
  else {
    iVar5 = FUN_0800816c(iVar6,iVar5);
    if (-1 < iVar5) goto LAB_08083650;
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + iVar5;
  bVar2 = true;
LAB_08083650:
  if (((bVar1) || (*(int *)(param_1 + 0x5c) == 0)) || (*(int *)(param_1 + 0x60) == 0)) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  }
  if (bVar2) {
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  }
  return in_lr;
}


