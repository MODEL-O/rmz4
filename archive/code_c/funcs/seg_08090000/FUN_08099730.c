// undefined FUN_08099730(void)
// entry 0x8099730


undefined4 FUN_08099730(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809975c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_08099808(param_1);
    return in_lr;
  }
  piVar1 = (int *)(param_1 + 0xc0);
  if (*piVar1 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      iVar2 = FUN_0802adac(0,param_1,DAT_080997d4);
      *piVar1 = iVar2;
      if (iVar2 == 0) goto LAB_080997ea;
      FUN_0801cf00(param_1,0x6900);
      FUN_08005784(param_1 + 0x74,DAT_080997d8);
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    if (*piVar1 == 0) goto LAB_080997ea;
  }
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if (*(int *)(param_1 + 0xb8) < iVar2) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  iVar2 = FUN_0802b3e4(*piVar1);
  if (iVar2 == 0) {
    FUN_0801cff0(param_1);
    return in_lr;
  }
  FUN_08005784(param_1 + 0x74,DAT_08099800);
  *piVar1 = 0;
LAB_080997ea:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08099804));
  return in_lr;
}


