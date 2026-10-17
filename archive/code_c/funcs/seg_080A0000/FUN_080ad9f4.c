// undefined FUN_080ad9f4(void)
// entry 0x80ad9f4


undefined4 FUN_080ad9f4(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  piVar1 = DAT_080ada24;
  iVar4 = *DAT_080ada24;
  if (*(int *)(iVar4 + 0xec) == 0) {
    if (*(char *)(param_1 + 0xb9) == '\x01') {
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0xffffffb0;
      *(char *)(param_1 + 0xb9) = '\0';
    }
  }
  else {
    iVar2 = *(int *)(iVar4 + 0x54) - *(int *)(param_1 + 0x54) >> 8;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 0x30) {
      iVar4 = *(int *)(iVar4 + 0x58) - (*(int *)(param_1 + 0x58) + 0xf00) >> 8;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 < 0x30) {
        uVar3 = FUN_080adb98(param_1);
        iVar2 = DAT_080adab0;
        iVar4 = (int)*(short *)((uVar3 + 0x40 & 0xff) * 2 + DAT_080adab0);
        *(int *)(param_1 + 0x5c) = iVar4;
        iVar2 = (int)*(short *)((uVar3 & 0xff) * 2 + iVar2);
        *(int *)(param_1 + 0x60) = iVar2;
        if (*(int *)(*piVar1 + 0xec) * (*(int *)(param_1 + 0xb4) + -2) < 0) {
          iVar4 = iVar4 * -0x100;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 0xff;
          }
          *(int *)(param_1 + 0x5c) = iVar4 >> 8;
          iVar2 = iVar2 * -0x100;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 0xff;
          }
          *(int *)(param_1 + 0x60) = iVar2 >> 8;
        }
        *(undefined1 *)(param_1 + 0xb9) = 1;
        return in_lr;
      }
    }
    if (*(char *)(param_1 + 0xb9) == '\x01') {
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0xffffffb0;
    }
    *(char *)(param_1 + 0xb9) = '\0';
  }
  return in_lr;
}


