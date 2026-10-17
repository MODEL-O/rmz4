// undefined FUN_0802ad08(void)
// entry 0x802ad08


undefined4 FUN_0802ad08(void)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 in_lr;
  
  puVar1 = DAT_0802ad64;
  *DAT_0802ad64 = 0;
  FUN_0802ad9c(0);
  puVar1[2] = 0;
  uVar2 = 0;
  do {
    *(undefined4 *)(puVar1 + uVar2 * 4 + 4) = 0;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0xc);
  FUN_08001d30(DAT_0802ad68,
               ((uint)*(ushort *)(DAT_0802ad6c + 0x12) - (uint)(*(ushort *)(DAT_0802ad68 + 6) >> 6))
               * 0x20 + 0x10000);
  FUN_08002208(DAT_0802ad70,
               ((uint)*(ushort *)(DAT_0802ad74 + 0x12) - (uint)*(byte *)(DAT_0802ad70 + 7)) * 0x20 +
               0x200);
  return in_lr;
}


