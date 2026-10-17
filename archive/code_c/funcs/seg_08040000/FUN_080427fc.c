// undefined FUN_080427fc(void)
// entry 0x80427fc


undefined8 FUN_080427fc(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = FUN_08007c7c();
  uVar1 = uVar1 & 0xffff;
  if (uVar1 == 0xf) {
    uVar1 = 0;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}


