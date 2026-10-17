// undefined FUN_080029dc(void)
// entry 0x80029dc


void FUN_080029dc(void)

{
  short *psVar1;
  short *psVar2;
  short sVar3;
  psVar2 = 0x02000022;
  psVar1 = 0x02000020;
  if ((*(short *)0x02000020) == 0) {
    if ((*(short *)0x02000022) == 0) goto LAB_08002a02;
    FUN_081277b4();
    *psVar2 = 0;
    sVar3 = 8;
  }
  else {
    sVar3 = (*(short *)0x02000020) + -1;
  }
  *psVar1 = sVar3;
LAB_08002a02:
  FUN_081277a8();
  return;
}


