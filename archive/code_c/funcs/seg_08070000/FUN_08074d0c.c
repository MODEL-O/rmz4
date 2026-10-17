// undefined FUN_08074d0c(void)
// entry 0x8074d0c


undefined4 FUN_08074d0c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08074d6c);
    *(undefined2 *)(param_1 + 0xdc) = 8;
    *(undefined1 *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar1 = *(ushort *)(param_1 + 0xdc) - 1;
  *(short *)(param_1 + 0xdc) = (short)iVar1;
  if (iVar1 * 0x10000 - DAT_08074d70 == 0) {
    FUN_080cb4f4(param_1,1,*(undefined1 *)(param_1 + 0x12));
    FUN_08002b10(0x18c);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x0e';
    *(undefined2 *)(param_1 + 0xdc) = 8;
  }
  return in_lr;
}


