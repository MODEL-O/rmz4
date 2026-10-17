// undefined FUN_080b15bc(void)
// entry 0x80b15bc


undefined4 FUN_080b15bc(int param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
  iVar1 = DAT_080b1644;
  iVar4 = *(int *)(param_1 + 0xbc);
  if (iVar4 <= DAT_080b1644) {
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    iVar4 = iVar4 + iVar3;
    *(int *)(param_1 + 0xbc) = iVar4;
    if (iVar1 < iVar4) {
      iVar3 = *(int *)(param_1 + 0xb8) * -0x100;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0xb8) = iVar3 >> 8;
    }
  }
  sVar2 = FUN_08007c7c(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0xb4),
                       *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xb8));
  if (sVar2 == 0) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    iVar3 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
    *(char *)(param_1 + 0xc1) = *(char *)(param_1 + 0xc1) + '\x01';
  }
  return in_lr;
}


