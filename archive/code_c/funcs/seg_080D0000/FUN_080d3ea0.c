// undefined FUN_080d3ea0(void)
// entry 0x80d3ea0


undefined4 FUN_080d3ea0(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)(*(int *)(param_1 + 0x28) + 0x142);
  *pbVar1 = *pbVar1 & 0xfb;
  FUN_080d0c30();
  return in_lr;
}


