// undefined FUN_0805504c(void)
// entry 0x805504c


void FUN_0805504c(int param_1,int param_2,uint param_3)

{
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(uint *)(param_1 + 100) = ((param_3 & 0xff) * 2 + -1) * param_2;
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xfb;
  return;
}


