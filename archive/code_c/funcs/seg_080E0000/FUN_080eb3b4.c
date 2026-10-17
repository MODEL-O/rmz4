// undefined FUN_080eb3b4(void)
// entry 0x80eb3b4


undefined4 FUN_080eb3b4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (*(char *)(iVar1 + 8) == '\0') {
    *(int *)(*(int *)(param_1 + 0x2c) + 0xb4) = iVar1;
    *(ushort *)(DAT_080eb3e0 + 0x14) = *(ushort *)(DAT_080eb3e0 + 0x14) | 1;
    *(undefined1 *)(iVar1 + DAT_080eb3e4) = 1;
  }
  return in_lr;
}


