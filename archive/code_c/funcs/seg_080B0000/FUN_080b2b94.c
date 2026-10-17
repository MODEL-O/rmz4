// undefined FUN_080b2b94(void)
// entry 0x80b2b94


undefined8 FUN_080b2b94(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  int local_2c [4];
  
  local_2c[2] = *DAT_080b2c0c;
  local_2c[3] = DAT_080b2c0c[1];
  local_2c[1] = DAT_080b2c10[1];
  local_2c[0] = *DAT_080b2c10;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if (sVar1 != 0) {
      uVar5 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar5;
    }
    FUN_080b2e08(param_1);
    sVar1 = FUN_08007c7c(*(int *)(param_1 + 0x54) +
                         *(int *)((int)local_2c +
                                 ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4U)) * 0x100,
                         *(int *)(param_1 + 0x58) + 0x800);
    if (sVar1 == 0) {
      FUN_080b2b38(param_1);
      uVar5 = 1;
      goto LAB_080b2cc4;
    }
  }
  else {
    iVar7 = local_2c[2] * 0x100;
    sVar1 = FUN_08007c7c(*(int *)(param_1 + 0x54) + iVar7,*(undefined4 *)(param_1 + 0x58));
    iVar6 = local_2c[3] * 0x100;
    sVar2 = FUN_08007c7c(*(int *)(param_1 + 0x54) + iVar6,*(undefined4 *)(param_1 + 0x58));
    if ((sVar1 == 0) && (sVar2 == 0)) {
      iVar3 = FUN_08008534(*(int *)(param_1 + 0x54) + iVar7,*(undefined4 *)(param_1 + 0x58));
      iVar4 = FUN_08008534(*(int *)(param_1 + 0x54) + iVar6,*(undefined4 *)(param_1 + 0x58));
      if (iVar3 < iVar4) {
        *(int *)(param_1 + 0x58) = iVar3;
      }
      else {
        *(int *)(param_1 + 0x58) = iVar4;
      }
    }
    if (sVar1 == 1) {
      iVar7 = *(int *)(param_1 + 0x54) + iVar7;
LAB_080b2c2a:
      uVar5 = FUN_08008534(iVar7,*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar5;
    }
    else if (sVar2 == 1) {
      iVar7 = *(int *)(param_1 + 0x54) + iVar6;
      goto LAB_080b2c2a;
    }
    sVar1 = FUN_08007c7c(*(int *)(param_1 + 0x54) +
                         *(int *)((int)local_2c +
                                 ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4U)) * 0x100,
                         *(int *)(param_1 + 0x58) + 0x800);
    if (sVar1 == 0) {
      uVar5 = 1;
      *(undefined1 *)(param_1 + 0xb7) = 1;
      goto LAB_080b2cc4;
    }
  }
  uVar5 = 0;
LAB_080b2cc4:
  return CONCAT44(in_lr,uVar5);
}


