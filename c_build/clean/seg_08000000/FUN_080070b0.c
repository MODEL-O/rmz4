// undefined FUN_080070b0(void)
// entry 0x80070b0


void FUN_080070b0(int param_1,int param_2,int *param_3)

{
  *param_3 = (param_1 >> 0xc) * 0x1000 - param_1;
  param_3[1] = (param_2 >> 0xc) * 0x1000 - param_2;
  return;
}


