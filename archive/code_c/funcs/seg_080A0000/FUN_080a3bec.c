// undefined FUN_080a3bec(void)
// entry 0x80a3bec


undefined4 FUN_080a3bec(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a3c18);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080a3c94(param_1);
    return in_lr;
  }
  piVar1 = (int *)(param_1 + 0xc0);
  if (*piVar1 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      iVar2 = FUN_0802adac(0,param_1,DAT_080a3c84);
      *piVar1 = iVar2;
      if (iVar2 == 0) goto LAB_080a3c68;
      FUN_08005784(param_1 + 0x74,DAT_080a3c88);
    }
    if (*piVar1 == 0) goto LAB_080a3c68;
  }
  iVar2 = FUN_0802b3e4(*piVar1);
  if (iVar2 != 0) {
    FUN_08005784(param_1 + 0x74,DAT_080a3c8c);
    *piVar1 = 0;
  }
LAB_080a3c68:
  FUN_0801cff0(param_1);
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080a3c90));
  return in_lr;
}


