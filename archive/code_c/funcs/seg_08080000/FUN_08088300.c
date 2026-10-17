// undefined FUN_08088300(void)
// entry 0x8088300


undefined4 FUN_08088300(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08088330);
    FUN_0801cf00(param_1,DAT_08088334);
    bVar1 = *(byte *)(param_1 + 10);
    bVar3 = ~(bVar1 >> 4) & 1;
    if (bVar3 == 0) {
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


