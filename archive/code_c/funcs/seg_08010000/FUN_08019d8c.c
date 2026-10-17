// undefined FUN_08019d8c(void)
// entry 0x8019d8c


undefined4 FUN_08019d8c(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_08019dc0);
    *puVar1 = (ushort)DAT_08019dc4 & *puVar1 | 3;
    *(undefined4 *)(param_1 + 0x50) = 0x1e0;
    *(undefined4 *)(param_1 + 0x48) = 0xc0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


