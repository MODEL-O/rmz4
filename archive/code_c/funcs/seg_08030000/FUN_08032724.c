// undefined FUN_08032724(void)
// entry 0x8032724


undefined4 FUN_08032724(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x71) != '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined1 *)(param_1 + 0x170) = 1;
    FUN_08001ea4(DAT_08032780,
                 ((uint)*(ushort *)(DAT_08032784 + 0x1e) -
                 (uint)(*(ushort *)(DAT_08032780 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_08032788,
                 ((uint)*(ushort *)(DAT_0803278c + 0x1e) - (uint)*(byte *)(DAT_08032788 + 7)) * 0x20
                 + 0x200);
    *(undefined1 *)(param_1 + 0xf) = 2;
  }
  return in_lr;
}


