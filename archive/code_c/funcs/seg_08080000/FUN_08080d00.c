// undefined FUN_08080d00(void)
// entry 0x8080d00


undefined4 FUN_08080d00(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_08080d88);
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 +
                         ((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                         *(undefined1 *)(param_1 + 0x70)) + DAT_08080d90) * 8 +
                        DAT_08080d8c)));
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if (*(char *)(param_1 + 0x73) == '\x04') {
    FUN_08002b10(DAT_08080d94);
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined1 *)(param_1 + 0xe) = 6;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


