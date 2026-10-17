// undefined FUN_0804ec94(void)
// entry 0x804ec94


undefined8 FUN_0804ec94(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = FUN_08007c7c();
  uVar2 = uVar1 & 0xf;
  if ((uVar2 == 0xf) || ((uVar1 & 0x8000) != 0)) {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}


