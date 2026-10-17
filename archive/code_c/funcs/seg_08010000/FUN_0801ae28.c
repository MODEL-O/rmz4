// undefined FUN_0801ae28(void)
// entry 0x801ae28


undefined4 FUN_0801ae28(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0801ae64);
    *puVar1 = (ushort)DAT_0801ae68 & *puVar1 | 3;
    *(undefined4 *)(param_1 + 0x4c) = DAT_0801ae6c;
    *(undefined4 *)(param_1 + 0x50) = 0x140;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


