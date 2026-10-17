// undefined FUN_0800b00c(void)
// entry 0x800b00c


void FUN_0800b00c(int param_1)

{
  ushort *puVar1;
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + 0x02000a04);
    *puVar1 = (ushort)0x0000fffc & *puVar1 | 3;
  }
  return;
}


