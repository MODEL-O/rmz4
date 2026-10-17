// undefined FUN_08126ef0(void)
// entry 0x8126ef0


undefined4 FUN_08126ef0(undefined4 param_1,undefined1 *param_2)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  for (pbVar1 = *(byte **)(param_2 + 0x20); pbVar1 != (byte *)0x0;
      pbVar1 = *(byte **)(pbVar1 + 0x34)) {
    if ((*pbVar1 & 199) != 0) {
      *pbVar1 = *pbVar1 | 0x40;
    }
    FUN_08126ed0(pbVar1);
  }
  *param_2 = 0;
  return in_lr;
}


