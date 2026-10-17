// undefined FUN_08068394(void)
// entry 0x8068394


undefined4 FUN_08068394(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080683dc);
    *(undefined4 *)(param_1 + 0x60) = DAT_080683e0;
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
  }
  else if (6 < *(byte *)(*(int *)(param_1 + 0xd4) + 0xd)) {
    *(undefined1 *)(param_1 + 0xd) = 0x20;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


