// undefined FUN_0801fb14(void)
// entry 0x801fb14


undefined8 FUN_0801fb14(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x38) - *param_2;
  if (iVar2 < 0) {
    iVar2 = DAT_0801fb2c - iVar2;
  }
  else {
    iVar2 = iVar2 + DAT_0801fb4c;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x3c) - param_2[1];
  if (iVar1 < 0) {
    iVar1 = DAT_0801fb50 - iVar1;
  }
  else {
    iVar1 = iVar1 + DAT_0801fb68;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (iVar1 <= iVar2) {
    iVar1 = iVar2;
  }
  return CONCAT44(in_lr,iVar1);
}


