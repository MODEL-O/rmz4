// undefined FUN_080383a4(void)
// entry 0x80383a4


undefined4 FUN_080383a4(int param_1)

{
  undefined4 in_lr;
  
  if (2 < *(byte *)(param_1 + 0xc)) {
    *(undefined1 *)(param_1 + 0xc) = 2;
  }
  if (2 < *(byte *)(param_1 + 0xd)) {
    *(undefined1 *)(param_1 + 0xd) = 2;
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  return in_lr;
}


