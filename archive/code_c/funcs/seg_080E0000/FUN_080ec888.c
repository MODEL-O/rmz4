// undefined FUN_080ec888(void)
// entry 0x80ec888


undefined4 FUN_080ec888(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0800249c(9,0x2e0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar1 = FUN_080025d8(9);
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0xb4) == '\0') && ((uVar1 & 0xff) - 3 < 2)) {
    FUN_08002624(9);
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


