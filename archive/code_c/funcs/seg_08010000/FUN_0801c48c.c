// undefined FUN_0801c48c(void)
// entry 0x801c48c


undefined4 FUN_0801c48c(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  if (*(short *)(DAT_0801c4f0 + DAT_0801c4f4) != 0) {
    puVar1 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_0801c500);
    FUN_08128be0(*DAT_0801c4f8 + DAT_0801c4fc,(*puVar1 & 0x1f00) * 8 + 0x6000000,0x200);
    local_18[0] = 0;
    FUN_08128be0(local_18,(*puVar1 & 0x1f00) * 8 + DAT_0801c504,0x1000200);
  }
  return in_lr;
}


