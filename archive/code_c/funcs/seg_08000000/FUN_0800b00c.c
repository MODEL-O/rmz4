// undefined FUN_0800b00c(void)
// entry 0x800b00c


undefined4 FUN_0800b00c(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0800b030);
    *puVar1 = (ushort)DAT_0800b034 & *puVar1 | 3;
  }
  return in_lr;
}


