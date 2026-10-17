// undefined FUN_080383cc(void)
// entry 0x80383cc


undefined8 FUN_080383cc(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0xf8) < 2) {
    FUN_0803a8f8(0,param_2);
    uVar1 = 1;
  }
  else {
    FUN_0803a8f8(1,param_2);
    uVar1 = 2;
  }
  return CONCAT44(in_lr,uVar1);
}


