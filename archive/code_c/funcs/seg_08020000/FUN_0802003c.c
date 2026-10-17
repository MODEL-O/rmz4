// undefined FUN_0802003c(void)
// entry 0x802003c


longlong FUN_0802003c(int param_1)

{
  int iVar1;
  uint in_lr;
  
  iVar1 = DAT_0802007c;
  if (*(char *)(param_1 + 0x17c) == '\0') {
    *(ushort *)(DAT_0802007c + 8) = *(ushort *)(DAT_0802007c + 8) | 1;
    *(byte *)(DAT_08020080 + 4) = *(byte *)(DAT_08020080 + 4) | 8;
    FUN_080275f0(iVar1 + 0x10,*(undefined4 *)*DAT_08020084);
    FUN_0801f63c(0);
    *(char *)(param_1 + 0x17c) = '\x01';
  }
  return (ulonglong)in_lr << 0x20;
}


