// undefined FUN_080e1484(void)
// entry 0x80e1484


undefined8 FUN_080e1484(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar2 = 1;
  uVar3 = 0;
  do {
    bVar1 = **(byte **)(param_1 + 0x74);
    if ((bVar2 & bVar1) == 0) {
      **(byte **)(param_1 + 0x74) = bVar2 | bVar1;
      *(byte *)(param_1 + 0x78) = bVar2;
      goto LAB_080e14b8;
    }
    bVar2 = bVar2 << 1;
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 8);
  uVar3 = 0xff;
LAB_080e14b8:
  return CONCAT44(in_lr,uVar3);
}


