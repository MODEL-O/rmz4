// undefined FUN_0807e940(void)
// entry 0x807e940


undefined8 FUN_0807e940(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    if ((param_2 + DAT_0807e964) - *(int *)(param_1 + 0xb4) <
        *(int *)(iVar2 * 4 + DAT_0807e968) + DAT_0807e96c) goto LAB_0807e978;
    iVar1 = iVar2;
  } while (iVar2 < 4);
  iVar1 = 4;
LAB_0807e978:
  return CONCAT44(in_lr,iVar1);
}


