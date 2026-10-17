// undefined FUN_08020088(void)
// entry 0x8020088


longlong FUN_08020088(int param_1)

{
  int iVar1;
  uint in_lr;
  
  iVar1 = DAT_080200c8;
  if (*(char *)(param_1 + 0x17c) == '\0') {
    *(ushort *)(DAT_080200c8 + 8) = *(ushort *)(DAT_080200c8 + 8) | 1;
    *(byte *)(DAT_080200cc + 4) = *(byte *)(DAT_080200cc + 4) & 0xf7;
    FUN_0801f63c(1);
    FUN_080275f0(iVar1 + 0x10,*(undefined4 *)(*DAT_080200d0 + 4));
    *(char *)(param_1 + 0x17c) = '\x01';
  }
  return (ulonglong)in_lr << 0x20;
}


