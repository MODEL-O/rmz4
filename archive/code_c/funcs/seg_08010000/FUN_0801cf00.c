// undefined FUN_0801cf00(void)
// entry 0x801cf00


undefined4 FUN_0801cf00(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = (param_2 & 0xffff) >> 8;
  if (uVar1 != *(byte *)(param_1 + 0x1e)) {
    if ((*(byte *)(param_1 + 0xb) & 4) == 0) {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(uVar1 * 4 + DAT_0801cfb4);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(uVar1 * 4 + DAT_0801cfb8);
    }
    else {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(uVar1 * 4 + DAT_0801cf2c);
      *(undefined1 *)(param_1 + 0x1f) = 0xff;
    }
    *(char *)(param_1 + 0x1e) = (char)((param_2 & 0xffff) >> 8);
  }
  if ((*(byte *)(param_1 + 0xb) & 4) == 0) {
    uVar2 = (uint)*(ushort *)(uVar1 * 2 + DAT_0801cfc0) + (uint)*(byte *)(param_1 + 0x22) & 0xffff;
    *(ushort *)(param_1 + 0x48) =
         (ushort)DAT_0801cfc4 & *(ushort *)(param_1 + 0x48) |
         *(short *)(uVar1 * 2 + DAT_0801cfbc) + *(short *)(param_1 + 0x20) & 0x3ffU;
    if ((*(byte *)(param_1 + 0xb) & 0x20) == 0) {
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf | (byte)(uVar2 << 4);
      *(char *)(param_1 + 0x23) = (char)uVar2;
    }
  }
  FUN_080034b8(param_1 + 0x6c,param_2 & 0xff);
  return in_lr;
}


