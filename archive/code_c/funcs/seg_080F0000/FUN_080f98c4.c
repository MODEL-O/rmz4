// undefined FUN_080f98c4(void)
// entry 0x80f98c4


undefined4 FUN_080f98c4(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_30 [3];
  byte abStack_24 [4];
  
  local_30[0] = *DAT_080f99ac;
  local_30[1] = DAT_080f99ac[1];
  local_30[2] = DAT_080f99ac[2];
  cVar1 = *(char *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_080f99b0);
    FUN_0801cf00(param_1,*(undefined2 *)(local_30 + bVar2));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  uVar3 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)((uVar3 + DAT_080f99bc) * 2 + DAT_080f99b8) * 4 +
                               DAT_080f99b4)) +
               (uint)*(byte *)(*(int *)(uVar3 * 4 +
                                        *(int *)(((int)(-*(uint *)(param_1 + 0x2c) |
                                                       *(uint *)(param_1 + 0x2c)) >> 0x1f & 4U) +
                                                DAT_080f99c0) + DAT_080f99c4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (cVar1 == '\x03') {
      FUN_08129258(abStack_24,DAT_080f99c8,3);
      *(byte *)(param_1 + 0xb4) = abStack_24[bVar2];
    }
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


