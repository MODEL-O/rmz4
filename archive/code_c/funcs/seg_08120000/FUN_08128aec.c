// undefined FUN_08128aec(void)
// entry 0x8128aec


undefined4 FUN_08128aec(undefined4 param_1,int param_2)

{
  byte *pbVar1;
  uint unaff_r4;
  undefined4 in_lr;
  
  pbVar1 = *(byte **)(param_2 + 0x40);
  *(uint *)(param_2 + 0x28) =
       (((unaff_r4 & DAT_08128b24 | (uint)*pbVar1) & DAT_08128b28 | (uint)pbVar1[1] << 8) &
        DAT_08128b2c | (uint)pbVar1[2] << 0x10) & DAT_08128b30 | (uint)pbVar1[3] << 0x18;
  *(byte **)(param_2 + 0x40) = pbVar1 + 4;
  return in_lr;
}


