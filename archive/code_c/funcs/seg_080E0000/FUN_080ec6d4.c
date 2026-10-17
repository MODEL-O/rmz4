// undefined FUN_080ec6d4(void)
// entry 0x80ec6d4


undefined4 FUN_080ec6d4(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0800249c(7,0x2c0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar1 = FUN_080025d8(7);
  FUN_0801cff0(param_1);
  if ((uVar1 & 0xff) - 3 < 2) {
    FUN_08002624(7);
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


