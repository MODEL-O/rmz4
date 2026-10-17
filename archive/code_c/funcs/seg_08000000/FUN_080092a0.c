// undefined FUN_080092a0(void)
// entry 0x80092a0


undefined8 FUN_080092a0(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((DAT_080092b4 < param_1) || ((int)param_2 < param_1 * 2)) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return CONCAT44(in_lr,param_2);
}


