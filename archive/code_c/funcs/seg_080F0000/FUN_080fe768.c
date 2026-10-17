// undefined FUN_080fe768(void)
// entry 0x80fe768


undefined4 FUN_080fe768(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 2;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = DAT_080fe7b8;
  *(undefined2 *)(param_1 + 0x26) = 0xf;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fe7bc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080fe730();
  return in_lr;
}


