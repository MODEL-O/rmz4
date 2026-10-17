// undefined FUN_08001330(void)
// entry 0x8001330


undefined4 FUN_08001330(undefined1 *param_1,int param_2)

{
  undefined4 in_lr;
  
  if (param_2 != 0) {
    *(short *)(param_1 + 2) = (short)param_2;
    *param_1 = 4;
    FUN_08000300(param_1 + 4,param_1 + 8,*DAT_08001350);
  }
  return in_lr;
}


