// undefined FUN_0808a64c(void)
// entry 0x808a64c


undefined4 FUN_0808a64c(int param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0808a710);
    FUN_08005784(param_1 + 0x74,(uint)*(byte *)(DAT_0808a714 + 1) * 0x18 + DAT_0808a718);
    uVar3 = DAT_0808a71c;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0x100;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0xb5) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  FUN_0808b210(param_1,0xf);
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  FUN_0808b1dc(param_1);
  if (*(char *)(param_1 + 0xc1) == '\0') {
    iVar4 = DAT_0808a75c;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar4 = 0x1000;
    }
    sVar1 = FUN_08007c7c(*(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) + 0x800);
    if (sVar1 != 0) {
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  else if (0x2000 < *(int *)(DAT_0808a720 + 0x38) - (*(int *)(param_1 + 0x54) + 0x7800)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808a724);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


