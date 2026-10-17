// undefined FUN_08017ee8(void)
// entry 0x8017ee8


undefined4 FUN_08017ee8(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  if (*(short *)(DAT_08017f4c + DAT_08017f50) != 0) {
    puVar1 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_08017f5c);
    FUN_08128be0(*DAT_08017f54 + DAT_08017f58,(*puVar1 & 0x1f00) * 8 + 0x6000000,0x200);
    local_18[0] = 0;
    FUN_08128be0(local_18,(*puVar1 & 0x1f00) * 8 + DAT_08017f60,0x1000200);
  }
  return in_lr;
}


