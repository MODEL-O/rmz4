// undefined FUN_0800d14c(void)
// entry 0x800d14c


void FUN_0800d14c(int param_1)

{
  ushort *puVar1;
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + 0x02000a04);
    *puVar1 = (ushort)0x0000fffc & *puVar1 | 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return;
}


