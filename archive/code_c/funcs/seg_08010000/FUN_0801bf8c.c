// undefined FUN_0801bf8c(void)
// entry 0x801bf8c


undefined4 FUN_0801bf8c(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(ushort *)(param_1 + 0x10) < 0x20) {
    uVar1 = *(ushort *)(param_1 + 0x10) + 1;
    *(short *)(param_1 + 0x10) = (short)uVar1;
    *(ushort *)(DAT_0801bfb4 + 2) = (ushort)((uVar1 & 0xffff) >> 4) & 0x1f | 0x1000;
  }
  return in_lr;
}


