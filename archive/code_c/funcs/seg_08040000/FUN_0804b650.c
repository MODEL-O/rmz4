// undefined FUN_0804b650(void)
// entry 0x804b650


undefined4 FUN_0804b650(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (((((*(ushort *)(DAT_0804b6d8 + 0x1d0) & 0x7f) != 2) &&
       (sVar2 = FUN_0804b980(*(int *)(param_1 + 0x54) + 0x400,*(int *)(param_1 + 0x58) + 0x400),
       sVar2 == 0)) &&
      (sVar2 = FUN_0804b980(*(int *)(param_1 + 0x54) + 0x400,*(int *)(param_1 + 0x58) + DAT_0804b6dc
                           ), sVar2 == 0)) &&
     ((sVar2 = FUN_0804b980(*(int *)(param_1 + 0x54) + DAT_0804b6dc,*(int *)(param_1 + 0x58) + 0x400
                           ), sVar2 == 0 &&
      (sVar2 = FUN_0804b980(*(int *)(param_1 + 0x54) + DAT_0804b6dc,
                            *(int *)(param_1 + 0x58) + DAT_0804b6dc), sVar2 == 0)))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    goto LAB_0804b8fc;
  }
  FUN_0801cff0(param_1);
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (*(int *)(param_1 + 100) < 1) {
      iVar3 = FUN_08008988(*(undefined4 *)(param_1 + 0x54));
      iVar6 = *(int *)(param_1 + 0x54);
      if (iVar6 - iVar3 < 0) {
        iVar3 = FUN_08008988(iVar6,*(undefined4 *)(param_1 + 0x58));
        if (iVar3 - *(int *)(param_1 + 0x54) <= DAT_0804b7a8) goto LAB_0804b77a;
      }
      else {
        iVar3 = FUN_08008988(iVar6,*(undefined4 *)(param_1 + 0x58));
        if (*(int *)(param_1 + 0x54) - iVar3 <= DAT_0804b764) {
LAB_0804b77a:
          uVar4 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
          goto LAB_0804b782;
        }
      }
    }
    else {
      iVar3 = FUN_08008868(*(undefined4 *)(param_1 + 0x54));
      iVar6 = *(int *)(param_1 + 0x54);
      if (iVar6 - iVar3 < 0) {
        iVar3 = FUN_08008868(iVar6,*(undefined4 *)(param_1 + 0x58));
        if (iVar3 - *(int *)(param_1 + 0x54) <= DAT_0804b73c) goto LAB_0804b732;
      }
      else {
        iVar3 = FUN_08008868(iVar6,*(undefined4 *)(param_1 + 0x58));
        if (*(int *)(param_1 + 0x54) - iVar3 <= DAT_0804b71c) {
LAB_0804b732:
          uVar4 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
LAB_0804b782:
          *(undefined4 *)(param_1 + 0x54) = uVar4;
        }
      }
    }
    sVar2 = FUN_0804b980(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      sVar2 = FUN_0804b980(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100) * 0x100,
                           *(undefined4 *)(param_1 + 0x58));
      if (sVar2 != 0) goto LAB_0804b8c6;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) << 10;
      if (*(int *)(param_1 + 0x60) < 1) goto LAB_0804b7d4;
      uVar4 = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * -0x400;
      if (*(int *)(param_1 + 0x60) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
LAB_0804b7d4:
        uVar4 = 1;
      }
    }
    *(undefined4 *)(param_1 + 0x68) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    if (*(int *)(param_1 + 0x68) < 1) {
      iVar3 = FUN_08008748(iVar3,*(undefined4 *)(param_1 + 0x58));
      if (*(int *)(param_1 + 0x58) - iVar3 < 0) {
        iVar3 = FUN_08008748(*(undefined4 *)(param_1 + 0x54));
        if (iVar3 - *(int *)(param_1 + 0x58) <= DAT_0804b894) goto LAB_0804b868;
      }
      else {
        iVar3 = FUN_08008748(*(undefined4 *)(param_1 + 0x54));
        if (*(int *)(param_1 + 0x58) - iVar3 <= DAT_0804b854) {
LAB_0804b868:
          uVar4 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
          goto LAB_0804b870;
        }
      }
    }
    else {
      iVar3 = FUN_08008534(iVar3,*(undefined4 *)(param_1 + 0x58));
      if (*(int *)(param_1 + 0x58) - iVar3 < 0) {
        iVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54));
        if (iVar3 - *(int *)(param_1 + 0x58) <= DAT_0804b82c) goto LAB_0804b820;
      }
      else {
        iVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54));
        if (*(int *)(param_1 + 0x58) - iVar3 <= DAT_0804b80c) {
LAB_0804b820:
          uVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
LAB_0804b870:
          *(undefined4 *)(param_1 + 0x58) = uVar4;
        }
      }
    }
    sVar2 = FUN_0804b980(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      sVar2 = FUN_0804b980(*(undefined4 *)(param_1 + 0x54),
                           *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68) * 0x100);
      if (sVar2 != 0) goto LAB_0804b8c6;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) << 10;
      if (*(int *)(param_1 + 0x5c) < 1) goto LAB_0804b8be;
      uVar4 = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) * -0x400;
      if (*(int *)(param_1 + 0x5c) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
LAB_0804b8be:
        uVar4 = 1;
      }
    }
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
LAB_0804b8c6:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 != -1) && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(uint *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
LAB_0804b8fc:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804b91c);
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0xc);
  return in_lr;
}


