// undefined FUN_0805e5ac(void)
// entry 0x805e5ac


undefined4 FUN_0805e5ac(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x5c);
    FUN_0805ee6c(param_1,0x2f);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805e62c) * 4 +
                               DAT_0805e628)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805e630) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


