// undefined FUN_080b9b8c(void)
// entry 0x80b9b8c


undefined4 FUN_080b9b8c(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = FUN_08128bdc((*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0x54)) * 0x100 >> 0x10,
                         (*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x58)) * 0x100 >> 0x10);
    iVar3 = DAT_080b9c7c;
    uVar1 = (uVar1 & 0xffff) >> 8;
    *(int *)(param_1 + 0x5c) = (int)*(short *)((uVar1 + 0x40 & 0xff) * 2 + DAT_080b9c7c);
    *(int *)(param_1 + 0x60) = (int)*(short *)(uVar1 * 2 + iVar3);
    *(undefined1 *)(param_1 + 0xb4) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  pcVar2 = (char *)(param_1 + 0xb4);
  piVar6 = (int *)(param_1 + 0xc0);
  if (*pcVar2 == '\0') {
    iVar4 = iVar4 - *piVar6 >> 8;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar4 < 0x10) {
      piVar5 = (int *)(param_1 + 0xbc);
      iVar3 = iVar3 - *piVar5 >> 8;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 < 0x10) {
        *pcVar2 = '\x01';
        uVar1 = FUN_08128bdc((*piVar6 - *(int *)(param_1 + 0x54)) * 0x100 >> 0x10,
                             (*piVar5 - *(int *)(param_1 + 0x58)) * 0x100 >> 0x10);
        iVar3 = DAT_080b9c7c;
        uVar1 = (uVar1 & 0xffff) >> 8;
        *(int *)(param_1 + 0x5c) = (int)*(short *)((uVar1 + 0x40 & 0xff) * 2 + DAT_080b9c7c);
        *(int *)(param_1 + 0x60) = (int)*(short *)(uVar1 * 2 + iVar3);
        if (*piVar5 < *(int *)(param_1 + 0x58)) {
          *(undefined1 *)(param_1 + 0xf) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0xf) = 1;
        }
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x54) - *piVar6 >> 8;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 < 4) {
    iVar3 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0xbc) >> 8;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 < 4) {
      *pcVar2 = *piVar6 <= *(int *)(param_1 + 0x54);
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xb7) = 0;
    }
  }
  return in_lr;
}


