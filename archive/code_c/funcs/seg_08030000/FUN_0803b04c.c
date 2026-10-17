// undefined FUN_0803b04c(void)
// entry 0x803b04c


undefined8 FUN_0803b04c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar2 = DAT_0803b07c;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar2 = 0xb00;
  }
  *param_2 = iVar1 + iVar2;
  param_2[1] = *(int *)(param_1 + 0x58) + 0x400;
  return CONCAT44(in_lr,1);
}


