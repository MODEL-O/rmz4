// undefined FUN_08001408(void)
// entry 0x8001408


void FUN_08001408(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  pbVar2 = (byte *)(param_1 * 0x18 + 0x03002a68);
  bVar1 = *pbVar2;
  if ((bVar1 != 1) && ((bVar1 & 8) != 0)) {
    *pbVar2 = bVar1 & 0xf7;
  }
  return;
}


