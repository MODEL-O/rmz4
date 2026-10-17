// undefined FUN_0811d8c4(void)
// entry 0x811d8c4


undefined8 FUN_0811d8c4(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  param_1 = param_1 + DAT_0811d8f0;
  do {
    *(undefined1 *)(param_1 + uVar1) = 0xff;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  FUN_08108ed4(6);
  return CONCAT44(in_lr,1);
}


