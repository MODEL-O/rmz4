// undefined FUN_0805ca28(void)
// entry 0x805ca28


undefined4 FUN_0805ca28(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined1 auStack_18 [8];
  
  FUN_08129258(auStack_18,DAT_0805cb08,6);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08001d30(DAT_0805cb0c,
                 ((uint)*(ushort *)(DAT_0805cb10 + 0xa4) -
                 (uint)(*(ushort *)(DAT_0805cb0c + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_0805cb14,
                 ((uint)*(ushort *)(DAT_0805cb18 + 0xa4) - (uint)*(byte *)(DAT_0805cb14 + 7)) * 0x20
                 + 0x200);
    uVar2 = *DAT_0805cb1c * DAT_0805cb20 + DAT_0805cb24;
    *DAT_0805cb1c = uVar2 & 0x7fffffff;
    *(byte *)(param_1 + 0xbb) = (byte)(uVar2 >> 0x10) & 3;
    *(undefined1 *)(param_1 + 0xbc) = 0;
    FUN_0805ee6c(param_1,auStack_18[(uint)bVar1 * 2]);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805cb2c) * 4 +
                               DAT_0805cb28)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805cb30) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


