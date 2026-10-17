// undefined FUN_08051914(void)
// entry 0x8051914


undefined4 FUN_08051914(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08051980);
    FUN_0801cf00(param_1,DAT_08051984);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x60) + 0x60;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x400 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x400;
  }
  sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 != 0) {
    uVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    FUN_08002b10(0xf0);
    *(undefined1 *)(param_1 + 0xd) = 0xc;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


