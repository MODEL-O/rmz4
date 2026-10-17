// undefined FUN_08018c04(void)
// entry 0x8018c04


undefined4 FUN_08018c04(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_08018c40);
    *puVar1 = (ushort)DAT_08018c44 & *puVar1 | 3;
    *(undefined4 *)(param_1 + 0x4c) = DAT_08018c48;
    *(undefined4 *)(param_1 + 0x50) = 0x460;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


