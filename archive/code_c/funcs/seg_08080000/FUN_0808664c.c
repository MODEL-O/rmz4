// undefined FUN_0808664c(void)
// entry 0x808664c


undefined4 FUN_0808664c(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080866ac);
    FUN_08086a14(param_1,0);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_08086a48(param_1);
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = FUN_08007c7c(uVar4,iVar3);
  if ((sVar1 == 0) || (uVar2 = FUN_08007c7c(uVar4,iVar3), (uVar2 & 0xf) == 0xf)) {
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(int *)(param_1 + 0x58) = iVar3;
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xb7) = 1;
  }
  return in_lr;
}


