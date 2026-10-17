// undefined FUN_081273cc(void)
// entry 0x81273cc


void FUN_081273cc(void)

{
  uint uVar1;
  int unaff_r4;
  int unaff_r5;
  
  uVar1 = (int)((uint)*(byte *)(unaff_r4 + 0x12) * (*(char *)(unaff_r4 + 0x14) + 0x80) *
               (uint)*(byte *)(unaff_r5 + 0x10)) >> 0xe;
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *(char *)(unaff_r4 + 2) = (char)uVar1;
  uVar1 = (int)((uint)*(byte *)(unaff_r4 + 0x12) * (0x7f - *(char *)(unaff_r4 + 0x14)) *
               (uint)*(byte *)(unaff_r5 + 0x11)) >> 0xe;
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *(char *)(unaff_r4 + 3) = (char)uVar1;
  return;
}


