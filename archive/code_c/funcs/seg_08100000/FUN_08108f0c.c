// undefined FUN_08108f0c(void)
// entry 0x8108f0c


undefined8 FUN_08108f0c(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    if (((int)(uint)*(byte *)(*DAT_08108f30 + (uVar2 >> 1)) >> ((uVar2 & 1) << 2) & 0xfU) == 0) {
      uVar1 = 0;
      goto LAB_08108f40;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x33);
  uVar1 = 1;
LAB_08108f40:
  return CONCAT44(in_lr,uVar1);
}


