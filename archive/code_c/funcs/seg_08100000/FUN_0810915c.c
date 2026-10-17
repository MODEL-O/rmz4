// undefined FUN_0810915c(void)
// entry 0x810915c


undefined8 FUN_0810915c(char param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *DAT_08109184 + 0x14;
  if (param_2 == 0) {
    param_2 = iVar1;
  }
  do {
    param_2 = *(int *)(param_2 + 4);
    if (param_2 == iVar1) goto LAB_08109180;
  } while (*(char *)(param_2 + 9) != param_1);
  if (param_2 == iVar1) {
LAB_08109180:
    param_2 = 0;
  }
  return CONCAT44(in_lr,param_2);
}


