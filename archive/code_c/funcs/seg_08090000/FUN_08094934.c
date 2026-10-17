// undefined FUN_08094934(void)
// entry 0x8094934


undefined8 FUN_08094934(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  param_2 = param_2 + 0x700;
  iVar3 = DAT_080949b0 + *(int *)(param_1 + 0x58);
  uVar1 = FUN_08007020(*(undefined4 *)(param_1 + 0x54));
  if ((ushort)((uVar1 & 0xf) - 2) < 6) {
    iVar4 = 0;
    do {
      uVar1 = FUN_08007020(param_2,iVar3);
      if (((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) &&
         (((uVar1 & 0xf) != 0xf && (5 < (ushort)((uVar1 & 0xf) - 2))))) goto LAB_08094a1e;
      iVar3 = iVar3 + 0x1000;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
  }
  else {
    iVar5 = 0;
    iVar4 = iVar3;
    do {
      uVar1 = FUN_08007020(param_2,iVar4);
      if (((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) && ((uVar1 & 0xf) != 0xf)) goto LAB_08094a1e;
      iVar4 = iVar4 + 0x1000;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    uVar1 = FUN_08007c7c(param_2,iVar3 + DAT_08094a24);
    if (((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) &&
       (((uVar1 & 0xf) != 0xf && (5 < (ushort)((uVar1 & 0xf) - 2))))) {
LAB_08094a1e:
      uVar2 = 1;
      goto LAB_08094a2a;
    }
  }
  uVar2 = 0;
LAB_08094a2a:
  return CONCAT44(in_lr,uVar2);
}


