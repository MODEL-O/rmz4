// undefined FUN_080294b0(void)
// entry 0x80294b0


longlong FUN_080294b0(void)

{
  short *psVar1;
  uint in_lr;
  
  psVar1 = DAT_080294d4;
  if (*DAT_080294d4 != 0) {
    *(byte *)(DAT_080294d8 + 8) = *(byte *)(DAT_080294d8 + 8) & 0x7f;
    FUN_08002a50();
    *psVar1 = 0;
  }
  return (ulonglong)in_lr << 0x20;
}


