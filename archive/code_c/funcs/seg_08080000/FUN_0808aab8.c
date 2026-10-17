// undefined FUN_0808aab8(void)
// entry 0x808aab8


undefined4 FUN_0808aab8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08005784(param_1 + 0x74,(uint)*(byte *)(param_1 + 0xc0) * 0x18 + DAT_0808ab8c);
    FUN_0801cf00(param_1,*(byte *)(param_1 + 0xc0) | 0x2000);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_0808ab54;
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xc0) == '\0') {
    iVar1 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar1;
    if (0x700 < iVar1) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    iVar1 = DAT_0808ab94;
    iVar2 = FUN_08007db4(*(int *)(param_1 + 0x54) + DAT_0808ab90,iVar2 + DAT_0808ab94);
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
    }
    iVar1 = FUN_08007db4(*(int *)(param_1 + 0x54) + 0x700,*(int *)(param_1 + 0x58) + iVar1);
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
    }
  }
LAB_0808ab54:
  iVar1 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0xbc));
  if (iVar1 != 0) {
    FUN_08005784(param_1 + 0x74,(uint)*(byte *)(param_1 + 0xc0) * 0x18 + DAT_0808ab8c);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xc0);
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


