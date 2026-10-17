// undefined FUN_080540a4(void)
// entry 0x80540a4


undefined4 FUN_080540a4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x59);
    *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0xb8) = 1;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xbc) = 0x20;
    *(undefined1 *)(*(int *)(param_1 + 200) + 0xb8) = 5;
    *(undefined2 *)(*(int *)(param_1 + 200) + 0xbc) = 0x20;
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 4;
    FUN_0801cf00(param_1,0x2c00);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08054fb0(param_1);
  FUN_08055068(param_1,0);
  if ((*(short *)(*(int *)(param_1 + 0xc4) + 0xbc) == 0) &&
     (*(short *)(*(int *)(param_1 + 200) + 0xbc) == 0)) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


