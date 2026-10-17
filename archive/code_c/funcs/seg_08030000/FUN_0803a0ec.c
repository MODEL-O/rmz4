// undefined FUN_0803a0ec(void)
// entry 0x803a0ec


undefined8 FUN_0803a0ec(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 199) == '\x02') {
    if (*(char *)(param_1 + 0xf3) != '\0') goto LAB_0803a10e;
LAB_0803a11e:
    if (2 < *(byte *)(param_1 + 0x148)) {
      uVar1 = 0;
      goto LAB_0803a130;
    }
  }
  else {
    if (*(char *)(param_1 + 0xf3) != '\x01') goto LAB_0803a11e;
LAB_0803a10e:
    if (3 < *(byte *)(param_1 + 0x148)) {
      uVar1 = 0;
      goto LAB_0803a130;
    }
  }
  uVar1 = 1;
LAB_0803a130:
  return CONCAT44(in_lr,uVar1);
}


