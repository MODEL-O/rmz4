// undefined FUN_08038a78(void)
// entry 0x8038a78


undefined8 FUN_08038a78(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0xc4) & DAT_08038a98) == DAT_08038a9c) &&
     ((*(uint *)(param_1 + 0xf0) & DAT_08038aa0) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}


