// undefined FUN_080a2154(void)
// entry 0x80a2154


undefined4 FUN_080a2154(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
    if (sVar1 != 0) {
      uVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  iVar3 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0xc0));
  if (iVar3 != 0) {
    FUN_08005784(param_1 + 0x74,DAT_080a21b0);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


