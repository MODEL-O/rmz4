// undefined FUN_08057c38(void)
// entry 0x8057c38


undefined4 FUN_08057c38(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08001d30(DAT_08057cf4,
                 ((uint)*(ushort *)(DAT_08057cf8 + 0x76) -
                 (uint)(*(ushort *)(DAT_08057cf4 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_08057cfc,
                 ((uint)*(ushort *)(DAT_08057d00 + 0x76) - (uint)*(byte *)(DAT_08057cfc + 7)) * 0x20
                 + 0x200);
    FUN_08090aa0(param_1);
    FUN_0801cf00(param_1,DAT_08057d04);
    *(undefined1 *)(param_1 + 0x12) = 0x50;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_08057d0c) * 4 + DAT_08057d08)) * 0x18 + DAT_08057d10);
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x04')) {
    *(undefined1 *)(param_1 + 0xe) = 4;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


