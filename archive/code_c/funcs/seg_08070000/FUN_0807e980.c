// undefined FUN_0807e980(void)
// entry 0x807e980


int FUN_0807e980(int param_1,uint param_2)

{
  return *(int *)(param_1 + 0xb4) + *(int *)(((param_2 & 0xff) >> 1) * 4 + DAT_0807e9ac) + 0x7800 +
         ((param_2 & 1) * 2 + -1) * 0xf00;
}


