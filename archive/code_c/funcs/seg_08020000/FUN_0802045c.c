// undefined FUN_0802045c(void)
// entry 0x802045c


longlong FUN_0802045c(int param_1)

{
  int iVar1;
  uint in_lr;
  
  iVar1 = DAT_080204a4;
  if (*(char *)(param_1 + 0x17c) == '\0') {
    *(ushort *)(DAT_080204a4 + 8) = *(ushort *)(DAT_080204a4 + 8) | 1;
    *(byte *)(DAT_080204a8 + 4) = *(byte *)(DAT_080204a8 + 4) & 0xf7;
    if (*(char *)(iVar1 + 2) == '\0') {
      FUN_0801f63c(1);
      *(char *)(param_1 + 0x17c) = '\x01';
      FUN_080275f0(iVar1 + 0x10,*(undefined4 *)(*(int *)(DAT_080204ac + 4) + 4));
    }
  }
  return (ulonglong)in_lr << 0x20;
}


