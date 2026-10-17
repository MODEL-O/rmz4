// undefined FUN_080022f4(void)
// entry 0x80022f4


void FUN_080022f4(uint *param_1,uint *param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0xff;
  do {
    uVar1 = *param_1;
    *param_2 = *param_4 & (*param_3 * (*param_4 & uVar1) >> 5) + param_3[3] |
               param_4[1] & (param_3[1] * (param_4[1] & uVar1) >> 5) + param_3[4] |
               param_4[2] & param_3[2] * ((param_4[2] & uVar1) >> 5) + param_3[5];
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return;
}


