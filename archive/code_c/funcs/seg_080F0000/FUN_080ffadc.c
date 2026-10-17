// undefined FUN_080ffadc(void)
// entry 0x80ffadc


void FUN_080ffadc(void)

{
  byte bVar1;
  int unaff_r4;
  code *UNRECOVERED_JUMPTABLE;
  
  bVar1 = *(byte *)(unaff_r4 + 0x12);
  *(byte *)(unaff_r4 + 0x12) = bVar1 + 1;
  if (0x78 < bVar1) {
    FUN_08002b10(DAT_080ffb04);
    *(undefined1 *)(unaff_r4 + 0x12) = 0;
  }
  FUN_0801cff0(unaff_r4);
                    /* WARNING: Could not recover jumptable at 0x080ffb02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


