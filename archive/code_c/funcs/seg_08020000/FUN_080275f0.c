// undefined FUN_080275f0(void)
// entry 0x80275f0


undefined4 FUN_080275f0(int param_1,undefined4 param_2)

{
  short *psVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(byte *)(DAT_08027624 + 0x12) = *(byte *)(DAT_08027624 + 0x12) | 1;
  *DAT_08027628 = 0;
  psVar1 = DAT_0802762c;
  if (*DAT_0802762c != 0) {
    *(byte *)(DAT_08027630 + 8) = *(byte *)(DAT_08027630 + 8) & 0x7f;
    FUN_08002a50();
    *psVar1 = 0;
  }
  return in_lr;
}


