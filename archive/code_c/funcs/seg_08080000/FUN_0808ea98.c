// undefined FUN_0808ea98(void)
// entry 0x808ea98


undefined4 FUN_0808ea98(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((*puVar4 & 1) != 0) {
    FUN_08006984(0x11);
  }
  if ((*puVar4 & 0x200) != 0) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808eae4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    if (*(char *)(param_1 + 0xb9) == '\0') {
      if ((*puVar4 & 0x10000) == 0) {
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 1;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    FUN_0808f750(param_1);
    return in_lr;
  }
  if ((*puVar4 & 1) == 0) {
LAB_0808eb38:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0808ebf4;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) {
      FUN_0808fe78(param_1);
    }
    else {
      uVar2 = FUN_0802adac(0,param_1,DAT_0808ebe0);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
    }
    goto LAB_0808eb38;
  }
  iVar3 = *(int *)(param_1 + 0xc0);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
    *(undefined4 *)(iVar3 + 0x8c) = 0;
    *(undefined4 *)(iVar3 + 0x90) = 0;
    *(undefined1 *)(iVar3 + 0x94) = 0;
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(iVar3 + 9) * 4 + DAT_0808ebe4);
    *(undefined4 *)(iVar3 + 0xc) = 3;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
    *(int *)(param_1 + 0xc0) = 0;
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  iVar3 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0x2c));
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0801d1f4(param_1);
    FUN_08005784(param_1 + 0x74,
                 (uint)*(byte *)(*(int *)(*(char *)(param_1 + 0x71) * 4 +
                                         *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                                  *(undefined1 *)(param_1 + 0x70)) +
                                                  DAT_0808ebec) * 4 + DAT_0808ebe8)) + 1) * 0x18 +
                 DAT_0808ebf0);
    return in_lr;
  }
LAB_0808ebf4:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0808ec0c));
  return in_lr;
}


