// undefined FUN_0808368c(void)
// entry 0x808368c


undefined8 FUN_0808368c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  if (param_3 != 0) {
    param_3 = *(int *)(param_1 + 0x58) + param_3;
    *(int *)(param_1 + 0x58) = param_3;
    uVar2 = (uint)(0 < *(int *)(param_1 + 0x60));
    iVar4 = *(int *)(param_1 + 0x54) + DAT_080836d4;
    iVar3 = DAT_080836d8;
    if (((*(byte *)(param_1 + 10) & 0x20) == 0) ||
       (iVar3 = 0x2f00, (*(byte *)(param_1 + 10) & 0x20) == 0)) {
      iVar3 = iVar3 * (uVar2 ^ 1);
    }
    else {
      iVar3 = uVar2 * 0x2f00;
    }
    param_3 = param_3 + iVar3;
    if (uVar2 == 0) {
      iVar3 = FUN_08007f8c(iVar4,param_3 + 0x100);
      if (0 < iVar3) {
        iVar1 = *(int *)(param_1 + 0x58);
        iVar4 = DAT_08083758;
        goto LAB_0808371a;
      }
    }
    else {
      iVar3 = FUN_08007db4(iVar4,param_3 + DAT_08083700);
      if (iVar3 < 0) {
        iVar1 = *(int *)(param_1 + 0x58);
        iVar4 = 0x100;
LAB_0808371a:
        *(int *)(param_1 + 0x58) = iVar1 + iVar4 + iVar3;
        uVar5 = 1;
      }
    }
    uVar2 = (uint)(0 < *(int *)(param_1 + 0x60));
    iVar4 = *(int *)(param_1 + 0x54) + 0x700;
    iVar3 = DAT_0808375c;
    if (((*(byte *)(param_1 + 10) & 0x20) == 0) ||
       (iVar3 = 0x2f00, (*(byte *)(param_1 + 10) & 0x20) == 0)) {
      iVar3 = iVar3 * (uVar2 ^ 1);
    }
    else {
      iVar3 = uVar2 * 0x2f00;
    }
    iVar3 = *(int *)(param_1 + 0x58) + iVar3;
    if (uVar2 == 0) {
      iVar3 = FUN_08007f8c(iVar4,iVar3 + 0x100);
      if (0 < iVar3) {
        iVar1 = *(int *)(param_1 + 0x58);
        iVar4 = DAT_080837f4;
        goto LAB_0808379e;
      }
    }
    else {
      iVar3 = FUN_08007db4(iVar4,iVar3 + DAT_08083784);
      if (iVar3 < 0) {
        iVar1 = *(int *)(param_1 + 0x58);
        iVar4 = 0x100;
LAB_0808379e:
        *(int *)(param_1 + 0x58) = iVar1 + iVar4 + iVar3;
        uVar5 = 1;
      }
    }
  }
  if (param_2 == 0) goto LAB_08083888;
  param_2 = *(int *)(param_1 + 0x54) + param_2;
  *(int *)(param_1 + 0x54) = param_2;
  uVar2 = (uint)(0 < *(int *)(param_1 + 0x5c));
  iVar4 = param_2 + DAT_080837f8 + uVar2 * 0xe00;
  iVar3 = DAT_080837fc;
  if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
    iVar3 = 0x200;
  }
  iVar3 = *(int *)(param_1 + 0x58) + iVar3;
  if (uVar2 == 0) {
    iVar3 = FUN_0800834c(iVar4,iVar3);
    if (0 < iVar3) goto LAB_0808380e;
  }
  else {
    iVar3 = FUN_0800816c(iVar4,iVar3);
    if (iVar3 < 0) {
LAB_0808380e:
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
      uVar5 = uVar5 | 2;
    }
  }
  uVar2 = (uint)(0 < *(int *)(param_1 + 0x5c));
  iVar4 = *(int *)(param_1 + 0x54) + DAT_0808384c + uVar2 * 0xe00;
  iVar3 = DAT_08083868;
  if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
    iVar3 = 0x2d00;
  }
  iVar3 = *(int *)(param_1 + 0x58) + iVar3;
  if (uVar2 == 0) {
    iVar3 = FUN_0800834c(iVar4,iVar3);
    if (iVar3 < 1) goto LAB_08083888;
  }
  else {
    iVar3 = FUN_0800816c(iVar4,iVar3);
    if (-1 < iVar3) goto LAB_08083888;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  uVar5 = uVar5 | 2;
LAB_08083888:
  return CONCAT44(in_lr,uVar5);
}


