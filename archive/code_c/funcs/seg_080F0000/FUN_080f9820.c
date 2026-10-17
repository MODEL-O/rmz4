// undefined FUN_080f9820(void)
// entry 0x80f9820


undefined4 FUN_080f9820(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0x80;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  FUN_0801cff0(param_1);
  uVar2 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)((uVar2 + DAT_080f98b8) * 2 + DAT_080f98b4) * 4 +
                               DAT_080f98b0)) +
               (uint)*(byte *)(*(int *)(uVar2 * 4 +
                                        *(int *)(((int)(-*(uint *)(param_1 + 0x2c) |
                                                       *(uint *)(param_1 + 0x2c)) >> 0x1f & 4U) +
                                                DAT_080f98bc) + DAT_080f98c0) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


