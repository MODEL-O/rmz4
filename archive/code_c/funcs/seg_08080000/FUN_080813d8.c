// undefined FUN_080813d8(void)
// entry 0x80813d8


undefined4 FUN_080813d8(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    FUN_08006984(0x36);
  }
  uVar3 = *(uint *)(param_1 + 0x8c);
  if ((uVar3 & 0x200) != 0) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08081420);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    if (*(char *)(param_1 + 0xb6) == '\0') {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_08081aac(param_1);
    return in_lr;
  }
  if ((uVar3 & 1) == 0) {
LAB_08081454:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_080814d8;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    iVar2 = FUN_0802adac(0,param_1,DAT_080814bc);
    *(int *)(param_1 + 0x2c) = iVar2;
    if (iVar2 == 0) goto LAB_080814d8;
    *(undefined1 *)(param_1 + 0xb5) = 1;
    goto LAB_08081454;
  }
  iVar2 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0x2c));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0xb5) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0801d1f4(param_1);
    if (*(char *)(param_1 + 0xd) != '\0') {
      FUN_08005784(param_1 + 0x74,
                   *(undefined4 *)
                    (*(char *)(param_1 + 0x71) * 4 +
                    *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 +
                             ((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                             *(undefined1 *)(param_1 + 0x70)) + DAT_080814c4) * 8 +
                            DAT_080814c0)));
      return in_lr;
    }
    FUN_08005784(param_1 + 0x74,DAT_080814d4);
    return in_lr;
  }
LAB_080814d8:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080814f0));
  return in_lr;
}


