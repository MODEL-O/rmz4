// undefined FUN_080673d0(void)
// entry 0x80673d0


undefined4 FUN_080673d0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar1 = FUN_0809c494(param_1,0,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(int *)(param_1 + 0x2c) = iVar1;
    if (iVar1 == 0) {
      return in_lr;
    }
    FUN_08005784(param_1 + 0x74,DAT_0806742c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(*(int *)(param_1 + 0x2c) + 0xd) != '\0') {
    FUN_08002b5c(0x61);
    *(undefined2 *)(param_1 + 0xe0) = 0;
    *(undefined1 *)(param_1 + 0xd) = 8;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


