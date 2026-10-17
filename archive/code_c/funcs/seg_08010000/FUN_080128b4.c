// undefined FUN_080128b4(void)
// entry 0x80128b4


undefined4 FUN_080128b4(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_080128e0);
    *puVar1 = (ushort)DAT_080128e4 & *puVar1 | 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


