// undefined FUN_08090780(void)
// entry 0x8090780


undefined4 FUN_08090780(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (bVar1 = *(byte *)(param_1 + 0xd), 2 < bVar1)) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080907b8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_0809086c(param_1);
    return in_lr;
  }
  if (bVar1 == 0) {
    iVar5 = *(int *)(*DAT_080907fc + 0x58);
    if (iVar5 <= *(int *)(param_1 + 0x58)) {
      return in_lr;
    }
    if (0xa000 < (*(int *)(*DAT_080907fc + 0x54) - *(int *)(param_1 + 0x54)) + 0x5000U) {
      return in_lr;
    }
    if (0xf000 < (iVar5 - *(int *)(param_1 + 0x58)) + 0x7800U) {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    return in_lr;
  }
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 >> 1 & 1) == 0) {
      iVar5 = *(int *)(param_1 + 0xb4) + 0x100;
    }
    else {
      iVar5 = *(int *)(param_1 + 0xb4);
    }
    *(int *)(param_1 + 0x54) = iVar5;
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x60) = 0;
    cVar2 = '\x01';
  }
  else {
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar5;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar5 + 0x1000);
    if (sVar3 == 0) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xd);
  }
  *(char *)(param_1 + 0xd) = cVar2 + '\x01';
  return in_lr;
}


