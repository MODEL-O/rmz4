// undefined FUN_080ec840(void)
// entry 0x80ec840


undefined4 FUN_080ec840(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0800249c(8,0x2e0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_080025d8(9);
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xb4) != '\0') {
    FUN_08002624(8);
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


