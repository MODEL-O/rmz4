// undefined FUN_08018c80(void)
// entry 0x8018c80


undefined4 FUN_08018c80(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_08018cac);
    *puVar1 = (ushort)DAT_08018cb0 & *puVar1 | 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


