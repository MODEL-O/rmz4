// undefined FUN_0808b368(void)
// entry 0x808b368


undefined4 FUN_0808b368(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((*puVar4 & 1) != 0) {
    FUN_08006984(0xc);
  }
  if ((*puVar4 & 0x200) != 0) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808b3b4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    if (*(char *)(param_1 + 0xbc) == '\0') {
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
    FUN_0808b844(param_1);
    return in_lr;
  }
  if ((*puVar4 & 1) == 0) {
LAB_0808b3f2:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0808b460;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar2 = FUN_0802adac(0,param_1,DAT_0808b450);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    goto LAB_0808b3f2;
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
                                                  DAT_0808b458) * 4 + DAT_0808b454)) + 1) * 0x18 +
                 DAT_0808b45c);
    return in_lr;
  }
LAB_0808b460:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0808b488));
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0808b48c));
  return in_lr;
}


