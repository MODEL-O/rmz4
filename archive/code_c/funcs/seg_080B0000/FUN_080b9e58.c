// undefined FUN_080b9e58(void)
// entry 0x80b9e58


undefined8 FUN_080b9e58(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_080b9e88 < *(int *)(param_1 + 0x58)) ||
     (((*(int *)(param_1 + 0x54) <= DAT_080b9e8c || (DAT_080b9e90 < *(int *)(param_1 + 0x58))) &&
      ((*(int *)(param_1 + 0x54) <= DAT_080b9e94 || (*(int *)(param_1 + 0x58) < 0xf001)))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}


