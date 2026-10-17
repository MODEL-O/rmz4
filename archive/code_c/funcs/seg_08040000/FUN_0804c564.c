// undefined FUN_0804c564(void)
// entry 0x804c564


undefined8 FUN_0804c564(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = FUN_08007c7c();
  uVar2 = uVar1 & 0xffff;
  if (((uVar1 & 0xf) == 0xf) || ((uVar1 & 0x8000) != 0)) {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}


