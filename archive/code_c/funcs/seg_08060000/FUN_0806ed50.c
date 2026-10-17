// undefined FUN_0806ed50(void)
// entry 0x806ed50


undefined4 FUN_0806ed50(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0806ed84);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((*(ushort *)(DAT_0806ed88 + 8) & 8) == 0) {
    FUN_0806f1d8(param_1);
  }
  return in_lr;
}


