// undefined FUN_080b6478(void)
// entry 0x80b6478


undefined4 FUN_080b6478(int param_1)

{
  int *piVar1;
  short *psVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  psVar2 = (short *)(*(int *)(param_1 + 0x28) + 0xcc);
  if (*psVar2 != 0) {
    *psVar2 = *psVar2 + -1;
  }
  pbVar3 = (byte *)(*(int *)(param_1 + 0x28) + 0xce);
  *pbVar3 = *pbVar3 & ~(byte)(1 << *(sbyte *)(param_1 + 0xb5));
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b64dc);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


