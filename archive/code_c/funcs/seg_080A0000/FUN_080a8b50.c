// undefined FUN_080a8b50(void)
// entry 0x80a8b50


undefined4 FUN_080a8b50(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0x22) = 1;
  FUN_0801cf00(param_1,DAT_080a8bbc);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined1 *)(param_1 + 0x25) = 0x17;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a8bc0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080a896c(param_1);
  return in_lr;
}


