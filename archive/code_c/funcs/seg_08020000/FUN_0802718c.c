// undefined FUN_0802718c(void)
// entry 0x802718c


longlong FUN_0802718c(int param_1)

{
  int iVar1;
  uint in_lr;
  
  iVar1 = DAT_080271cc;
  if (*(char *)(param_1 + 0x17c) == '\0') {
    *(ushort *)(DAT_080271cc + 8) = *(ushort *)(DAT_080271cc + 8) | 1;
    *(byte *)(DAT_080271d0 + 4) = *(byte *)(DAT_080271d0 + 4) & 0xf7;
    FUN_0801f63c(1);
    FUN_080275f0(iVar1 + 0x10,*(undefined4 *)(*(int *)(DAT_080271d4 + 0x40) + 4));
    *(char *)(param_1 + 0x17c) = '\x01';
  }
  return (ulonglong)in_lr << 0x20;
}


