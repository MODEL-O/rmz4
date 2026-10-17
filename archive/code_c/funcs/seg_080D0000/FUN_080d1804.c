// undefined FUN_080d1804(void)
// entry 0x80d1804


undefined4 FUN_080d1804(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08002c94(param_1 + 0x34,DAT_080d1878);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 1;
  FUN_08001d30(DAT_080d187c,
               ((uint)*(ushort *)(DAT_080d1880 + 6) - (uint)(*(ushort *)(DAT_080d187c + 6) >> 6)) *
               0x20 + 0x10000);
  FUN_08002208(DAT_080d1884,
               ((uint)*(ushort *)(DAT_080d1888 + 6) - (uint)*(byte *)(DAT_080d1884 + 7)) * 0x20 +
               0x200);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x9400;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d188c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_080d1890(param_1);
  return in_lr;
}


