// undefined FUN_080543bc(void)
// entry 0x80543bc


undefined4 FUN_080543bc(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0xb8) = 6;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xbc) = 0x28;
    *(undefined1 *)(*(int *)(param_1 + 200) + 0xb8) = 2;
    *(undefined2 *)(*(int *)(param_1 + 200) + 0xbc) = 0x28;
    FUN_0801cf00(param_1,0x2c00);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08054fb0(param_1);
  FUN_08055068(param_1,0);
  if ((*(short *)(*(int *)(param_1 + 0xc4) + 0xbc) == 0) &&
     (*(short *)(*(int *)(param_1 + 200) + 0xbc) == 0)) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


