// undefined FUN_0808a054(void)
// entry 0x808a054


undefined4 FUN_0808a054(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    iVar2 = FUN_0807f90c(param_1);
    if ((iVar2 != 0) && (*(int *)(param_1 + 0xbc) == 0)) {
      *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0xc0);
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0808a0f0));
    FUN_0808b138(param_1);
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0808a0f4));
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808a098);
    uVar3 = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    if ((*(char *)(param_1 + 0xc3) == '\0') &&
       (uVar3 = 0, (*(uint *)(param_1 + 0x8c) & 0x10000) != 0)) {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = uVar3;
    }
    FUN_0808a0f8(param_1);
  }
  return in_lr;
}


