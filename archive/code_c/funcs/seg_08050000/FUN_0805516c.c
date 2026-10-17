// undefined FUN_0805516c(void)
// entry 0x805516c


void FUN_0805516c(int param_1,int param_2,uint param_3)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(uint *)(param_1 + 0x68) = ((param_3 & 0xff) * 2 + -1) * param_2;
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xf7;
  return;
}


