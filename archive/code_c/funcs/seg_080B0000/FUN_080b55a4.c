// undefined FUN_080b55a4(void)
// entry 0x80b55a4


undefined4 FUN_080b55a4(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  }
  iVar2 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0xc0));
  if (iVar2 != 0) {
    FUN_08005784(param_1 + 0x74,DAT_080b55f4);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


