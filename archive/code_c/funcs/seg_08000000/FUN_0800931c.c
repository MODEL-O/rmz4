// undefined FUN_0800931c(void)
// entry 0x800931c


undefined8 FUN_0800931c(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((DAT_0800933c < param_1) &&
     ((DAT_08009340 < param_1 || ((int)param_2 < (param_1 + DAT_08009344) * 4)))) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return CONCAT44(in_lr,param_2);
}


