// undefined FUN_0806b1c8(void)
// entry 0x806b1c8


undefined4 FUN_0806b1c8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_0806b224) {
      FUN_0801cf00(param_1);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 2;
  }
  if (((1 < *(byte *)(param_1 + 0xf)) && (*(byte *)(param_1 + 0xf) == 2)) &&
     ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


