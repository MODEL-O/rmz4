// undefined FUN_08072454(void)
// entry 0x8072454


undefined4 FUN_08072454(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_08072520);
    FUN_080736c4(param_1,0x11);
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_08072528) * 4 +
                               DAT_08072524)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb9) * 4 + DAT_0807252c))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  FUN_08073a68(param_1);
  if (*(char *)(param_1 + 0x12) == '\b') {
    local_1c = *(int *)(param_1 + 0x54) + (uVar1 * 2 + -1) * -0x1000;
    local_18 = *(int *)(param_1 + 0x58) + DAT_08072530;
    FUN_080aab48(param_1,&local_1c,0,uVar1);
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


