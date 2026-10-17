// undefined FUN_080f541c(void)
// entry 0x80f541c


undefined4 FUN_080f541c(int param_1)

{
  undefined4 in_lr;
  
  if (*(short *)(param_1 + 0xc2) == 0x77) {
    FUN_08002b5c(0x77);
    *(short *)(param_1 + 0xc2) = 0;
  }
  FUN_080e954c(param_1);
  return in_lr;
}


