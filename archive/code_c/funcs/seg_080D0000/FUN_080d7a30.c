// undefined FUN_080d7a30(void)
// entry 0x80d7a30


undefined4 FUN_080d7a30(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d7a70);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)((uint)*(byte *)(param_1 + 0x10) + DAT_080d7a74);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cc9c(param_1);
  FUN_080d7a78(param_1);
  return in_lr;
}


