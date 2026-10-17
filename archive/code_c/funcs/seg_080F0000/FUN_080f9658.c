// undefined FUN_080f9658(void)
// entry 0x80f9658


undefined4 FUN_080f9658(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_20 [3];
  
  local_20[0] = *DAT_080f9718;
  local_20[1] = DAT_080f9718[1];
  local_20[2] = DAT_080f9718[2];
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)(local_20 + *(byte *)(param_1 + 0xb4)));
    *(undefined1 *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  uVar2 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)((uVar2 + DAT_080f9724) * 2 + DAT_080f9720) * 4 +
                               DAT_080f971c)) +
               (uint)*(byte *)(*(int *)(uVar2 * 4 +
                                        *(int *)(((int)(-*(uint *)(param_1 + 0x2c) |
                                                       *(uint *)(param_1 + 0x2c)) >> 0x1f & 4U) +
                                                DAT_080f9728) + DAT_080f972c) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) &&
     (*(byte *)(DAT_080f9730 + 0x26) < 2)) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


