// undefined FUN_0801aeb4(void)
// entry 0x801aeb4


undefined4 FUN_0801aeb4(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0801aef0);
    *puVar1 = (ushort)DAT_0801aef4 & *puVar1 | 3;
    *(undefined4 *)(param_1 + 0x4c) = 0x870;
    *(undefined4 *)(param_1 + 0x50) = 0xa0;
    *(undefined4 *)(param_1 + 0x44) = 0x80;
    *(undefined4 *)(param_1 + 0x48) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


