// undefined FUN_081223fa(void)
// entry 0x81223fa


void FUN_081223fa(void)

{
  int unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_080025d8(0x33);
  FUN_080025d8(0x79);
  if ((byte)(*(char *)(unaff_r6 + 2) - 0x11U) < 7) {
    FUN_0810d85c((uint)*(ushort *)(DAT_08122430 + DAT_0812243c) + DAT_08122438,1,0x12);
  }
  else {
    FUN_0810d85c((uint)*(ushort *)(DAT_08122464 + 0x690) + DAT_08122468,1,0x12);
  }
  FUN_081228c8(unaff_r6);
                    /* WARNING: Could not recover jumptable at 0x08122460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


