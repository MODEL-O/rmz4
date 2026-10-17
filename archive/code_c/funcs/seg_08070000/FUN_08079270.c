// undefined FUN_08079270(void)
// entry 0x8079270


undefined4 FUN_08079270(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = (byte)*(ushort *)(DAT_08079290 + 8) & 8;
  if ((*(ushort *)(DAT_08079290 + 8) & 8) == 0) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0xe) = bVar1;
    *(byte *)(param_1 + 0xf) = bVar1;
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


