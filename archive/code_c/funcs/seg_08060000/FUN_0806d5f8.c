// undefined FUN_0806d5f8(void)
// entry 0x806d5f8


undefined4 FUN_0806d5f8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  bVar1 = *(byte *)(DAT_0806d620 + 0x12);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0xe) = bVar1 & 1;
    *(undefined1 *)(param_1 + 0x12) = 0x10;
  }
  return in_lr;
}


