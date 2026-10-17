// undefined FUN_080b406c(void)
// entry 0x80b406c


undefined4 FUN_080b406c(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) ||
      (iVar2 = *(ushort *)(param_1 + 0xbe) - 1, *(ushort *)(param_1 + 0xbe) = (ushort)iVar2,
      iVar2 * 0x10000 - DAT_080b40b8 == 0)) || (*(char *)(param_1 + 0xb8) != '\0')) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b40bc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080b4184(param_1);
    return in_lr;
  }
  piVar3 = (int *)(param_1 + 0xc0);
  if (*piVar3 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      iVar2 = FUN_0802adac(0,param_1,DAT_080b4150);
      *piVar3 = iVar2;
      if (iVar2 == 0) goto LAB_080b4166;
      FUN_08005784(param_1 + 0x74,DAT_080b4154);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    if (*piVar3 == 0) goto LAB_080b4166;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  iVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54));
  if (iVar2 < *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = iVar2;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  iVar2 = FUN_0802b3e4(*piVar3);
  if (iVar2 == 0) {
    sVar1 = CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
    FUN_0801cfc8(param_1,sVar1,(short)*(char *)(param_1 + 0x71),sVar1 + 1);
    FUN_0801cff0(param_1);
    return in_lr;
  }
  FUN_08005784(param_1 + 0x74,DAT_080b417c);
  *piVar3 = 0;
LAB_080b4166:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080b4180));
  return in_lr;
}


