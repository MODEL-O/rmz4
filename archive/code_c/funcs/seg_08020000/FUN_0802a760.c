// undefined FUN_0802a760(void)
// entry 0x802a760


undefined4 FUN_0802a760(ushort param_1)

{
  short *psVar1;
  undefined4 in_lr;
  
  psVar1 = (short *)FUN_08000a70(2);
  if (psVar1 != (short *)0x0) {
    *psVar1 = (short)DAT_0802a798 - (param_1 & 0xff);
    FUN_08001f1c(psVar1,(*DAT_0802a79c & 0x1f00) * 8 + DAT_0802a7a0,2);
  }
  return in_lr;
}


