// undefined FUN_0808ed64(void)
// entry 0x808ed64


undefined4 FUN_0808ed64(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0xb8) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_0808ee1c) * 4 + DAT_0808ee18)) * 0x18 + DAT_0808ee20);
  if ((*(char *)(param_1 + 0xbb) != '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
    FUN_0808fc18(param_1);
    *(char *)(param_1 + 0xbb) = '\0';
  }
  iVar2 = FUN_0808faf4(param_1);
  iVar3 = FUN_0801fb14(DAT_0808ee24,param_1 + 0x54);
  if ((iVar3 == 0) && (uVar4 != *(int *)(param_1 + 0x54) < *(int *)(*DAT_0808ee28 + 0x54))) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else if ((iVar2 == 0) && (*(char *)(param_1 + 0x73) == '\x03')) {
    iVar2 = (uVar4 * 2 + -1) * 0x2000;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = iVar2 + DAT_0808eeac;
    }
    else {
      iVar2 = iVar2 + 0x400;
    }
    if ((*(int *)(*DAT_0808ee6c + 0x54) - (*(int *)(param_1 + 0x54) + iVar2)) + 0x2000U < 0x4001) {
      if ((*(int *)(*DAT_0808ee6c + 0x58) - *(int *)(param_1 + 0x58)) + 0x3200U < 0x8001) {
        if (*(int *)(*DAT_0808ee6c + 0x58) + DAT_0808eeb0 < *(int *)(param_1 + 0x58)) {
          uVar1 = 2;
        }
        else {
          uVar1 = 3;
        }
        *(undefined1 *)(param_1 + 0xd) = uVar1;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
        return in_lr;
      }
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


