// undefined FUN_0801667c(void)
// entry 0x801667c


undefined4 FUN_0801667c(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_080166b8);
    *puVar1 = (ushort)DAT_080166bc & *puVar1 | 3;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = DAT_080166c0;
    *(undefined4 *)(param_1 + 0x50) = 0x500;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


