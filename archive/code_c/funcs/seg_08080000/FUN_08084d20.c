// undefined FUN_08084d20(void)
// entry 0x8084d20


undefined4 FUN_08084d20(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      FUN_0801cff0(param_1);
      if (*(char *)(param_1 + 0x71) != '\x03') {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    FUN_08005784(param_1 + 0x74,DAT_08084d78);
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x10) * 2 + DAT_08084d7c));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


