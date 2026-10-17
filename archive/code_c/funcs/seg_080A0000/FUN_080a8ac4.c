// undefined FUN_080a8ac4(void)
// entry 0x80a8ac4


undefined4 FUN_080a8ac4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0x22) = 1;
  FUN_0801cf00(param_1,DAT_080a8b48);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined1 *)(param_1 + 0x25) = 0x16;
  FUN_080a8884(*(undefined4 *)(param_1 + 0x28),param_1,*(undefined1 *)(param_1 + 0x11));
  FUN_080a88e8(*(undefined4 *)(param_1 + 0x28),param_1,*(undefined4 *)(param_1 + 0x2c),
               *(undefined1 *)(param_1 + 0x11));
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a8b4c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080a896c(param_1);
  return in_lr;
}


