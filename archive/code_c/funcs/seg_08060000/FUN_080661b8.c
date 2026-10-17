// undefined FUN_080661b8(void)
// entry 0x80661b8


void FUN_080661b8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_3 * 8 + DAT_08066200 + 4);
  iVar1 = *(int *)(param_2 + 0xd4);
  *param_1 = *(int *)(param_2 + 0xd0) + *(int *)(param_3 * 8 + DAT_08066200) + 0x7800;
  param_1[1] = iVar1 + iVar2 + 0x8000;
  return;
}


