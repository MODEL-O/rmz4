// undefined FUN_080ed06c(void)
// entry 0x80ed06c


undefined4 FUN_080ed06c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08001d30(DAT_080ed0f8,
               ((uint)*(ushort *)(DAT_080ed0fc + 0x1b4) - (uint)(*(ushort *)(DAT_080ed0f8 + 6) >> 6)
               ) * 0x20 + 0x10000);
  FUN_08002208(DAT_080ed100,
               ((uint)*(ushort *)(DAT_080ed104 + 0x1b4) - (uint)*(byte *)(DAT_080ed100 + 7)) * 0x20
               + 0x200);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  FUN_0801cf00(param_1,0xda00);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
  *(undefined1 *)(param_1 + 0x25) = 0x1f;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ed108);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080ecefc(param_1);
  return in_lr;
}


