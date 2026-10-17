// undefined FUN_0805a044(void)
// entry 0x805a044


undefined4 FUN_0805a044(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0805a0ac);
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_0805a0b0) {
      FUN_0801cf00(param_1);
      *(undefined1 *)(param_1 + 0xbd) = 1;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4) + DAT_0805a0b4;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


