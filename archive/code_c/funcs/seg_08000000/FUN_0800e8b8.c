// undefined FUN_0800e8b8(void)
// entry 0x800e8b8


undefined4 FUN_0800e8b8(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  if (*(short *)(DAT_0800e91c + DAT_0800e920) != 0) {
    puVar1 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_0800e92c);
    FUN_08128be0(*DAT_0800e924 + DAT_0800e928,(*puVar1 & 0x1f00) * 8 + 0x6000000,0x200);
    local_18[0] = 0;
    FUN_08128be0(local_18,(*puVar1 & 0x1f00) * 8 + DAT_0800e930,0x1000200);
  }
  return in_lr;
}


