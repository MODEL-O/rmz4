// undefined FUN_08091908(void)
// entry 0x8091908


undefined4 FUN_08091908(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cc9c(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    FUN_0801cf00(param_1,0x3c00);
    FUN_08005784(param_1 + 0x74,DAT_08091944);
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
    FUN_0801cf00(param_1,DAT_08091984);
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


