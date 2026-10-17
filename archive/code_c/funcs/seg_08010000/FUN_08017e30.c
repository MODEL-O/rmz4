// undefined FUN_08017e30(void)
// entry 0x8017e30


undefined4 FUN_08017e30(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_08017e5c);
    *puVar1 = (ushort)DAT_08017e60 & *puVar1 | 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


