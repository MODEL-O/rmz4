// undefined FUN_080b64e0(void)
// entry 0x80b64e0


undefined4 FUN_080b64e0(int param_1)

{
  short *psVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  psVar1 = (short *)(*(int *)(param_1 + 0x28) + 0xcc);
  if (*psVar1 != 0) {
    *psVar1 = *psVar1 + -1;
  }
  pbVar2 = (byte *)(*(int *)(param_1 + 0x28) + 0xce);
  *pbVar2 = *pbVar2 & ~(byte)(1 << *(sbyte *)(param_1 + 0xb5));
  FUN_0807f8ec(param_1);
  return in_lr;
}


