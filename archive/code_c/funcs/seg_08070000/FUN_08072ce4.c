// undefined FUN_08072ce4(void)
// entry 0x8072ce4


undefined4 FUN_08072ce4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_080e3630(param_1,param_1 + 0x54,0,0);
    FUN_080736c4(param_1,0x16);
    *(undefined1 *)(param_1 + 0x12) = 0x44;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_08072d9c) * 4 +
                               DAT_08072d98)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb9) * 4 + DAT_08072da0))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if (*(char *)(param_1 + 0x12) == '$') {
    *(undefined1 *)(param_1 + 200) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0xb4) = 0;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


