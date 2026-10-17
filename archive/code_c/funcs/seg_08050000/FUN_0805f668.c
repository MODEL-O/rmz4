// undefined FUN_0805f668(void)
// entry 0x805f668


undefined4 FUN_0805f668(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0805f6b4);
    *(undefined1 *)(param_1 + 0xf) = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (((1 < *(byte *)(param_1 + 0xf)) && (*(byte *)(param_1 + 0xf) == 2)) &&
     ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


