// undefined FUN_080f99cc(void)
// entry 0x80f99cc


undefined4 FUN_080f99cc(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0x8100);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  uVar1 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)((uVar1 + DAT_080f9a64) * 2 + DAT_080f9a60) * 4 +
                               DAT_080f9a5c)) +
               (uint)*(byte *)(*(int *)(uVar1 * 4 +
                                        *(int *)(((int)(-*(uint *)(param_1 + 0x2c) |
                                                       *(uint *)(param_1 + 0x2c)) >> 0x1f & 4U) +
                                                DAT_080f9a68) + DAT_080f9a6c) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


