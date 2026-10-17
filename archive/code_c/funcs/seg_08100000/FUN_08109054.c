// undefined FUN_08109054(void)
// entry 0x8109054


undefined8 FUN_08109054(void)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 in_lr;
  
  piVar2 = DAT_08109078;
  uVar6 = 0;
  do {
    pbVar5 = (byte *)(*piVar2 + (uVar6 >> 2));
    uVar3 = 0x10 << (uVar6 & 3);
    bVar1 = *pbVar5;
    *pbVar5 = (byte)uVar3 | bVar1;
    if ((uVar3 & 0xff) == 0 && bVar1 == 0) {
      uVar4 = 0;
      goto LAB_08109088;
    }
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 0x1c);
  uVar4 = 1;
LAB_08109088:
  return CONCAT44(in_lr,uVar4);
}


