// undefined FUN_0803aaf4(void)
// entry 0x803aaf4


undefined8 FUN_0803aaf4(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  do {
    uVar2 = iVar3 + 0x4e;
    if (((int)(uint)*(byte *)(((int)uVar2 >> 3) + DAT_0803ab18) >> (uVar2 & 7) & 1U) == 0) {
      uVar1 = 0;
LAB_0803ab26:
      return CONCAT44(in_lr,uVar1);
    }
    if (uVar2 == 0x83) {
      uVar1 = 1;
      goto LAB_0803ab26;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


