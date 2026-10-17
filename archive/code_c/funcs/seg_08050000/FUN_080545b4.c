// undefined FUN_080545b4(void)
// entry 0x80545b4


undefined4 FUN_080545b4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0xb8) = 8;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xbc) = 0x20;
    *(undefined1 *)(*(int *)(param_1 + 200) + 0xb8) = 8;
    *(undefined2 *)(*(int *)(param_1 + 200) + 0xbc) = 0x20;
    FUN_0801cf00(param_1,0x2c00);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(short *)(*(int *)(param_1 + 0xc4) + 0xbc) == 0) &&
     (*(short *)(*(int *)(param_1 + 200) + 0xbc) == 0)) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


