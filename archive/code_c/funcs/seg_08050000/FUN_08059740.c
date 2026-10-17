// undefined FUN_08059740(void)
// entry 0x8059740


undefined4 FUN_08059740(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0xb4) & 1) != 0) {
    pbVar1 = (byte *)(param_1 + 0xb5);
    *pbVar1 = *pbVar1 + 2;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0xbc) + *(short *)((uint)*pbVar1 * 2 + DAT_08059778) * 2;
  }
  return in_lr;
}


