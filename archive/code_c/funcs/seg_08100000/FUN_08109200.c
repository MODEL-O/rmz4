// undefined FUN_08109200(void)
// entry 0x8109200


undefined8 FUN_08109200(int *param_1,int *param_2,int *param_3,byte *param_4,short param_5)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = *param_3 - (*param_2 + *param_1);
  iVar3 = param_3[1] - (param_2[1] + param_1[1]);
  iVar5 = (int)param_5;
  if ((((uint)(iVar5 * 2) < (uint)(iVar4 + iVar5)) || ((uint)(iVar5 * 2) < (uint)(iVar3 + iVar5)))
     || (iVar5 * iVar5 < iVar4 * iVar4 + iVar3 * iVar3)) {
    bVar1 = FUN_0810d338(iVar4,iVar3);
    *param_4 = bVar1;
    iVar3 = DAT_0810928c;
    *param_1 = *param_1 +
               ((int)*(short *)((uint)(byte)(bVar1 + 0x40) * 2 + DAT_0810928c) * (int)param_5 >> 8);
    param_1[1] = param_1[1] + ((int)*(short *)((uint)*param_4 * 2 + iVar3) * (int)param_5 >> 8);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}


