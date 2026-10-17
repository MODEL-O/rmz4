// undefined FUN_0804e504(void)
// entry 0x804e504


undefined8 FUN_0804e504(void)

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


