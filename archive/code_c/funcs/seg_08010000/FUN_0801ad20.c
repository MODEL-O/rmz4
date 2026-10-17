// undefined FUN_0801ad20(void)
// entry 0x801ad20


undefined4 FUN_0801ad20(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_0801ad64 = (short)DAT_0801ad68;
    puVar1 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0801ad6c);
    *puVar1 = (ushort)DAT_0801ad70 & *puVar1 | 3;
    *(undefined4 *)(param_1 + 0x4c) = 0x3c0;
    *(undefined4 *)(param_1 + 0x50) = 0x140;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


