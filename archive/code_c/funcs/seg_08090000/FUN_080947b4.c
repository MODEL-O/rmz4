// undefined FUN_080947b4(void)
// entry 0x80947b4


undefined8 FUN_080947b4(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  param_3 = param_3 + 0x800;
  param_2 = param_2 + DAT_0809481c;
  iVar5 = 0;
  iVar4 = param_2;
  do {
    sVar1 = FUN_08007c7c(iVar4,param_3);
    if ((sVar1 != 0) && (uVar2 = FUN_08007c7c(iVar4,param_3), (uVar2 & 0xf) != 0xf))
    goto LAB_08094818;
    iVar4 = iVar4 + 0x1000;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 1);
  param_2 = param_2 + 0xe00;
  sVar1 = FUN_08007c7c(param_2,param_3);
  if ((sVar1 == 0) || (uVar2 = FUN_08007c7c(param_2,param_3), (uVar2 & 0xf) == 0xf)) {
    uVar3 = 0;
  }
  else {
LAB_08094818:
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}


