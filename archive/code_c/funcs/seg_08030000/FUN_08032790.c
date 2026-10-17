// undefined FUN_08032790(void)
// entry 0x8032790


undefined4 FUN_08032790(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x170) = 1;
  FUN_08002b10(0xb);
  FUN_080d19a8(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_080327bc,1);
  *(undefined1 *)(param_1 + 0xf) = 3;
  return in_lr;
}


