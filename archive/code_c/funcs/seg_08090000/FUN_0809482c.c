// undefined FUN_0809482c(void)
// entry 0x809482c


undefined8 FUN_0809482c(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  param_2 = param_2 + DAT_080948a8;
  iVar3 = DAT_080948ac + *(int *)(param_1 + 0x58);
  uVar1 = FUN_08007020(*(undefined4 *)(param_1 + 0x54));
  if ((ushort)((uVar1 & 0xf) - 8) < 6) {
    iVar4 = 0;
    do {
      uVar1 = FUN_08007020(param_2,iVar3);
      if (((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) &&
         (((uVar1 & 0xf) != 0xf && (5 < (ushort)((uVar1 & 0xf) - 8))))) goto LAB_0809491a;
      iVar3 = iVar3 + 0x1000;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
  }
  else {
    iVar5 = 0;
    iVar4 = iVar3;
    do {
      uVar1 = FUN_08007020(param_2,iVar4);
      if (((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) && ((uVar1 & 0xf) != 0xf)) goto LAB_0809491a;
      iVar4 = iVar4 + 0x1000;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    uVar1 = FUN_08007c7c(param_2,iVar3 + DAT_08094920);
    if (((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) &&
       (((uVar1 & 0xf) != 0xf && (5 < (ushort)((uVar1 & 0xf) - 8))))) {
LAB_0809491a:
      uVar2 = 1;
      goto LAB_08094926;
    }
  }
  uVar2 = 0;
LAB_08094926:
  return CONCAT44(in_lr,uVar2);
}


