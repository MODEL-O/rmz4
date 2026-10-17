// undefined FUN_0802f084(void)
// entry 0x802f084


undefined8 FUN_0802f084(ushort param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_1 == 0) goto LAB_0802f0ae;
  if (param_1 != 1) {
    if (param_1 < 8) {
      if (param_2 != '\0') {
LAB_0802f0ae:
        uVar1 = 0;
        goto LAB_0802f0b0;
      }
    }
    else if ((0xd < param_1) || (param_2 == '\0')) goto LAB_0802f0ae;
  }
  uVar1 = 1;
LAB_0802f0b0:
  return CONCAT44(in_lr,uVar1);
}


