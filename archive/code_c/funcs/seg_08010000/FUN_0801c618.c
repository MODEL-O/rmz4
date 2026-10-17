// undefined FUN_0801c618(void)
// entry 0x801c618


undefined4 FUN_0801c618(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(DAT_0801c63c + DAT_0801c640);
  bVar1 = *pbVar2;
  *pbVar2 = bVar1 + 1;
  if (0x2c < (byte)(bVar1 + 1)) {
    *pbVar2 = 0;
  }
  FUN_080025d8(200);
  return in_lr;
}


