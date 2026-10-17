// undefined FUN_080c089c(void)
// entry 0x80c089c


undefined4 FUN_080c089c(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  sbyte asStack_c [4];
  
  FUN_08129258(asStack_c,DAT_080c08dc,2);
  if (*(char *)(param_1 + 0xf) == '\0') {
    puVar1 = (ushort *)(*(int *)(param_1 + 0x28) + 0xb4);
    *puVar1 = (ushort)(1 << asStack_c[*(byte *)(param_1 + 0x11)]) | *puVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  return in_lr;
}


