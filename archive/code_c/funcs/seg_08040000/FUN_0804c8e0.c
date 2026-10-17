// undefined FUN_0804c8e0(void)
// entry 0x804c8e0


undefined4 FUN_0804c8e0(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804c930);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_0804c934);
  FUN_0801cff0(param_1);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0x40;
  FUN_0804c728(param_1);
  return in_lr;
}


