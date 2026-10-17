// undefined FUN_080f57a4(void)
// entry 0x80f57a4


undefined8 FUN_080f57a4(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar3 = 0;
  if (*param_2 != 0) goto LAB_080f57be;
  iVar1 = param_2[1];
  while (iVar1 != 0) {
LAB_080f57be:
    do {
      uVar3 = uVar3 + 1 & 0xff;
    } while (param_2[uVar3 * 2] != 0);
    iVar1 = (param_2 + uVar3 * 2)[1];
  }
  if (uVar3 < 2) {
    uVar5 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        uVar2 = FUN_080f5848(param_1,param_2 + uVar4 * 2);
        if (uVar2 < uVar5) {
          uVar5 = uVar2;
          uVar6 = uVar4;
        }
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < uVar3);
    }
    uVar5 = uVar6 + 1 & 0xff;
    if (uVar5 == uVar3) {
      uVar5 = 0;
    }
    uVar3 = FUN_080f5848(param_1,param_2 + uVar5 * 2);
    uVar4 = FUN_080f5848(param_2 + uVar6 * 2,param_2 + uVar5 * 2);
    if (uVar4 <= uVar3) {
      uVar5 = uVar6;
    }
  }
  return CONCAT44(in_lr,uVar5);
}


