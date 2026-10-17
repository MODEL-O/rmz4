// undefined FUN_081129d4(void)
// entry 0x81129d4


void FUN_081129d4(uint *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  param_2 = param_2 >> 1;
  do {
    uVar1 = *param_1;
    uVar1 = (uVar1 & param_3) + (uVar1 >> 10 & param_3) + (uVar1 >> 5 & param_3);
    *param_1 = CONCAT22(*(undefined2 *)(param_4 + (uVar1 >> 0x10 & 0x7f) * 2),
                        *(undefined2 *)(param_4 + (uVar1 & 0x7f) * 2));
    param_1 = param_1 + 1;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}


