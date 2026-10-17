// undefined FUN_0806cd90(void)
// entry 0x806cd90


undefined4 FUN_0806cd90(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806ce04);
    *(undefined4 *)(param_1 + 0x60) = DAT_0806ce08;
    *(undefined1 *)(param_1 + 0x12) = 6;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ((*(char *)(param_1 + 0x73) == '\x03') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
      FUN_0801cf00(param_1,DAT_0806ce0c);
      FUN_0801cff0(param_1);
      FUN_08005784(param_1 + 0x74,DAT_0806ce10);
      FUN_080ca4c4(param_1,1,0);
      FUN_08002b10(0xce);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (DAT_0806ce34 < iVar2) {
      *(undefined1 *)(param_1 + 0xd) = 0x1f;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


