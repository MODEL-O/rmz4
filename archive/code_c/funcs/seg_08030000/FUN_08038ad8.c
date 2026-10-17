// undefined FUN_08038ad8(void)
// entry 0x8038ad8


undefined8 FUN_08038ad8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc6) != '\x14') {
    if (*(char *)(param_1 + 199) == '\x02') {
      if (*(char *)(param_1 + 0xf2) == '\0') {
LAB_08038b04:
        uVar1 = 0;
        goto LAB_08038b06;
      }
    }
    else if (*(char *)(param_1 + 0xf2) != '\x01') goto LAB_08038b04;
  }
  uVar1 = 1;
LAB_08038b06:
  return CONCAT44(in_lr,uVar1);
}


