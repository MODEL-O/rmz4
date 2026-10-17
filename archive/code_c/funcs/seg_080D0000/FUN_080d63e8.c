// undefined FUN_080d63e8(void)
// entry 0x80d63e8


undefined4 FUN_080d63e8(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5c) * 0xf5;
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
    iVar2 = DAT_080d6460;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      iVar2 = 0x200;
    }
    sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + iVar2);
    if (sVar1 != 0) {
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_080d621c(*(undefined4 *)(param_1 + 0x28),param_1 + 0x54,1);
    FUN_080d0c88(1,param_1 + 0x54);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d64ac);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  return in_lr;
}


