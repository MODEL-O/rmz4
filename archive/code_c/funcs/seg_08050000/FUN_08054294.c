// undefined FUN_08054294(void)
// entry 0x8054294


undefined4 FUN_08054294(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0xb8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xbc) = 8;
    *(undefined1 *)(*(int *)(param_1 + 200) + 0xb8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 200) + 0xbc) = 8;
    FUN_0801cf00(param_1,0x2c00);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08054fb0(param_1);
  iVar1 = FUN_08055068(param_1,0);
  if (((iVar1 == 0) && (*(short *)(*(int *)(param_1 + 0xc4) + 0xbc) == 0)) &&
     (*(short *)(*(int *)(param_1 + 200) + 0xbc) == 0)) {
    FUN_08054ff0(param_1);
  }
  return in_lr;
}


