// undefined FUN_080b3b68(void)
// entry 0x80b3b68


undefined4 FUN_080b3b68(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080b3bac);
    FUN_08005784(param_1 + 0x74,DAT_080b3bb0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      bVar1 = *(byte *)(param_1 + 10);
      bVar2 = ~(bVar1 >> 4) & 1;
      if (bVar2 == 0) {
        bVar1 = bVar1 & 0xef;
      }
      else {
        bVar1 = bVar1 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(byte *)(param_1 + 0x4c) = bVar2;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar2 << 4;
      FUN_0801cf00(param_1,DAT_080b3be8);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      FUN_08005784(param_1 + 0x74,DAT_080b3c04);
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


