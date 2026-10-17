// undefined FUN_08001b38(void)
// entry 0x8001b38


undefined4 FUN_08001b38(short param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uVar1 = 0x02000018;
  uVar4 = param_3 * 0x10000;
  sVar2 = 1;
  param_3 = param_3 & 0xffff;
  while (0 < (int)uVar4) {
    sVar3 = 3;
    do {
      sVar2 = FUN_08128cc0(param_1,uVar1);
      sVar3 = sVar3 + -1;
      if (sVar3 == 0) break;
    } while (sVar2 != 0);
    if (sVar2 != 0) break;
    FUN_08000b30(uVar1,param_2,8);
    param_1 = param_1 + 1;
    param_2 = param_2 + 8;
    uVar4 = param_3 * 0x10000 + 0xfff80000;
    param_3 = uVar4 >> 0x10;
  }
  return (int)sVar2;
}


