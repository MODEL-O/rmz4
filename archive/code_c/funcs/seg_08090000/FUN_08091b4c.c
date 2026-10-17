// undefined FUN_08091b4c(void)
// entry 0x8091b4c


undefined4 FUN_08091b4c(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cc9c(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    FUN_08005784(param_1 + 0x74,DAT_08091b88);
    if (*(char *)(param_1 + 0xbe) == '\x01') {
      FUN_0801cf00(param_1,0x3c00);
    }
    else {
      FUN_0801cf00(param_1,DAT_08091ba0);
    }
    if (*(char *)(*(int *)(param_1 + 0x28) + 0x11) == '\0') {
      uVar1 = 0xf0;
    }
    else {
      uVar1 = 0xa0;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0x12) == ' ') {
    if (*(char *)(param_1 + 0xbe) == '\x01') {
      FUN_0801cf00(param_1,DAT_08091bcc);
    }
    else {
      FUN_0801cf00(param_1,DAT_08091bfc);
    }
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 7;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


