// undefined FUN_080125c8(void)
// entry 0x80125c8


undefined4 FUN_080125c8(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_080125f4);
    *puVar1 = (ushort)DAT_080125f8 & *puVar1 | 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


