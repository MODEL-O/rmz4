// undefined FUN_08038a48(void)
// entry 0x8038a48


undefined8 FUN_08038a48(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 199) != '\x03') {
    if (*(char *)(param_1 + 199) == '\x02') {
      if (*(byte *)(param_1 + 0xf2) < 6) {
LAB_08038a70:
        uVar1 = 0;
        goto LAB_08038a72;
      }
    }
    else if (*(char *)(param_1 + 0xf2) != '\x06') goto LAB_08038a70;
  }
  uVar1 = 1;
LAB_08038a72:
  return CONCAT44(in_lr,uVar1);
}


