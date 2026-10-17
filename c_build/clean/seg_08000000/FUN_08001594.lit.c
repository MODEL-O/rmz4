// undefined FUN_08001594(void)
// entry 0x8001594


undefined4 FUN_08001594(uint param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  int local_30;
  int iStack_2c;
  int local_28;
  undefined4 local_24;
  
  piVar1 = 0x08129554;
  param_1 = param_1 & 0xff;
  local_30 = (*(int *)0x08129544);
  iStack_2c = ((int *)0x08129544)[1];
  local_28 = ((int *)0x08129544)[2];
  local_24 = ((int *)0x08129544)[3];
  if (param_1 < 6) {
    sVar2 = 3;
    do {
      FUN_08001b38(param_1 * 0x55,&local_30,0x10);
      if (((((local_30 == *piVar1) && (local_28 == param_2)) && (local_24._1_1_ == '\b')) &&
          ((local_24 >> 0x18 & 0x7f) == param_1)) ||
         (((FUN_08001b38((param_1 + 6) * 0x55,&local_30,0x10), local_30 == *piVar1 &&
           (local_28 == param_2)) &&
          ((local_24._1_1_ == '\b' && ((local_24 >> 0x18 & 0x7f) == param_1)))))) {
        uVar3 = 1;
        goto LAB_08001644;
      }
      sVar2 = sVar2 + -1;
    } while (sVar2 != 0);
  }
  uVar3 = 0;
LAB_08001644:
  return uVar3;
}


