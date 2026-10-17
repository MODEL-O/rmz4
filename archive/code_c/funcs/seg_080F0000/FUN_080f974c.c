// undefined FUN_080f974c(void)
// entry 0x80f974c


undefined4 FUN_080f974c(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_20 [3];
  
  local_20[0] = *DAT_080f9804;
  local_20[1] = DAT_080f9804[1];
  local_20[2] = DAT_080f9804[2];
  bVar1 = *(byte *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_080f9808,&stack0xffffffec);
    FUN_080f9e74(param_1);
    FUN_0801cf00(param_1,*(undefined2 *)(local_20 + bVar1));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  uVar2 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)((uVar2 + DAT_080f9814) * 2 + DAT_080f9810) * 4 +
                               DAT_080f980c)) +
               (uint)*(byte *)(*(int *)(uVar2 * 4 +
                                        *(int *)(((int)(-*(uint *)(param_1 + 0x2c) |
                                                       *(uint *)(param_1 + 0x2c)) >> 0x1f & 4U) +
                                                DAT_080f9818) + DAT_080f981c) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


