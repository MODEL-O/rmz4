// undefined FUN_080b8898(void)
// entry 0x80b8898


undefined4 FUN_080b8898(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x194);
    FUN_08005784(param_1 + 0x74,DAT_080b8918);
    FUN_0801cf00(param_1,DAT_080b891c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x68) = 0x2000;
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  iVar1 = (int)*(short *)((0x10 - *(byte *)(param_1 + 0x12) & 0x3f) * 8 + DAT_080b8920) *
          *(int *)(param_1 + 0x68);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x60) + (iVar1 >> 8);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


