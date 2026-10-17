// undefined FUN_080d9078(void)
// entry 0x80d9078


undefined4 FUN_080d9078(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5c) * 0xe1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x13) != '\0') {
    iVar2 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  FUN_0801cff0(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  if (*(char *)(param_1 + 0x13) == '\0') {
    iVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar2 < *(int *)(param_1 + 0x58)) {
      *(int *)(param_1 + 0x58) = iVar2;
    }
  }
  else {
    iVar2 = DAT_080d90f4;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      iVar2 = 0x200;
    }
    sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar2);
    if (sVar1 != 0) {
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_080d0c88(2,param_1 + 0x54);
    uVar4 = DAT_080d9194 * *DAT_080d9190 + DAT_080d9198;
    *DAT_080d9190 = uVar4 & 0x7fffffff;
    uVar4 = (uVar4 & 0x7fffffff) >> 0x10 & 3;
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    FUN_080d8ef8(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,DAT_080d919c,uVar4,0);
    FUN_080d8ef8(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,DAT_080d91a0,uVar4,0);
    FUN_080d8ef8(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,DAT_080d91a4,uVar4,0);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d91a8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  return in_lr;
}


