// undefined FUN_0800e828(void)
// entry 0x800e828


undefined4 FUN_0800e828(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0800e854);
    *puVar1 = (ushort)DAT_0800e858 & *puVar1 | 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


