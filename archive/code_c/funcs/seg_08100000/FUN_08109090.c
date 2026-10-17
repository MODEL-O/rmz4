// undefined FUN_08109090(void)
// entry 0x8109090


undefined8 FUN_08109090(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    if (((int)(uint)*(byte *)(*DAT_081090b4 + (uVar2 >> 2)) >> (uVar2 & 3) + 4 & 1U) != 0) {
      uVar1 = 0;
      goto LAB_081090c4;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x1c);
  uVar1 = 1;
LAB_081090c4:
  return CONCAT44(in_lr,uVar1);
}


