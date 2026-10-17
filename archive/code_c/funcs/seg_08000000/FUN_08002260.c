// undefined FUN_08002260(void)
// entry 0x8002260


undefined4 FUN_08002260(uint *param_1,uint *param_2,int param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0xff;
  do {
    uVar1 = *param_1;
    *param_2 = *param_4 & param_3 * (*param_4 & uVar1) >> 5 |
               param_4[1] & param_3 * (param_4[1] & uVar1) >> 5 |
               param_4[2] & param_3 * ((param_4[2] & uVar1) >> 5);
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return in_lr;
}


