// undefined FUN_080893f8(void)
// entry 0x80893f8


undefined4 FUN_080893f8(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08005784(param_1 + 0x74,
                 (uint)*(byte *)((uint)*(byte *)(param_1 + 0xc0) + DAT_08089448) * 0x18 +
                 DAT_0808944c);
    FUN_0801cf00(param_1,*(byte *)(param_1 + 0xc0) | 0x1f00);
    bVar1 = *(byte *)(param_1 + 10);
    bVar2 = bVar1 >> 4 & 1;
    if ((bVar1 >> 4 & 1) == 0) {
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar2 << 4;
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}


