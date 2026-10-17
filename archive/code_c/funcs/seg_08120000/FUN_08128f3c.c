// undefined FUN_08128f3c(void)
// entry 0x8128f3c


undefined8 FUN_08128f3c(undefined2 param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  undefined4 in_lr;
  
  for (bVar1 = 0; bVar1 < 3; bVar1 = bVar1 + 1) {
    param_3 = FUN_08128d70(param_1,param_2);
    param_3 = param_3 & 0xffff;
    if (param_3 == 0) {
      param_3 = FUN_08128ee4(param_1,param_2);
      param_3 = param_3 & 0xffff;
      if (param_3 == 0) break;
    }
  }
  return CONCAT44(in_lr,param_3);
}


