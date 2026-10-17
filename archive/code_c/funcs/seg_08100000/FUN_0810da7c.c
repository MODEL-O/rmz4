// undefined FUN_0810da7c(void)
// entry 0x810da7c


undefined4 FUN_0810da7c(byte *param_1,uint param_2,uint param_3,byte param_4)

{
  byte bVar1;
  short *psVar2;
  byte bVar3;
  short sVar4;
  undefined4 in_lr;
  
  if (param_3 < 0x20) {
    psVar2 = (short *)(*DAT_0810da9c + (param_2 + param_3 * 0x20) * 2);
    bVar3 = 0;
    while (((bVar1 = *param_1, bVar1 != 0 && (bVar3 < param_4)) && (param_2 < 0x20))) {
      if (bVar1 < 0x61) {
        sVar4 = 0x3a0;
      }
      else if (bVar1 < 0xa0) {
        sVar4 = 0x380;
      }
      else {
        sVar4 = 0x2e0;
      }
      *psVar2 = sVar4 + (ushort)*param_1;
      param_1 = param_1 + 1;
      psVar2 = psVar2 + 1;
      bVar3 = bVar3 + 1;
    }
  }
  return in_lr;
}


