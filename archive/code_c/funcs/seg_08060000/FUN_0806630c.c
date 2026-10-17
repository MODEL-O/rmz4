// undefined FUN_0806630c(void)
// entry 0x806630c


void FUN_0806630c(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *DAT_08066350;
  iVar3 = *(int *)(iVar2 + 0x58) + DAT_08066354;
  iVar1 = *(int *)(param_3 * 8 + DAT_08066358 + 4);
  *param_1 = *(int *)(iVar2 + 0x54) +
             *(int *)(param_3 * 8 + DAT_08066358) * ((*(byte *)(iVar2 + 10) >> 4 & 1) * 2 + -1);
  param_1[1] = iVar3 + iVar1;
  return;
}


