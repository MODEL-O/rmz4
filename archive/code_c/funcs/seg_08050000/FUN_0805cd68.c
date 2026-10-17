// undefined FUN_0805cd68(void)
// entry 0x805cd68


undefined4 FUN_0805cd68(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [4];
  
  FUN_08129258(auStack_20,DAT_0805ce04,6);
  FUN_08129258(auStack_18,DAT_0805ce08,3);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0805ee6c(param_1,auStack_20[(uint)bVar1 * 2]);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805ce10) * 4 +
                               DAT_0805ce0c)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805ce14) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = auStack_18[bVar1];
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


