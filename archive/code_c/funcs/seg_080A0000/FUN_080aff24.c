// undefined FUN_080aff24(void)
// entry 0x80aff24


undefined4 FUN_080aff24(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_080b022c();
    FUN_0801cf00(param_1,DAT_080aff84 + (uint)*(byte *)(param_1 + 0xb7) & 0xffff);
    *(undefined1 *)(param_1 + 0x12) = 0x14;
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xd) = 3;
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xe) = 0;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = FUN_080b0318(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


