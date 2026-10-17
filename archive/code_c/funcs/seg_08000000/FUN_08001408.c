// undefined FUN_08001408(void)
// entry 0x8001408


undefined4 FUN_08001408(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(param_1 * 0x18 + DAT_0800142c);
  bVar1 = *pbVar2;
  if ((bVar1 != 1) && ((bVar1 & 8) != 0)) {
    *pbVar2 = bVar1 & 0xf7;
  }
  return in_lr;
}


