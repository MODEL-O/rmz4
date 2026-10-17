// undefined FUN_080843f0(void)
// entry 0x80843f0


undefined4 FUN_080843f0(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,0x1c00);
    *(undefined1 *)(param_1 + 0x12) = 0x78;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(undefined1 *)(param_1 + 0xbf) = 1;
  sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0xb00);
  if (sVar2 == 0) {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xd) = 3;
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


