// undefined FUN_080635c4(void)
// entry 0x80635c4


undefined4 FUN_080635c4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(int *)(param_1 + 0xc4) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0xb4) = 1;
    }
    FUN_08065a94(param_1,0x19);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_0806365c) * 4 +
                               DAT_08063658)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_08063660))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(int *)(param_1 + 0xc4) == 0) {
    FUN_08065cb0(param_1);
  }
  return in_lr;
}


