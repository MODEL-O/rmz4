// undefined FUN_0806cae4(void)
// entry 0x806cae4


undefined4 FUN_0806cae4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806cb38);
    FUN_08005784(param_1 + 0x74,DAT_0806cb3c);
    iVar2 = *(int *)(param_1 + 0x5c);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    *(int *)(param_1 + 100) = iVar2 >> 3;
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
  }
  else if ((*(char *)(param_1 + 0xf) == '\x01') && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


