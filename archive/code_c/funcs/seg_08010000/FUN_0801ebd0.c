// undefined FUN_0801ebd0(void)
// entry 0x801ebd0


undefined4 FUN_0801ebd0(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((param_1 & 0xffff) < 0x41) {
    iVar1 = (uint)*(ushort *)(DAT_0801ebec + 0xe) + (param_1 & 0xffff);
    if (iVar1 <= DAT_0801ebf0) {
      *(short *)(DAT_0801ebec + 0xe) = (short)iVar1;
    }
  }
  return in_lr;
}


