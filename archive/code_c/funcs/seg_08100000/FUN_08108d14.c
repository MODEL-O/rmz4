// undefined FUN_08108d14(void)
// entry 0x8108d14


undefined8 FUN_08108d14(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = FUN_08007c7c(param_1 + DAT_08108d50,param_2);
  uVar1 = uVar1 & 0xffff;
  uVar2 = FUN_08007c7c(param_1 + 0x700,param_2);
  uVar2 = uVar2 & 0xffff;
  if (uVar1 == 0xf) {
    uVar1 = 0;
  }
  if (uVar2 == 0xf) {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar1 | uVar2);
}


