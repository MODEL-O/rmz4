// undefined FUN_080ec684(void)
// entry 0x80ec684


undefined4 FUN_080ec684(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0800249c(6,0x2c0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar1 = FUN_080025d8(6);
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0xb4) == '\0') && ((uVar1 & 0xff) - 3 < 2)) {
    FUN_08002624(6);
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


