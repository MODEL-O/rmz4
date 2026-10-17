// undefined FUN_08016518(void)
// entry 0x8016518


undefined4 FUN_08016518(int param_1)

{
  ushort *puVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_0801658c);
    *puVar1 = (ushort)DAT_08016590 & *puVar1 | 3;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x100;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar2 = (byte *)(DAT_08016594 + DAT_08016598);
  if (((*pbVar2 & 1) == 0) && (0x880 < *(int *)(*DAT_0801659c + 0x54))) {
    FUN_08002b10(DAT_080165a0);
    *pbVar2 = *pbVar2 | 1;
  }
  *(int *)(param_1 + 0x50) = (int)((uint)*(ushort *)(DAT_08016594 + DAT_080165a4) << 0x10) >> 0x14;
  return in_lr;
}


