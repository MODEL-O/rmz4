// undefined FUN_080d2c64(void)
// entry 0x80d2c64


undefined4 FUN_080d2c64(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cdbc();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  if (*(int *)(param_1 + 0x58) < *(int *)(DAT_080d2c9c + 0x3c) + DAT_080d2ca0) {
    FUN_0801cf00(param_1,DAT_080d2ca4);
  }
  else {
    FUN_0801cf00(param_1,0xc000);
  }
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(undefined2 *)(param_1 + 0x50) = 0x10;
  *(undefined2 *)(param_1 + 0x52) = 0x10;
  *(undefined1 *)(param_1 + 0x24) = 0;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d2d18);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080d2a30(param_1);
  return in_lr;
}


