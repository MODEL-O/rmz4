// undefined FUN_080013e8(void)
// entry 0x80013e8


void FUN_080013e8(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  pbVar2 = (byte *)(param_1 * 0x18 + 0x03002a68);
  bVar1 = *pbVar2;
  if (bVar1 != 1) {
    *pbVar2 = bVar1 | 8;
  }
  return;
}


