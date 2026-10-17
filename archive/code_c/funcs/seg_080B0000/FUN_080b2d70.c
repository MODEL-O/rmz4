// undefined FUN_080b2d70(void)
// entry 0x80b2d70


undefined8 FUN_080b2d70(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if ((*(int *)(param_1 + 0x54) <= *(int *)(*DAT_080b2d98 + 0x54)) ||
       (*(int *)(*DAT_080b2d98 + 0x54) <= *(int *)(param_1 + 0x54) + DAT_080b2d9c)) {
LAB_080b2db6:
      uVar1 = 0;
      goto LAB_080b2db8;
    }
  }
  else if ((*(int *)(*DAT_080b2dbc + 0x54) <= *(int *)(param_1 + 0x54)) ||
          (*(int *)(param_1 + 0x54) + 0x4800 <= *(int *)(*DAT_080b2dbc + 0x54))) goto LAB_080b2db6;
  uVar1 = 1;
LAB_080b2db8:
  return CONCAT44(in_lr,uVar1);
}


