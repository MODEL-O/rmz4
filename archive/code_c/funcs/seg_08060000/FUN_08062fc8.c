// undefined FUN_08062fc8(void)
// entry 0x8062fc8


undefined4 FUN_08062fc8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x108);
    FUN_08065a94(param_1,8);
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08063070) * 4 +
                               DAT_0806306c)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_08063074))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if ((*(int *)(param_1 + 200) == 0) || (*(char *)(*(int *)(param_1 + 200) + 0xbd) != '\0')) {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0xe) = 3;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


