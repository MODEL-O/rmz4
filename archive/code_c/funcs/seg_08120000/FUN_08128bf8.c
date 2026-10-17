// undefined FUN_08128bf8(void)
// entry 0x8128bf8


undefined8 FUN_08128bf8(short param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if (param_1 == 4) {
    *DAT_08128c0c = DAT_08128c10;
  }
  else if (param_1 == 0x40) {
    *DAT_08128c20 = DAT_08128c24;
  }
  else {
    *DAT_08128c38 = DAT_08128c3c;
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}


