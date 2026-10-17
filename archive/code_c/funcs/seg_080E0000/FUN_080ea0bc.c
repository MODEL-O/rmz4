// undefined FUN_080ea0bc(void)
// entry 0x80ea0bc


undefined4 FUN_080ea0bc(int param_1)

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
      bVar1 = *(byte *)(DAT_080ea188 + 4) & 8;
      if ((*(byte *)(DAT_080ea188 + 4) & 8) != 0) {
        return in_lr;
      }
      *(byte *)(param_1 + 0xd) = bVar1;
      goto LAB_080ea180;
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
  *(byte *)(DAT_080ea148 + 0x14) = *(byte *)(DAT_080ea148 + 0x14) | 0x40;
  *(byte *)(param_1 + 0xb8) = 0x13;
  FUN_08001ea4(DAT_080ea14c,
               ((uint)*(ushort *)(DAT_080ea150 + 0x26) - (uint)(*(ushort *)(DAT_080ea14c + 6) >> 6))
               * 0x20 + 0x10000);
  FUN_08002208(DAT_080ea154,
               ((uint)*(ushort *)(DAT_080ea158 + 0x26) - (uint)*(byte *)(DAT_080ea154 + 7)) * 0x20 +
               0x200);
  FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0xb8) << 8);
  FUN_0801cff0(param_1);
  FUN_080e9590(DAT_080ea15c);
  bVar1 = *(char *)(param_1 + 0xe) + 1;
LAB_080ea180:
  *(byte *)(param_1 + 0xe) = bVar1;
  return in_lr;
}


