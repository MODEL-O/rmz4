// undefined FUN_08050dd8(void)
// entry 0x8050dd8


undefined4 FUN_08050dd8(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08050dfc);
    if (*DAT_08050e00 == 6) {
      FUN_08002b10(0xe2);
    }
    else {
      FUN_08002b10(0xe3);
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined1 *)(param_1 + 0x12) = 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(DAT_08050e40 + 0x12);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(byte *)(param_1 + 0xe) = bVar1 & 1;
  }
  return in_lr;
}


