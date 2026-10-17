// undefined FUN_0805b718(void)
// entry 0x805b718


undefined4 FUN_0805b718(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0805b7b8);
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_0805b7bc) {
      FUN_0801cf00(param_1);
      *(undefined1 *)(param_1 + 0xbd) = 1;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffe0;
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar1 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar1 < DAT_0805b7c0) {
      *(int *)(param_1 + 0x60) = DAT_0805b7c0;
    }
  }
  if ((0x14000 < (uint)((*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x58)) + DAT_0805b7c4)) &&
     ((*(undefined1 *)(param_1 + 0x12) = 0, *(int *)(param_1 + 200) == 0 ||
      (*(char *)(param_1 + 0xbf) != '\x01')))) {
    FUN_0805c174(param_1);
  }
  return in_lr;
}


