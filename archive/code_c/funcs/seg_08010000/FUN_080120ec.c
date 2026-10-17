// undefined FUN_080120ec(void)
// entry 0x80120ec


undefined4 FUN_080120ec(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_08012118);
    *puVar1 = (ushort)DAT_0801211c & *puVar1 | 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


