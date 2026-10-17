// undefined FUN_08001bb0(void)
// entry 0x8001bb0


undefined8 FUN_08001bb0(int param_1,short param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = param_3 * 0x10000;
  sVar1 = 1;
  param_3 = param_3 & 0xffff;
  while (0 < (int)uVar3) {
    sVar2 = 3;
    do {
      sVar1 = FUN_08128f3c(param_2,param_1);
      sVar2 = sVar2 + -1;
      if (sVar2 == 0) break;
    } while (sVar1 != 0);
    if (sVar1 != 0) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 8;
    uVar3 = param_3 * 0x10000 + DAT_08001c00;
    param_3 = uVar3 >> 0x10;
  }
  return CONCAT44(in_lr,(int)sVar1);
}


