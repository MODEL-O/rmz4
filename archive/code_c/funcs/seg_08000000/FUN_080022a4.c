// undefined FUN_080022a4(void)
// entry 0x80022a4


void FUN_080022a4(uint *param_1,uint *param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_3;
  iVar4 = 0xff;
  do {
    uVar1 = *param_1;
    iVar3 = param_3[1];
    *param_2 = *param_4 & (iVar2 * (*param_4 & uVar1) >> 5) + iVar3 |
               param_4[1] & (iVar2 * (param_4[1] & uVar1) >> 5) + iVar3 * 0x20 |
               param_4[2] & iVar2 * ((param_4[2] & uVar1) >> 5) + iVar3 * 0x400;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return;
}


