// undefined FUN_08000c98(void)
// entry 0x8000c98


undefined4 FUN_08000c98(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 in_lr;
  
  puVar1 = DAT_08000cc8;
  piVar2 = DAT_08000cc8 + -1;
  if (*piVar2 == 0) {
    if (DAT_08000cc8[6] == 0) {
      DAT_08000cc8[-4] = 0;
    }
    else {
      DAT_08000cc8[-6] = DAT_08000cc8[4];
      puVar1[-5] = puVar1[5];
      puVar1[-4] = puVar1[6];
      puVar1[6] = 0;
    }
  }
  else {
    DAT_08000cc8[-6] = DAT_08000cc8[-3];
    puVar1[-5] = puVar1[-2];
    puVar1[-4] = *piVar2;
    *piVar2 = 0;
  }
  FUN_08000e24();
  *puVar1 = puVar1[4];
  puVar1[1] = puVar1[5];
  puVar1[2] = puVar1[6];
  puVar1[6] = 0;
  puVar1[9] = puVar1[0xd];
  puVar1[10] = puVar1[0xe];
  puVar1[0xb] = puVar1[0xf];
  puVar1[0xf] = 0;
  FUN_08000edc();
  return in_lr;
}


