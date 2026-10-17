// undefined FUN_0810a168(void)
// entry 0x810a168


undefined8 FUN_0810a168(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (((uVar1 & 0xf) != 0xf) && ((uVar1 & 0x8000) == 0)) {
    if ((uVar1 & 0xf) != 0) {
      uVar2 = 1;
      goto LAB_0810a1ae;
    }
    uVar1 = FUN_0801fb14(DAT_0810a1a8,param_1 + 0x54);
    if (0x1000 < uVar1) {
      uVar2 = 2;
      goto LAB_0810a1ae;
    }
  }
  uVar2 = 0;
LAB_0810a1ae:
  return CONCAT44(in_lr,uVar2);
}


