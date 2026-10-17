// undefined FUN_0801bd38(void)
// entry 0x801bd38


undefined4 FUN_0801bd38(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0801bd64);
    *puVar1 = (ushort)DAT_0801bd68 & *puVar1 | 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


