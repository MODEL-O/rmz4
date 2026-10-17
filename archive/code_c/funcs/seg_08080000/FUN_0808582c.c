// undefined FUN_0808582c(void)
// entry 0x808582c


undefined4 FUN_0808582c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x3c;
    FUN_08005784(param_1 + 0x74,DAT_08085868);
    FUN_0801cf00(param_1,DAT_0808586c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar2 = *(int *)(*DAT_08085888 + 0x54) - iVar3;
    if (iVar2 < 0) {
      if (DAT_080858c8 < iVar3 - *(int *)(*DAT_08085888 + 0x54)) goto LAB_080858a0;
    }
    else if (DAT_0808588c < iVar2) goto LAB_080858a0;
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    iVar3 = *(int *)(param_1 + 0x54);
  }
LAB_080858a0:
  uVar1 = FUN_08008aa4(iVar3,*(int *)(param_1 + 0x58) + 0x400);
  FUN_08085418(param_1,uVar1,0x800);
  FUN_0801cff0(param_1);
  return in_lr;
}


