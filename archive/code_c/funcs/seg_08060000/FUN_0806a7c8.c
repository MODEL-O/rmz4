// undefined FUN_0806a7c8(void)
// entry 0x806a7c8


int FUN_0806a7c8(int param_1,uint param_2)

{
  int local_10 [4];
  
  local_10[0] = *(int *)(param_1 + 0xd8);
  local_10[1] = *(int *)(param_1 + 0xd8) + DAT_0806a7f4;
  local_10[2] = *(int *)(param_1 + 0xdc);
  local_10[3] = *(int *)(param_1 + 0xdc) + DAT_0806a7f8;
  return local_10[param_2 & 0xff];
}


