// undefined FUN_08038b0c(void)
// entry 0x8038b0c


undefined8 FUN_08038b0c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 199) == '\x02') {
    if (*(byte *)(param_1 + 0xf2) < 2) {
LAB_08038b30:
      uVar1 = 0;
      goto LAB_08038b32;
    }
  }
  else if (*(char *)(param_1 + 0xf2) != '\x02') goto LAB_08038b30;
  uVar1 = 1;
LAB_08038b32:
  return CONCAT44(in_lr,uVar1);
}


