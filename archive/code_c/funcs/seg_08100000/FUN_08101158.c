// undefined FUN_08101158(void)
// entry 0x8101158


undefined4 FUN_08101158(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      FUN_0801cff0(param_1);
      if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
        return in_lr;
      }
      bVar1 = *(byte *)(DAT_08101240 + 4) & 8;
      if ((*(byte *)(DAT_08101240 + 4) & 8) != 0) {
        return in_lr;
      }
      *(byte *)(param_1 + 0xd) = bVar1;
      goto LAB_08101234;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  *(byte *)(DAT_081011fc + 0x14) = *(byte *)(DAT_081011fc + 0x14) | 0x80;
  *(byte *)(param_1 + 0xb8) = 0x80;
  FUN_08001ea4(DAT_08101200 + 0xa00,
               ((uint)*(ushort *)(DAT_08101204 + 0x100) -
               (uint)(*(ushort *)(DAT_08101200 + 0xa06) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_08101208 + 0xa00,
               ((uint)*(ushort *)(DAT_0810120c + 0x100) - (uint)*(byte *)(DAT_08101208 + 0xa07)) *
               0x20 + 0x200);
  FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0xb8) << 8);
  FUN_0801cff0(param_1);
  FUN_080e9590(DAT_08101210);
  bVar1 = *(char *)(param_1 + 0xe) + 1;
LAB_08101234:
  *(byte *)(param_1 + 0xe) = bVar1;
  return in_lr;
}


