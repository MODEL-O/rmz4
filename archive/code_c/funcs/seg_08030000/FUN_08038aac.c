// undefined FUN_08038aac(void)
// entry 0x8038aac


undefined8 FUN_08038aac(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 199) == '\x02') {
    if (*(byte *)(param_1 + 0xf2) < 7) {
LAB_08038ad0:
      uVar1 = 0;
      goto LAB_08038ad2;
    }
  }
  else if (*(char *)(param_1 + 0xf2) != '\a') goto LAB_08038ad0;
  uVar1 = 1;
LAB_08038ad2:
  return CONCAT44(in_lr,uVar1);
}


