// undefined FUN_0804d05c(void)
// entry 0x804d05c


undefined8 FUN_0804d05c(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  uVar2 = uVar1 & 0xffff;
  if (((uVar1 & 0xf) == 0xf) || ((uVar1 & 0x8000) != 0)) {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}


