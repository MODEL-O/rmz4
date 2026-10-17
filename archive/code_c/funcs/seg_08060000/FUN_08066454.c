// undefined FUN_08066454(void)
// entry 0x8066454


undefined8 FUN_08066454(int param_1,int *param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xc0);
  iVar2 = *param_4 + 0xc00 >> 1;
  iVar3 = param_4[1] + 0x2800 >> 1;
  if (iVar4 != 0) {
    do {
      if (((uint)((*(int *)(iVar4 + 0x54) - (*param_2 + *param_3)) + iVar2) <= (uint)(iVar2 * 2)) &&
         ((uint)((*(int *)(iVar4 + 0x58) - (param_2[1] + param_3[1])) + iVar3) <= (uint)(iVar3 * 2))
         ) {
        uVar1 = 1;
        goto LAB_080664b2;
      }
      iVar4 = *(int *)(iVar4 + 0xc0);
    } while (iVar4 != 0);
  }
  uVar1 = 0;
LAB_080664b2:
  return CONCAT44(in_lr,uVar1);
}


