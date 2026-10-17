// undefined FUN_080b2dc0(void)
// entry 0x80b2dc0


undefined8 FUN_080b2dc0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sVar1 = FUN_08007c7c(*(int *)(param_1 + 0x54) + 0xa00,*(int *)(param_1 + 0x58) + DAT_080b2df8);
  if ((sVar1 == 0) &&
     (sVar1 = FUN_08007c7c(*(int *)(param_1 + 0x54) + DAT_080b2dfc,
                           *(int *)(param_1 + 0x58) + DAT_080b2df8), sVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}


