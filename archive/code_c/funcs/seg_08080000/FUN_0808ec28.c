// undefined FUN_0808ec28(void)
// entry 0x808ec28


undefined4 FUN_0808ec28(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  bVar6 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_0808ed0c);
    FUN_0808fad0(param_1,0,0x10,bVar6);
    FUN_0801cf00(param_1,0x3900);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined1 *)(param_1 + 0xbb) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_0808ed14) * 4 + DAT_0808ed10)) * 0x18 + DAT_0808ed18);
  if ((*(char *)(param_1 + 0xbb) != '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
    FUN_0808fc18(param_1);
    *(char *)(param_1 + 0xbb) = '\0';
  }
  FUN_0808faf4(param_1);
  iVar5 = *(int *)(param_1 + 100);
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar3 = FUN_08128fb8(iVar4,-iVar5);
  iVar3 = *(int *)(param_1 + 0x54) + ((iVar4 * 2 + -iVar5 * (-iVar3 + 1)) * -iVar3 >> 1);
  if ((bVar1 & 1) == 0) {
    if (iVar3 <= *(int *)(param_1 + 0xb4) + DAT_0808ed1c) {
      *(undefined1 *)(param_1 + 0xe) = 2;
      *(byte *)(param_1 + 0xf) = bVar6;
      return in_lr;
    }
  }
  else if (*(int *)(param_1 + 0xb4) + 0xc000 <= iVar3) {
    uVar2 = 2;
    goto LAB_0808ed5a;
  }
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    return in_lr;
  }
  if ((*(int *)(param_1 + 0xbc) - iVar3) + 0x4000U < 0x8001) {
    return in_lr;
  }
  uVar2 = 1;
LAB_0808ed5a:
  *(undefined1 *)(param_1 + 0xe) = uVar2;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


