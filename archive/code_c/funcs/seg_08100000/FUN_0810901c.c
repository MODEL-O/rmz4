// undefined FUN_0810901c(void)
// entry 0x810901c


undefined4 FUN_0810901c(uint param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  FUN_0810e528(0x100,0x5a);
  FUN_08002b10(6);
  pbVar1 = (byte *)(*DAT_08109050 + ((param_1 & 0xff) >> 2));
  *pbVar1 = (byte)(1 << (param_1 & 3)) | *pbVar1;
  return in_lr;
}


