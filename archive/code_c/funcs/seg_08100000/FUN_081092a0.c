// undefined FUN_081092a0(void)
// entry 0x81092a0


int * FUN_081092a0(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_2 + 0x74) + 0x10);
  sVar1 = (short)iVar3;
  if ((*(byte *)(param_2 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_2 + 0x54) + (int)sVar1;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x54) - (int)sVar1;
  }
  iVar3 = iVar3 >> 0x10;
  if ((*(byte *)(param_2 + 10) & 0x20) == 0) {
    iVar3 = *(int *)(param_2 + 0x58) + iVar3;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x58) - iVar3;
  }
  *param_1 = iVar2;
  param_1[1] = iVar3;
  return param_1;
}


