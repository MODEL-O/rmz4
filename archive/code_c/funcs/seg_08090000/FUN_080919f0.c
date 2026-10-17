// undefined FUN_080919f0(void)
// entry 0x80919f0


undefined4 FUN_080919f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08091a5c);
    FUN_08005784(param_1 + 0x74,DAT_08091a60);
    if (*(int *)(param_1 + 0x2c) == 0) {
      uVar1 = FUN_08090e0c(param_1);
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (((*(uint *)(param_1 + 0x8c) & 4) != 0) && (*(short *)(iVar2 + 0xd2) == 0)) {
    FUN_08005784(param_1 + 0x74,DAT_08091a64);
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xc1) = 1;
  }
  return in_lr;
}


