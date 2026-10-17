// undefined FUN_08070e20(void)
// entry 0x8070e20


undefined4 FUN_08070e20(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_080736c4(param_1,1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_08070eb0) * 4 +
                               DAT_08070eac)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb9) * 4 + DAT_08070eb4))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  FUN_08073a68(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


