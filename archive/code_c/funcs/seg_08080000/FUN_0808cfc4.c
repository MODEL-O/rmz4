// undefined FUN_0808cfc4(void)
// entry 0x808cfc4


undefined4 FUN_0808cfc4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    iVar2 = FUN_0807f90c(param_1);
    if ((iVar2 != 0) && (*(int *)(param_1 + 0xbc) == 0)) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0808d058));
    FUN_0808daa0(param_1);
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0808d05c));
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808d004);
    uVar3 = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    if ((*(char *)(param_1 + 0x13) == '\0') &&
       (uVar3 = 0, (*(uint *)(param_1 + 0x8c) & 0x10000) != 0)) {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = uVar3;
    }
    FUN_0808d060(param_1);
  }
  return in_lr;
}


