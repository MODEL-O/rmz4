// undefined FUN_080559a0(void)
// entry 0x80559a0


undefined4 FUN_080559a0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_08055a14);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_08055a1c) * 4 + DAT_08055a18)) * 0x18 + DAT_08055a20);
  if ((*(byte *)(DAT_08055a24 + 0x12) & 1) == 0) {
    FUN_08059548(param_1);
  }
  return in_lr;
}


