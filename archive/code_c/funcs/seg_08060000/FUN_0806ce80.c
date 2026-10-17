// undefined FUN_0806ce80(void)
// entry 0x806ce80


undefined4 FUN_0806ce80(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806ced4);
    FUN_08002b10(0xce);
    FUN_080ca4c4(param_1,1,1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if (*(int *)(param_1 + 0xb8) < iVar1) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    *(undefined1 *)(param_1 + 0xd) = 0x21;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


