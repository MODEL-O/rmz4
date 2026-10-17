// undefined FUN_080ed2d8(void)
// entry 0x80ed2d8


undefined4 FUN_080ed2d8(int param_1)

{
  undefined4 in_lr;
  
  if (*(short *)(param_1 + 0xc0) != 0) {
    FUN_08002b5c(0x77);
    *(short *)(param_1 + 0xc0) = 0;
  }
  FUN_080e954c(param_1);
  return in_lr;
}


