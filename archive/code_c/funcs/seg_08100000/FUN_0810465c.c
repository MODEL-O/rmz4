// undefined FUN_0810465c(void)
// entry 0x810465c


undefined4 FUN_0810465c(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x60) = DAT_08104690;
  FUN_0801cf00(param_1,0xdb00);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  return in_lr;
}


