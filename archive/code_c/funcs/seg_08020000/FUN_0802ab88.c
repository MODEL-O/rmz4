// undefined FUN_0802ab88(void)
// entry 0x802ab88


undefined8 FUN_0802ab88(undefined4 param_1,char param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *DAT_0802abc0 * DAT_0802abc4 + DAT_0802abc8;
  *DAT_0802abc0 = uVar1 & 0x7fffffff;
  if ((param_2 == -1) || (0x1f < ((uVar1 & 0x7fffffff) >> 0x10 & 0xff))) {
    uVar1 = FUN_0802aaec(param_1,param_3);
    uVar1 = uVar1 & 0xff;
  }
  else {
    FUN_08108908(param_2,param_3,0);
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}


