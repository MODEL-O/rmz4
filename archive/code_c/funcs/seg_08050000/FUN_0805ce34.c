// undefined FUN_0805ce34(void)
// entry 0x805ce34


undefined4 FUN_0805ce34(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_2c [8];
  ushort auStack_24 [4];
  
  FUN_08129258(auStack_2c,DAT_0805cf0c,6);
  FUN_08129258(auStack_24,DAT_0805cf10,6);
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar3 = FUN_0805f150(param_1);
    FUN_0805ee6c(param_1,auStack_2c[(uint)bVar1 * 2]);
    *(uint *)(param_1 + 0x5c) = (uint)auStack_24[iVar3] * ((bVar2 >> 4 & 1) * -2 + 1);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x54);
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805cf18) * 4 +
                               DAT_0805cf14)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805cf1c) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  if (DAT_0805cf24 < (uint)((*(int *)(param_1 + 0x60) - iVar3) + DAT_0805cf20)) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


