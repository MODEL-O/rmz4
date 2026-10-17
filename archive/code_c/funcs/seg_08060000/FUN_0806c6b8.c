// undefined FUN_0806c6b8(void)
// entry 0x806c6b8


undefined4 FUN_0806c6b8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806c730);
    FUN_08005784(param_1 + 0x74,DAT_0806c734);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\0' < *(char *)(param_1 + 0x71)) {
      *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      if (bVar1 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(undefined1 *)(param_1 + 0x12) = 8;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (((*(char *)(param_1 + 0xf) == '\x01') && (*(char *)(param_1 + 0x73) == '\x03')) &&
          (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1))
  {
    *(undefined1 *)(param_1 + 0xd) = 0x19;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


